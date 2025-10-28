void dRICH_TOF_Impact(TString infile="PATH_TO_INPUT_FILE"){
  // Set output file for the histograms
  TFile *ofile = TFile::Open("EfficiencyAnalysis_Out.root","RECREATE");
  
  // Set up input file chain
  TChain *mychain = new TChain("events");
  mychain->Add(infile);
  
  // Initialize reader
  TTreeReader tree_reader(mychain);
  std::cout<<mychain->GetEntries()<<std::endl;
  // Get Particle Information
  TTreeReaderArray<int> partGenStat(tree_reader, "MCParticles.generatorStatus");
  TTreeReaderArray<float> partMomX(tree_reader, "MCParticles.momentum.x");
  TTreeReaderArray<float> partMomY(tree_reader, "MCParticles.momentum.y");
  TTreeReaderArray<float> partMomZ(tree_reader, "MCParticles.momentum.z");
  TTreeReaderArray<int> partPdg(tree_reader, "MCParticles.PDG");
  
  // Get Reconstructed Track Information
  TTreeReaderArray<float> trackMomX(tree_reader, "ReconstructedChargedParticles.momentum.x");
  TTreeReaderArray<float> trackMomY(tree_reader, "ReconstructedChargedParticles.momentum.y");
  TTreeReaderArray<float> trackMomZ(tree_reader, "ReconstructedChargedParticles.momentum.z");
  
  // Get Associations Between MCParticles and ReconstructedChargedParticles
  TTreeReaderArray<unsigned int> recoAssoc(tree_reader, "ReconstructedChargedParticleAssociations.recID");
  TTreeReaderArray<unsigned int> simuAssoc(tree_reader, "ReconstructedChargedParticleAssociations.simID");

  
  //Get Cherenkov Angles(Aerogel)
  TTreeReaderArray<unsigned int> thetaPhiAeroBegin(tree_reader,"DRICHAerogelIrtCherenkovParticleID.thetaPhiPhotons_begin");
  TTreeReaderArray<unsigned int> thetaPhiAeroEnd(tree_reader,"DRICHAerogelIrtCherenkovParticleID.thetaPhiPhotons_end");
  TTreeReaderArray<float> thetaAero(tree_reader,"_DRICHAerogelIrtCherenkovParticleID_thetaPhiPhotons.a");

  //Get Cherenkov Angles(Gas)
  TTreeReaderArray<unsigned int> thetaPhiGasBegin(tree_reader,"DRICHGasIrtCherenkovParticleID.thetaPhiPhotons_begin");
  TTreeReaderArray<unsigned int> thetaPhiGasEnd(tree_reader,"DRICHGasIrtCherenkovParticleID.thetaPhiPhotons_end");
  TTreeReaderArray<float> thetaGas(tree_reader,"_DRICHGasIrtCherenkovParticleID_thetaPhiPhotons.a");
  
  // Define Histograms
  TH1D *partEta = new TH1D("partEta","Eta of Thrown Charged Particles;Eta",100,-5.,5.);
  TH1D *matchedRecoEta = new TH1D("matchedRecoEta","Eta of Rec. Charged Particles That Have Matching Track",100,0.,5.);
  TH1D *matchedPartTrackDeltaEta = new TH1D("matchedPartTrackDeltaR","Delta Eta Between Matching Thrown and Reconstructed Charged Particle",100,-1.0,1.0);
  TH1D *partMom= new TH1D("partMom","Momentum of Thrown Charged Particles; p(GeV/c)",100,0,50);  
  TH1D *matchedRecoMom= new TH1D("matchedRecoMom","Momentum of Thrown Charged Particles That Have Matched Track; p(GeV/c)",100,0.,50.);  
  TH1D *matchedPartMomTrackDeltaR= new TH1D("matchedPartMomDeltaR","DeltaR Between Matching Momentum of Thrown and Reconstructed Charged Particles; p(GeV/c)",100,-20,20);  

  TH2D *momVsCherenkovAngleA =  new TH2D("momvsCherenkovAngleA","Cherenkov Angle (Aerogel) as Momentum; p(GeV/c); Theta(mrad)",100,0,50,100,150,200);
  TH2D *momVsCherenkovAngleTrA =  new TH2D("momvsCherenkovAngleTrA","Track Cherenkov Angle (Aerogel) as Momentum; p(GeV/c); Theta(mrad)",100,0,50,100,150,200);
  TH2D *momVsCherenkovAngleG =  new TH2D("momvsCherenkovAngleG","Cherenkov Angle (Gas) as Momentum; p(GeV/c); Theta(mrad)",100,0,50,100,0,50);
  TH2D *momVsCherenkovAngleTrG =  new TH2D("momvsCherenkovAngleTrG","Track Cherenkov Angle (Gas)as Momentum; p(GeV/c); Theta(mrad)",100,0,50,100,0,50);
  unsigned evt=0;
  while(tree_reader.Next()) { // Loop over events
    evt++;
    for(unsigned int i=0; i<partGenStat.GetSize(); i++){ // Loop over thrown particles
      //if(partGenStat[i]!=1) continue;
      if(partGenStat[i] == 1){ // Select stable thrown particles
	int pdg = TMath::Abs(partPdg[i]);
	if(pdg == 11 || pdg == 13 || pdg == 211 || pdg == 321 || pdg == 2212){ // Look at charged particles (electrons, muons, pions, kaons, protons)
	  TVector3 trueMom(partMomX[i],partMomY[i],partMomZ[i]);

	  float trueEta = trueMom.PseudoRapidity();
	  float truePhi = trueMom.Phi();
	  float trueP   = trueMom.Mag();  
	  partEta->Fill(trueEta);
	  partMom->Fill(trueP);
	  std::cout<<evt-1<<" here"<<std::endl;
	  for(unsigned int j=0; j<simuAssoc.GetSize(); j++){ // Loop over associations to find matching ReconstructedChargedParticle
	    if(simuAssoc[j] == i){ // Find association index matching the index of the thrown particle we are looking at
	      TVector3 recMom(trackMomX[recoAssoc[j]],trackMomY[recoAssoc[j]],trackMomZ[recoAssoc[j]]); // recoAssoc[j] is the index of the matched ReconstructedChargedParticle
	      float recP = recMom.Mag();
	      // Check the distance between the thrown and reconstructed particle
	      float recoEta = recMom.PseudoRapidity();
	      float deltaEta = trueEta - recMom.PseudoRapidity();
	      float deltaPhi = TVector2::Phi_mpi_pi(truePhi - recMom.Phi());
	      float deltaR = TMath::Sqrt(deltaEta*deltaEta + deltaPhi*deltaPhi);
	      //Difference in Momentum
	      float deltaP = trueP-recP;

	      matchedRecoEta->Fill(recoEta); // Plot the Reco eta if a matched ReconstructedChargedParticle was found
	      matchedPartTrackDeltaEta->Fill(deltaEta);
	      
	      matchedRecoMom->Fill(recP);
	      matchedPartMomTrackDeltaR->Fill(deltaP); // Plot the thrown eta if a matched ReconstructedChargedParticle was found
	      float trChAngle =0.0;
	      unsigned np =0;
	      for(unsigned int k=thetaPhiAeroBegin[j]; k<thetaPhiAeroEnd[j]; k++){//loop over Cherenkov angles
		float aerogelAngle = thetaAero[k]*1e3;
		trChAngle += aerogelAngle;
		np++;
		//printf("%lf\n",aerogelAngle*1e3);
		momVsCherenkovAngleA->Fill(recP,aerogelAngle);
	      }// Aerogel Cherenkov Angle
	      trChAngle/= np;
	      momVsCherenkovAngleTrA->Fill(recP,trChAngle);

	      trChAngle =0.0;
	      np =0;
	      for(unsigned int k=thetaPhiGasBegin[recoAssoc[j]]; k<thetaPhiGasEnd[recoAssoc[j]]; k++){//loop over Cherenkov angles
		float gasAngle = thetaGas[k]*1e3;
		trChAngle += gasAngle;
		np++;
		//printf("%lf\n",aerogelAngle*1e3);
		momVsCherenkovAngleG->Fill(recP,gasAngle);
	      }// Gas Cherenkov Angle
	      trChAngle/= np;
	      momVsCherenkovAngleTrG->Fill(recP,trChAngle);
	     
	    }
	  } // End loop over associations 
	} // End PDG check          
      } // End stable particles condition  
    } // End loop over thrown particles
  } // End loop over events
  std::cout<<"here"<<std::endl;
  ofile->Write(); // Write histograms to file
  ofile->Close(); // Close output file
}

