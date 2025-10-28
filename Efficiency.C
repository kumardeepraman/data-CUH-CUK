
Search




Find channel

CHANNELS

DIRECT MESSAGES

2

Invite Members

At 4:11 PM Tuesday, October 28, Chandra wrote, , 1 attachment
August 22

Ramandeep Kumar
Update your status
4:46 PM
it worked, right?


Chandra
4:46 PM
not tested yet/

but should work. I remember now that I had got rid of this getSimHits

but unfortunately not pushed in the drich dev


Ramandeep Kumar
Update your status
4:48 PM
yeah


Ramandeep Kumar
Update your status
5:20 PM
I just moved 191 GB data

Will move similar amount of data by late evening


Chandra
5:39 PM
thanks a lot!!!!!

August 25

Chandra
3:01 PM
https://cern.zoom.us/j/9374314394?pwd=YTFjZjFGcXptMG13cGFQYWFQOWdrZz09

Zoom
Join our Cloud HD Video Meeting
Zoom is the leader in modern enterprise cloud communications.
Join our Cloud HD Video Meeting
August 27

Ramandeep Kumar
Update your status
4:26 PM
00: no TOF layer (xml) & no TOF material mapping (cbor)


01: no TOF layer (xml) & wd TOF material mapping (cbor)

August 28

Ramandeep Kumar
Update your status
4:11 PM
Slides_MM_fTOF_v2.pdf
PDF-1B
August 29

Ramandeep Kumar
Update your status
12:01 PM
/eos/infnts/compass/chandra/EIC/Simulation/RDK

September 05

Chandra
12:55 PM
xhost +localhost

September 09

Ramandeep Kumar
Update your status
5:45 PM
https://drive.google.com/drive/folders/1dP2xM7patu7nRElB3Uv0gC4GQS1MHRNj?usp=drive_link

September 12

Chandra
6:35 PM
https://cern.zoom.us/my/chandradoychatterjee

Zoom
Join our Cloud HD Video Meeting
Zoom is the leader in modern enterprise cloud communications.
Join our Cloud HD Video Meeting
September 17

Chandra
1:02 PM
Hi Raman

sorry to bother you. Are you in vaccation>


Ramandeep Kumar
Update your status
2:00 PM
Hi Chandra, it's okay.
Yeah, I am in Milan.


Chandra
2:11 PM
Don't worry. I managed


Ramandeep Kumar
Update your status
2:15 PM
Ohhh.. okay

October 03

Ramandeep Kumar
Update your status
8:04 PM
All three PRs have been approved.


Chandra
8:05 PM
Good. Ask dmitry if you should queue them for merge or not?


Ramandeep Kumar
Update your status
8:22 PM
I misread earlier. The approval is still pending for EICrecon, while one of the other two repositories (epic-data) has already been merged by Dmitry.

October 04

Ramandeep Kumar
Update your status
6:43 PM
Hi Chandra 
https://github.com/eic/EICrecon/pull/2103#issuecomment-3367123206

This is the present status of PR related to EICrecon. Do you have some idea if we have to do something? Or we just need to sit and wait. 

GitHub
Updated pid_lut.cc by kumardeepraman · Pull Request #2103 · eic/EICrecon
Briefly, what does this PR introduce? What kind of change does this PR introduce? Bug fix (issue #__) New feature (issue #__) Documentation update Other: __ Please check if this PR fulfills t...

Updated pid_lut.cc by kumardeepraman · Pull Request #2103 · eic/EICrecon
October 06

Ramandeep Kumar
Update your status
4:09 PM
please have a look at your better availability. (fTOF business)

revised-results.pdf
PDF-1B

Ramandeep Kumar
Update your status
5:47 PM
https://docs.google.com/presentation/d/1XT4fUo3xTd1-8ylMbOk1kPVPdQGaCkI9s1-er9zHu9w/edit?slide=id.g36c80690564_0_23#slide=id.g36c80690564_0_23

Google Docs
Quartz window 07/08/25
1 Update on Quartz Window Study Chandradoy Chatterjee, Rohit Jangid, Girdish Laishram, Ramandeep Kumar, Deepak Samuel, Tanya Tanvi, Meenu Thakur dRICH Simulation Meeting 07 August 2025

Quartz window 07/08/25
October 07

Ramandeep Kumar
Update your status
4:31 PM
  134 |           double e[dim], ri[dim];
      |                    ^~~
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:134:13: note: read of non-const variable 'dim' is not allowed in a constant expression
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:133:13: note: declared here
  133 |           unsigned dim = rindex_matrix->GetRows();
      |                    ^
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:134:22: warning: variable length arrays in C++ are a Clang extension [-Wvla-cxx-extension]
  134 |           double e[dim], ri[dim];
      |                             ^~~
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:134:22: note: read of non-const variable 'dim' is not allowed in a constant expression
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:133:13: note: declared here
  133 |           unsigned dim = rindex_matrix->GetRows();
      |                    ^
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:167:14: warning: variable length arrays in C++ are a Clang extension [-Wvla-cxx-extension]
  167 |           double WL[qeEntries], QE[qeEntries];
      |                     ^~~~~~~~~
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:167:14: note: initializer of 'qeEntries' is not a constant expression
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:166:19: note: declared here
  166 |           const unsigned qeEntries = qeref.size();
      |                          ^
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:167:29: warning: variable length arrays in C++ are a Clang extension [-Wvla-cxx-extension]
  167 |           double WL[qeEntries], QE[qeEntries];
      |                                    ^~~~~~~~~
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:167:29: note: initializer of 'qeEntries' is not a constant expression
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:166:19: note: declared here
  166 |           const unsigned qeEntries = qeref.size();
      |                          ^
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:180:39: warning: variable length arrays in C++ are a Clang extension [-Wvla-cxx-extension]
  180 |           double qemax = 0.0, qePhotonEnergy[qeEntries], qeData[qeEntries];
      |                                              ^~~~~~~~~
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:180:39: note: initializer of 'qeEntries' is not a constant expression
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:166:19: note: declared here
  166 |           const unsigned qeEntries = qeref.size();
      |                          ^
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:180:58: warning: variable length arrays in C++ are a Clang extension [-Wvla-cxx-extension]
  180 |           double qemax = 0.0, qePhotonEnergy[qeEntries], qeData[qeEntries];
      |                                                                 ^~~~~~~~~
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:180:58: note: initializer of 'qeEntries' is not a constant expression
/gpfs/compass/rkumar/forIRT2p1c/EICrecon/src/algorithms/pid/IrtInterface.cc:166:19: note: declared here
  166 |           const unsigned qeEntries = qeref.size();```
Show more
Friday

Chandra
5:36 PM
https://zoom.us/j/8371066887?pwd=0WCmDvNjPNakYm40bjEOvgYmoyMzoi.1

Zoom
Join our Cloud HD Video Meeting
Zoom is the leader in modern enterprise cloud communications.
Join our Cloud HD Video Meeting

Chandra
5:47 PM
https://bnl.zoomgov.com/my/veprbl?pwd=4RGQAilSIe0vgFHmhRMF0cbogh3sdC.1

Zoom
Join our Cloud HD Video Meeting
Zoom is the leader in modern enterprise cloud communications.
Join our Cloud HD Video Meeting
Today

Chandra
3:09 PM
Efficiency.C
C-1B
New Messages

Chandra
4:11 PM
Efficiency.C
C-1B
Write to Chandra












No file chosen


Thread
CUK-CUH-EIC
Follow

rohitjangid
52 minutes ago
@Chandra 
I'm trying to store azimuth angle (called Phi in my case) information of charged particle track. I have encountered this following error
/home/jo/eic_quartz/drich-dev/reconstruction_benchmarks/benchmarks/rich/src/ChargedParticle.cc:14:29: error: no member named 'phi' in namespace 'edm4hep::utils'
    m_phi = edm4hep::utils::phi(mc_part.getMomentum());

Reply to this thread...












No file chosen


Efficiency.C
ChandraShared in ~Chandra

Efficiency.C - C/C++
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

  while(tree_reader.Next()) { // Loop over events
    for(unsigned int i=0; i<partGenStat.GetSize(); i++){ // Loop over thrown particles
      if(partGenStat[i] == 1){ // Select stable thrown particles
	int pdg = TMath::Abs(partPdg[i]);
	if(pdg == 11 || pdg == 13 || pdg == 211 || pdg == 321 || pdg == 2212){ // Look at charged particles (electrons, muons, pions, kaons, protons)
	  TVector3 trueMom(partMomX[i],partMomY[i],partMomZ[i]);

	  float trueEta = trueMom.PseudoRapidity();
	  float truePhi = trueMom.Phi();
	  float trueP   = trueMom.Mag();  
	  partEta->Fill(trueEta);
	  partMom->Fill(trueP);
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
	      //MOMENTUM STUFF
	      matchedRecoMom->Fill(recP);
	      matchedPartMomTrackDeltaR->Fill(deltaP); // Plot the thrown eta if a matched ReconstructedChargedParticle was found
	      float trChAngle =0.0;
	      unsigned np =0;

	      if( thetaPhiAeroBegin.GetSize()<1 ||  thetaPhiAeroEnd.GetSize()<1 ||  thetaPhiGasBegin.GetSize()<1 ||  thetaPhiGasEnd.GetSize()<1) continue;
	      for(unsigned int k=thetaPhiAeroBegin[recoAssoc[j]]; k<thetaPhiAeroEnd[recoAssoc[j]]; k++){//loop over Cherenkov angles
		//std::cout<<"Aero: "<<evt-1<<" "<<k<<std::endl;
		float aerogelAngle = thetaAero[k]*1e3;
		trChAngle += aerogelAngle;
		np++;
		momVsCherenkovAngleA->Fill(recP,aerogelAngle);
	      }// Aerogel Cherenkov Angle
	      trChAngle/= np;
	      momVsCherenkovAngleTrA->Fill(recP,trChAngle);
	      //std::cout<<"Aero Done"<<std::endl;
	      trChAngle =0.0;
	      np =0;
	      for(unsigned int k=thetaPhiGasBegin[recoAssoc[j]]; k<thetaPhiGasEnd[recoAssoc[j]]; k++){//loop over Cherenkov angles
		//std::cout<<"Gas: "<<evt-1<<" "<<k<<std::endl;
		float gasAngle = thetaGas[k]*1e3;
		trChAngle += gasAngle;
		np++;
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
  ofile->Write(); // Write histograms to file
  ofile->Close(); // Close output file
}
