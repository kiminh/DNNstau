 //#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/functionsSUSY.h"
#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/lester_mt2_bisect.h"
#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/mt2_bisect.h"
#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/mt2_bisect.cpp"
//#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/Basic_Mt2_332_Calculator.h"
//#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/Basic_Nt2_332_Calculator.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/mTBound.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/mTTrue.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/mt2bl_bisect.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/mt2bl_bisect.cpp"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/example.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/JetUtil.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/JetUtil.cc"
#include "/nfs/dust/cms/user/dydukhle/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/topness.cc"
#include "/nfs/dust/cms/user/dydukhle/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/topness.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/mt2w_bisect.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/mt2w_bisect.cpp"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/mt2w.cc"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/mt2w.h"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_8_0_25/src/DesyTauAnalyses/NTupleMaker/interface/functionsSUSY.h"



#include "/nfs/dust/cms/user/dydukhle/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/freeze/Keras2Cpp4Terminal/keras2cpp/keras_model.h"
#pragma cling load("/nfs/dust/cms/user/dydukhle/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/freeze/Keras2Cpp4Terminal/keras2cpp/libneural_net.so")

using namespace std;
using namespace keras;

//#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/TMctLib.h"
//#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/mctlib.h"
//#include "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/interface/Basic_MPairProd_Calculator.h"


/*
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/MVA2017/dataset/weights/ForUse/myTMVA_BDTmutau_Stau100.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/MVA2017/dataset/weights/ForUse/myTMVA_BDTmutau_Stau150.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/MVA2017/dataset/weights/ForUse/myTMVA_BDTmutau_Stau200.class.C"


#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/MVA2017/dataset/weights/ForUse/myTMVA_BDTeltau_Stau100.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/MVA2017/dataset/weights/ForUse/myTMVA_BDTeltau_Stau150.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/MVA2017/dataset/weights/ForUse/myTMVA_BDTeltau_Stau200.class.C"

//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau150_LSP50My.class.C"
*/
/*

//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau100_LSP50My.class.C"
//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau150_LSP100My.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau150_LSP1My.class.C"
//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau200_LSP100My.class.C"
//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau200_LSP150My.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau200_LSP1My.class.C"
//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau200_LSP50My.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau300_LSP1My.class.C"

//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau150_LSP50My.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTmutau_stau-stau100_LSP1My.class.C"


//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau100_LSP50My.class.C"
//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau150_LSP100My.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau150_LSP1My.class.C"
//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau200_LSP100My.class.C"
//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau200_LSP150My.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau200_LSP1My.class.C"
//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau200_LSP50My.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau300_LSP1My.class.C"

//#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau150_LSP50My.class.C"
#include "/nfs/dust/cms/user/bobovnii/MVAstau/CMSSW_9_4_0_patch1//src/DesyTauAnalyses/NTupleMaker/test/MVA/dataset/weights/myTMVA_BDTeltau_stau-stau100_LSP1My.class.C"
//#include "TMVA/DataLoader.h"
* */
#include "TMVA/Factory.h"
#include "TMVA/Tools.h"
#include "TTree.h"
#include <iostream>


//#include <ScaleFactor.h
#include <TLorentzVector.h>
#include <TVector2.h>
using namespace std;
using namespace mt2bl_bisect;


const  int CutN=35;
const  int CutF=25;
const  int CutCat=10;
const int nBinsSR=51;


unsigned int RunMin = 9999999;
unsigned int RunMax = 0;
     

//bool isData = false;


double ChiMass=0;
double mIntermediate = tauMass;
double sumpT = 0;
double XSec=-1;
double xs,fact,fact2;
 
double ErrorSoW=0;
double sumOfWeight=0;

vector<TLorentzVector> AllJets_Lepton_noMet;
vector<TLorentzVector> JetsMV;
vector<TLorentzVector>  ElMV;
vector<TLorentzVector>  MuMV;
vector<TLorentzVector>  TauMV;
vector<TLorentzVector>  LeptMV;

Int_t 	   npart;
TTree *Tp;
void SetupTreeTp(){
Tp  = new TTree("Tp","Tp");
Tp->Branch("npart",&npart,"npart/I");

}


   int nBinsDZeta = 5;
   double binsDZeta[6] = {-500, -150,-100,0,50,1000};
   int nBinsDZetaR = 29;
   //double binsDZetaR[18] = {0, 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1,1.1,1.2,1.3,1.4,1.5,2,10};
   double binsDZetaR[30] = {0,0.25,0.5, 0.75, 1, 1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9, 2,2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9,3,3.5,4,4.5,5,10};

int nBinsPt = 5;
double binsMuEff[6] =  {25,30,40,50,100,200};
double binsElEff[6] =  {26,30,40,50,100,200};
double binsTau[6] =  {20,30,40,1000};
int nBinsEta = 4;
double binsEtaMuEff[5] =  {0,0.9,1.2,2.1,2.4};
double binsEtaElEff[4] =  {0,0.9,1.2,2.1};

int nBinsTauPt2 = 4;
int nBinsTauEta2 = 4;

double binsTauPt2[5] =  {20,30,40,70,1000};
double binsTauEta2[5] =  {0,0.8,1.44,1.566,2.3};


int nBinsmet = 8;
//   double binsmet[7] =  {0, 40, 80,100,120,250,1000};
   double binsmet[9] =  {0, 10,20,30, 40, 80,120,250,1000};
   double binsmett[9] =  {0.1, 10,20,30, 40, 80,120,250,1000};

   int nBinsmetFB = 8;
   double binsmetFB[9] = {0, 40, 80,120,160,200,300,400,1000};

   int nBinsMT2lesterFB = 7;
   //double binsMT2lesterFB[7] = {0, 40,80,120,160,200,1000};
   double binsMT2lesterFB[8] = {0,10,20,30,40,80,120,1000};

   int nBinsDZetaFB = 5;
   //double binsDZetaFB[6] = {-500, -300,-150,-100, 50,1000};
   double binsDZetaFB[6] = {-500, -150,-100, 0,50,1000};

   int nBinsTauPt = 4;
   double binsTauPt[5] = {0, 40, 80,120,1000};

   int nBinsMTsum = 4;
   double binsMTsum[5] = {0, 40,120,260,1000};

   int nBinsMTtot = 4;
   double binsMTtot[5] = {0, 40,120,200,1000};

   int nBinsMCTb = 4;
   double binsMCTb[5] = {0, 50,100,200,1000};

   int nBinsMT = 4;
   double binsMT[5] = {0, 40,120,160,1000};

   int nBinsMTDil = 4;
   double binsMTDil[5] = {0, 40,120,200,1000};

   int nBinsDr = 5;
   double binsDr[6] = {0,1,2,3,4,7};

   int nBinsMT2lester = 8;
   double binsMT2lester[9] = {0,10,20,30,40,80,100,120,1000};
   double binsMT2lesterr[9] = {0.1,10,20,30,40,80,100,120,1000};


int nbinsBDTmutau_Stau100= 27;
 double binsBDTmutau_Stau100[28]  = {0.0, 0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.655,1.0};

int nbinsBDTmutau_Stau200= 36;
 double binsBDTmutau_Stau200[37]  = {0.0, 0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.744,1.0};

int nbinsBDTmutau_Stau150= 25;
 double binsBDTmutau_Stau150[26]  = {0.0, 0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,1.0};

int nbinsBDTeltau_Stau100= 22;
 double binsBDTeltau_Stau100[23]  = {0.0, 0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.602,1.0};


int nbinsBDTeltau_Stau200= 34;
 double binsBDTeltau_Stau200[35]  = {0.0, 0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.725,1.0};

int nbinsBDTeltau_Stau150= 20;
 double binsBDTeltau_Stau150[21]  = {0.0, 0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.581,1.0};

int nbinsDNNmutau_Stau100 = 100;
//hDNNmutau_Stau100


double HIP_SF(double pt,double eta)

{

	TString inputRootFile = "/nfs/dust/cms/user/alkaloge/TauAnalysis/new/new/CMSSW_8_0_12/src/DesyTauAnalyses/NTupleMaker/data/HIP_mediumID.root";
TFile * fileIn = new TFile(inputRootFile, "read");
	if (fileIn->IsZombie() ) { std::cout << "ERROR in ScaleFactor::init_ScaleFactor(TString inputRootFile) " <<inputRootFile << " does not exist. Please check. " <<std::endl; exit(1); };


TIter nextkey (fileIn->GetListOfKeys ());
TKey *key = 0;
key = (TKey *) nextkey ();
TObject *obj = key->ReadObj ();
//cout << "2D histos name for SF = " << obj->GetName() << endl;
TH2D *histo = (TH2D*) obj;
//TH2D *histo = (TH2D*)fileIn->Get("histo2D");
double ptN = histo->GetXaxis()->FindBin(pt);
double etaN = histo->GetYaxis()->FindBin(eta);
double result = histo->GetBinContent(ptN,etaN);
delete histo;
delete fileIn;
return result;
}



double EWKWeight(float pt){
float sf = 1;

if (pt>0 && pt <50 ) sf = 1.;
if (pt>50 && pt <100 ) sf = 1.052;
if (pt>100 && pt <150 ) sf = 1.179;
if (pt>150 && pt <200 ) sf = 1.150;
if (pt>200 && pt <300 ) sf = 1.057;
if (pt>300 && pt <400 ) sf = 1.;
if (pt>400 && pt <600 ) sf = 0.912;
if (pt>600 ) sf = 0.783;

return sf;
}

double TauFakeRateFromDataVLoose(float pt,float eta, string sel,string working_point){
float SF = 1.;


//80x MVAid


if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 0.29099;
                if (pt>30 && pt<40) SF = 0.271191;
                if (pt>40 ) SF = 0.231226;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 0.298628;
                if (pt>30 && pt<40) SF = 0.274101;
                if (pt>40 ) SF = 0.173872;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 0.316511;
                if (pt>40) SF = 0.239111;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.272468;
                if (pt>40) SF = 0.274652;
        }

return SF;
}


double TauFakeRateFromData(float pt,float eta, string sel,string working_point){
float SF = 1.;


//80x MVAid

/*
if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 0.726176;
                if (pt>30 && pt<40) SF = 0.661467;
                if (pt>40 ) SF = 0.560296;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 0.67626;
                if (pt>30 && pt<40) SF = 0.613248;
                if (pt>40 ) SF = 0.390183;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 0.681135;
                if (pt>40) SF = 0.639072;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.598693;
                if (pt>40) SF = 0.608262;
        }
*/

// VTight
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.338533;
         if (pt>30 && pt<40) SF = 0.324686;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.342852;
         if (pt>30 && pt<40) SF = 0.325891;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.387358;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.388045;
         if (pt>30 && pt<40) SF = 0.370063;
 }
        if (pt>40 && pt<70) SF = 0.316091;
         if (pt>70) SF = 0.251774;




/*
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.673922;
         if (pt>30 && pt<40) SF = 0.643638;
         if (pt>40 ) SF = 0.580981;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.675703;
         if (pt>30 && pt<40) SF = 0.635124;
         if (pt>40 ) SF = 0.58225;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.790876;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.770244;
         if (pt>30 && pt<40) SF = 0.707088;
         if (pt>40 ) SF = 0.705259;
 }*/
 // for btagged CR
/*
         if (pt>20 && pt<30) SF = 0.77;
         if (pt>30 && pt<40) SF = 0.74;
         if (pt>40 ) SF = 0.6;
 */
 
 
  if ( working_point == "JetEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.339479;
         if (pt>30 && pt<40) SF = 0.325294;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.344266;
         if (pt>30 && pt<40) SF = 0.326125;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.390974;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.385373;
         if (pt>30 && pt<40) SF = 0.368231;
 }
        if (pt>40 && pt<70) SF = 0.314641;
         if (pt>70) SF = 0.251382;
}
 
 if ( working_point == "JetEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.336358;
         if (pt>30 && pt<40) SF = 0.323963;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.341817;
         if (pt>30 && pt<40) SF = 0.32377;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.384819;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.381864;
         if (pt>30 && pt<40) SF = 0.370213;
 }
        if (pt>40 && pt<70) SF = 0.315565;
         if (pt>70) SF = 0.256002;
}
 
 if ( working_point == "TauEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.33818;
         if (pt>30 && pt<40) SF = 0.323574;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.342368;
         if (pt>30 && pt<40) SF = 0.326021;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.390771;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.386971;
         if (pt>30 && pt<40) SF = 0.370363;
 }
        if (pt>40 && pt<70) SF = 0.311948;
         if (pt>70) SF = 0.244015;
}
 
 if ( working_point == "TauEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.338099;
         if (pt>30 && pt<40) SF = 0.324063;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.341829;
         if (pt>30 && pt<40) SF = 0.326569;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.389989;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.388683;
         if (pt>30 && pt<40) SF = 0.367318;
 }
        if (pt>40 && pt<70) SF = 0.316723;
         if (pt>70) SF = 0.258891;
}
 
 if ( working_point == "ElEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.338066;
         if (pt>30 && pt<40) SF = 0.323953;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.342174;
         if (pt>30 && pt<40) SF = 0.326078;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.391633;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.38764;
         if (pt>30 && pt<40) SF = 0.368961;
 }
        if (pt>40 && pt<70) SF = 0.315011;
         if (pt>70) SF = 0.250695;
}
 
 if ( working_point == "ElEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.338066;
         if (pt>30 && pt<40) SF = 0.323953;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.342181;
         if (pt>30 && pt<40) SF = 0.326078;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.391617;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.387635;
         if (pt>30 && pt<40) SF = 0.368961;
 }
        if (pt>40 && pt<70) SF = 0.314953;
         if (pt>70) SF = 0.250695;
}
 
 if ( working_point == "MuEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.337699;
         if (pt>30 && pt<40) SF = 0.323846;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.342184;
         if (pt>30 && pt<40) SF = 0.325513;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.391797;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.3876;
         if (pt>30 && pt<40) SF = 0.36888;
 }
        if (pt>40 && pt<70) SF = 0.31454;
         if (pt>70) SF = 0.249795;
}
 
 if ( working_point == "MuEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.338259;
         if (pt>30 && pt<40) SF = 0.324447;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.341762;
         if (pt>30 && pt<40) SF = 0.327098;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.391814;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.387799;
         if (pt>30 && pt<40) SF = 0.368904;
 }
        if (pt>40 && pt<70) SF = 0.315363;
         if (pt>70) SF = 0.251924;
}
 
 if ( working_point == "UnclEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.335057;
         if (pt>30 && pt<40) SF = 0.329086;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.341751;
         if (pt>30 && pt<40) SF = 0.325283;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.381257;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.383388;
         if (pt>30 && pt<40) SF = 0.366312;
 }
        if (pt>40 && pt<70) SF = 0.31169;
         if (pt>70) SF = 0.246104;
}
 
 if ( working_point == "UnclEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.341151;
         if (pt>30 && pt<40) SF = 0.326461;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.340849;
         if (pt>30 && pt<40) SF = 0.321591;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.411893;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.38701;
         if (pt>30 && pt<40) SF = 0.370609;
 }
        if (pt>40 && pt<70) SF = 0.313098;
         if (pt>70) SF = 0.249026;
}
 
 if ( working_point == "BTagUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.33872;
         if (pt>30 && pt<40) SF = 0.32567;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.342847;
         if (pt>30 && pt<40) SF = 0.327214;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.392643;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.387852;
         if (pt>30 && pt<40) SF = 0.369951;
 }
        if (pt>40 && pt<70) SF = 0.317799;
         if (pt>70) SF = 0.262895;
}
 
 if ( working_point == "BTagDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.337298;
         if (pt>30 && pt<40) SF = 0.322183;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.34172;
         if (pt>30 && pt<40) SF = 0.324578;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 && pt<40)
 {
        if (pt>20) SF = 0.389711;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.387407;
         if (pt>30 && pt<40) SF = 0.367851;
 }
        if (pt>40 && pt<70) SF = 0.31117;
         if (pt>70) SF = 0.237099;
}





 /*
 if ( working_point == "JetEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.67299;
         if (pt>30 && pt<40) SF = 0.641404;
         if (pt>40 ) SF = 0.587893;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.674998;
         if (pt>30 && pt<40) SF = 0.625476;
         if (pt>40 ) SF = 0.571041;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.790677;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.766055;
         if (pt>30 && pt<40) SF = 0.696323;
         if (pt>40 ) SF = 0.713004;
 }
}

 if ( working_point == "JetEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.667442;
         if (pt>30 && pt<40) SF = 0.652886;
         if (pt>40 ) SF = 0.575058;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.674867;
         if (pt>30 && pt<40) SF = 0.630325;
         if (pt>40 ) SF = 0.600444;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.768298;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.761079;
         if (pt>30 && pt<40) SF = 0.70866;
         if (pt>40 ) SF = 0.701104;
 }
}

 if ( working_point == "TauEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.672294;
         if (pt>30 && pt<40) SF = 0.643862;
         if (pt>40 ) SF = 0.576386;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.674212;
         if (pt>30 && pt<40) SF = 0.631933;
         if (pt>40 ) SF = 0.577185;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.795036;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.76801;
         if (pt>30 && pt<40) SF = 0.70373;
         if (pt>40 ) SF = 0.699653;
 }
}

 if ( working_point == "TauEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.673768;
         if (pt>30 && pt<40) SF = 0.643572;
         if (pt>40 ) SF = 0.585973;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.676242;
         if (pt>30 && pt<40) SF = 0.641822;
         if (pt>40 ) SF = 0.575633;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.793915;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.771069;
         if (pt>30 && pt<40) SF = 0.702321;
         if (pt>40 ) SF = 0.706686;
 }
}

 if ( working_point == "ElEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.672637;
         if (pt>30 && pt<40) SF = 0.644345;
         if (pt>40 ) SF = 0.580745;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.67435;
         if (pt>30 && pt<40) SF = 0.633671;
         if (pt>40 ) SF = 0.580209;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.797305;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.770201;
         if (pt>30 && pt<40) SF = 0.700472;
         if (pt>40 ) SF = 0.70489;
 }
}

 if ( working_point == "ElEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.672637;
         if (pt>30 && pt<40) SF = 0.644345;
         if (pt>40 ) SF = 0.580666;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.67435;
         if (pt>30 && pt<40) SF = 0.633671;
         if (pt>40 ) SF = 0.57994;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.797305;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.770201;
         if (pt>30 && pt<40) SF = 0.700472;
         if (pt>40 ) SF = 0.70489;
 }
}

 if ( working_point == "MuEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.672521;
         if (pt>30 && pt<40) SF = 0.644222;
         if (pt>40 ) SF = 0.580483;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.67403;
         if (pt>30 && pt<40) SF = 0.631744;
         if (pt>40 ) SF = 0.578989;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.797602;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.769812;
         if (pt>30 && pt<40) SF = 0.700455;
         if (pt>40 ) SF = 0.703825;
 }
}

 if ( working_point == "MuEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.672755;
         if (pt>30 && pt<40) SF = 0.645719;
         if (pt>40 ) SF = 0.581132;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.677249;
         if (pt>30 && pt<40) SF = 0.634087;
         if (pt>40 ) SF = 0.580193;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.800591;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.771017;
         if (pt>30 && pt<40) SF = 0.699003;
         if (pt>40 ) SF = 0.704209;
 }
}

 if ( working_point == "UnclEnUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.663881;
         if (pt>30 && pt<40) SF = 0.6455;
         if (pt>40 ) SF = 0.575761;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.66202;
         if (pt>30 && pt<40) SF = 0.651215;
         if (pt>40 ) SF = 0.574364;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.747702;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.768633;
         if (pt>30 && pt<40) SF = 0.704527;
         if (pt>40 ) SF = 0.703865;
 }
}

 if ( working_point == "UnclEnDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.675039;
         if (pt>30 && pt<40) SF = 0.647367;
         if (pt>40 ) SF = 0.589217;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.668485;
         if (pt>30 && pt<40) SF = 0.619344;
         if (pt>40 ) SF = 0.576247;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.776659;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.772044;
         if (pt>30 && pt<40) SF = 0.716349;
         if (pt>40 ) SF = 0.70803;
 }
}

 if ( working_point == "BTagUp"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.67323;
         if (pt>30 && pt<40) SF = 0.646175;
         if (pt>40 ) SF = 0.588014;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.675746;
         if (pt>30 && pt<40) SF = 0.635479;
         if (pt>40 ) SF = 0.586175;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.802677;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.770412;
         if (pt>30 && pt<40) SF = 0.701023;
         if (pt>40 ) SF = 0.710078;
 }
}

 if ( working_point == "BTagDown"){
 if (  fabs(eta) < 0.8 )
 {
        if (pt>20 && pt<30) SF = 0.672113;
         if (pt>30 && pt<40) SF = 0.641569;
         if (pt>40 ) SF = 0.570456;
 }
 if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
 {
        if (pt>20 && pt<30) SF = 0.674027;
         if (pt>30 && pt<40) SF = 0.631134;
         if (pt>40 ) SF = 0.574189;
 }
 if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
 {
        if (pt>20) SF = 0.793288;
 }
 if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
 {
        if (pt>20 && pt<30) SF = 0.769511;
         if (pt>30 && pt<40) SF = 0.698979;
         if (pt>40 ) SF = 0.700928;
 }
}*/



return SF;

}



double TauFakeRate(float pt,float eta, string sel,string working_point){
float SF = 1.;


//80x MVAid


if ( working_point == "TFRJetEnUp"){

if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 1.13395;
                if (pt>30 && pt<40) SF = 1.12674;
                if (pt>40 ) SF = 1.28658;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 1.12286;
                if (pt>30 && pt<40) SF = 1.22019;
                if (pt>40 ) SF = 1.05257;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 0.976482;
                if (pt>40) SF = 2.1966;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.896117;
                if (pt>40) SF = 1.07363;
        }

}//mutau MVA


else if ( working_point == "TFRJetEnDown"){
if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 1.16832;
                if (pt>30 && pt<40) SF = 1.13744;
                if (pt>40 ) SF = 1.27319;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 1.15464;
                if (pt>30 && pt<40) SF = 1.17642;
                if (pt>40 ) SF = 1.16929;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 1.13535;
                if (pt>40) SF = 2.70057;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.914509;
                if (pt>40) SF = 1.11113;
        }

}//mutau MVA



else if ( working_point == "TFRTauEnUp"){
if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 1.09872;
                if (pt>30 && pt<40) SF = 0.961079;
                if (pt>40 ) SF = 0.897534;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 1.07447;
                if (pt>30 && pt<40) SF = 1.04198;
                if (pt>40 ) SF = 0.741901;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 0.888785;
                if (pt>40) SF = 1.20708;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.837741;
                if (pt>40) SF = 0.902976;
        }

}//mutau MVA


else if ( working_point == "TFRTauEnDown"){
if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 1.18576;
                if (pt>30 && pt<40) SF = 1.04045;
                if (pt>40 ) SF = 1.14634;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 1.16617;
                if (pt>30 && pt<40) SF = 1.18176;
                if (pt>40 ) SF = 0.864892;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 1.05005;
                if (pt>40) SF = 1.94742;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.912782;
                if (pt>40) SF = 0.950736;
        }

}//mutau MVA


else if ( working_point == "TFRMuEnUp"){
if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 1.11923;
                if (pt>30 && pt<40) SF = 1.02944;
                if (pt>40 ) SF = 0.96733;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 1.1246;
                if (pt>30 && pt<40) SF = 1.07141;
                if (pt>40 ) SF = 0.844204;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 0.908234;
                if (pt>40) SF = 1.77257;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.87063;
                if (pt>40) SF = 0.92934;
        }

}//mutau MVA


else if ( working_point == "TFRMuEnDown"){
if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 1.12687;
                if (pt>30 && pt<40) SF = 1.00911;
                if (pt>40 ) SF = 0.958254;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 1.12647;
                if (pt>30 && pt<40) SF = 1.10256;
                if (pt>40 ) SF = 0.841932;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 0.900177;
                if (pt>40) SF = 1.80231;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.875394;
                if (pt>40) SF = 0.911063;
        }

}//mutau MVA


else {
if (  fabs(eta) < 0.8 )
        {
                if (pt>20 && pt<30) SF = 1.12667;
                if (pt>30 && pt<40) SF = 1.0178;
                if (pt>40 ) SF = 0.961808;
        }
if (  fabs(eta) > 0.8 && fabs(eta) < 1.44 )
        {

                if (pt>20 && pt<30) SF = 1.12651;
                if (pt>30 && pt<40) SF = 1.08668;
                if (pt>40 ) SF = 0.832438;
        }

if (  fabs(eta) > 1.44 && fabs(eta) < 1.566 )
        {

                if (pt>20 && pt<40) SF = 0.907089;
                if (pt>40) SF = 1.70447;
        }
if (  fabs(eta) > 1.566 && fabs(eta) < 2.3 )
        {

                if (pt>20 && pt<40) SF = 0.875675;
                if (pt>40) SF = 0.91729;
        }

}//mutau MVA

return SF;

}

double MuonFakeRate(float pt, float eta){
float muonfake = 1.;

if (  fabs(eta) < 1.2 ) muonfake = 1.04;
if (  fabs(eta) > 1.2 && fabs(eta) < 1.7 ) muonfake = 1.54;
if (  fabs(eta) > 1.7 && fabs(eta) < 2.3 ) muonfake = 1.42;
	
return muonfake;
}


double ElectronFakeRate(float pt, float eta){
float elefake = 1.;

if (  fabs(eta) < 1.460 ) elefake = 1.80;
if (  fabs(eta) > 1.558 ) elefake = 1.30;
	
return elefake;
}



double TauiD(string sel,string working_point){

float SF = 1;

if ((sel =="mutau" || sel == "eltau")  && working_point == "CutBased_Loose" )
	SF = 0.81;

if ((sel =="mutau" || sel == "eltau")  && working_point == "CutBased_Medim" )
	SF = 0.79;
if ((sel =="mutau" || sel == "eltau")  && working_point == "CutBased_Tight" )
	SF = 0.79;


if ((sel =="mutau" || sel == "eltau")  && working_point == "MVA_Vloose" )
	SF = 0.83;
if ((sel =="mutau" || sel == "eltau")  && working_point == "MVA_Vloose" )
	SF= 0.84;
if ((sel =="mutau" || sel == "eltau")  && working_point == "MVA_Medium" )
	SF = 0.84;

if ((sel =="mutau" || sel == "eltau")  && working_point == "MVA_Tight" )
	SF = 0.83;

if ((sel =="mutau" || sel == "eltau")  && working_point == "MVA_Vtight" )
	SF = 0.80;



return SF;

}

float Dzeta(TLorentzVector LV, TLorentzVector muV, TLorentzVector MetV)
	{
				float LUnitX = LV.Px()/LV.Pt();
				float LUnitY = LV.Py()/LV.Pt();

				//	cout<<" CHECK =========== "<<tauV.Pt()<<"  "<<ta_pt[tIndex]<<endl;	
				float muonUnitX = muV.Px()/muV.Pt();
				float muonUnitY = muV.Py()/muV.Pt();

				float zetaX = LUnitX + muonUnitX;
				float zetaY = LUnitY + muonUnitY;

				float normZeta = TMath::Sqrt(zetaX*zetaX+zetaY*zetaY);

				zetaX = zetaX/normZeta;
				zetaY = zetaY/normZeta;

				float vectorX = MetV.Px() + muV.Px() + LV.Px();
				float vectorY = MetV.Py() + muV.Py() + LV.Py();

				float vectorVisX = muV.Px() + LV.Px();
				float vectorVisY = muV.Py() + LV.Py();

				// computation of DZeta variable
				// pfmet
				float pzetamiss = MetV.Px()*zetaX + MetV.Py()*zetaY;
				float pzetavis = vectorVisX*zetaX + vectorVisY*zetaY;
				float dzeta = pzetamiss - 0.85*pzetavis;


				return dzeta;
}




vector<string> var;
vector < string > vec;
double var_[1000];

vector<string> CutList;
vector<string> FakeList;
vector<string> FakeListJet;
      //const char* inputVars[] = { "met_pt", "Lept1Pt", "Lept2Pt", "EtaDil", "MTtot", "Dzeta", "Minv", "dR", "MT", "MCTb", "MT2lester", "dMETPhiL1", "dMETPhiL2" };

  std::vector<std::string> inputVarsAll = {"met_pt","Lept1Pt","Lept2Pt","EtaDil","MTtot","Dzeta","Minv","dR","MT","MCTb","MT2lester","dMETPhiL1","dMETPhiL2"};
  //IClassifierReader*
  std::vector<float>* inputVec = new std::vector<float>( 13 );

//KerasModel ResponseMutau("/nfs/dust/cms/user/dydukhle/CMSSW_9_4_0_patch1/src/DesyTauAnalyses/NTupleMaker/test/freeze/Keras2Cpp4Terminal/keras2cpp/model.net", true);

KerasModel ResponseMutau("/nfs/dust/cms/user/dydukhle/stau2016_for_training/models/dumped_mode.nnet", true);

//  KerasModel ResponceMutau("/nfs/dust/cms/user/dydukhle/stau2016_for_training/models/dumped_mode.nnet",true);

  //ResponseMutau = new ReadBDTmutau( inputVarsAll );
  
  //IClassifierReader* BDTResponseMutau_stau150_LSP50My = new ReadBDTmutau_stau_stau150_LSP50My (inputVarsAll );

//IClassifierReader* BDTResponseMutau_Stau150 = new ReadBDTmutau_Stau150 (inputVarsAll );
//IClassifierReader* BDTResponseMutau_Stau200 = new ReadBDTmutau_Stau200 (inputVarsAll );
//IClassifierReader* BDTResponseMutau_Stau100 = new ReadBDTmutau_Stau100 (inputVarsAll );


//IClassifierReader* BDTResponseEltau_Stau150 = new ReadBDTeltau_Stau150 (inputVarsAll );
//IClassifierReader* BDTResponseEltau_Stau200 = new ReadBDTeltau_Stau200 (inputVarsAll );
//IClassifierReader* BDTResponseEltau_Stau100 = new ReadBDTeltau_Stau100 (inputVarsAll );




/*
TProfile * hprofMt2vsMET[CutN]  ;//= new TProfile("hprof","",100,-4,4,0,20);
TProfile * hprofMt2vsDZeta[CutN]  ;//= new TProfile("hprof","",100,-4,4,0,20);
TProfile * hprofMETvsMt2[CutN]  ;//= new TProfile("hprof","",100,-4,4,0,20);
TProfile * hprofMETvsDZeta[CutN]  ;//= new TProfile("hprof","",100,-4,4,0,20);
TProfile * hprofDZetavsMET[CutN]  ;//= new TProfile("hprof","",100,-4,4,0,20);
TProfile * hprofDZetavsMt2[CutN]  ;//= new TProfile("hprof","",100,-4,4,0,20);
*/

TH1D * histRuns = new TH1D("histRuns","",6000,24000,30000);

TH1D * histWeightsH = new TH1D("histWeightsH","",1,-0.5,0.5);

TH1D * histTopPt = new TH1D("histTopPt","",1,-0.5,0.5);

TH2D * hMuEff [CutN];
TH2D * hElEff [CutN];
TH2D * hTauPtEta [CutN];

//TH2D * hTauEff [CutN];

TH1D * hWeights [CutN];
TH1D * hEventSign [CutN];
TH1D *hTopMod[CutN];
TH1D *hTopMod1L[CutN];
TH1D *hMT2W[CutN];
TH1D *hMT2WFB[CutN];

TH1D * hRatioSum [CutN];
//TH1D * hDeltaMET [CutN][60];
//TH1D * hDeltaMETRel [CutN][60];
TH1D * hmet1D[CutN];

TH1D * hLpMu [CutN];
TH1D * hMudxy [CutN];
TH1D * hMudz [CutN];

TH1D * hMudxyerr [CutN];
TH1D * hMudzerr [CutN];
TH1D * hMuIPsigxy [CutN];
TH1D * hMuIPsigz [CutN];

TH1D * hLept1dxy [CutN];
TH1D * hLept1dz [CutN];

TH1D * hLept1dxyerr [CutN];
TH1D * hLept1dzerr [CutN];
TH1D * hLept1IPsigxy [CutN];
TH1D * hLept1IPsigz [CutN];

TH1D * hLept2dxy [CutN];
TH1D * hLept2dz [CutN];

TH1D * hLept2dxyerr [CutN];
TH1D * hLept2dzerr [CutN];
TH1D * hLept2IPsigxy [CutN];
TH1D * hLept2IPsigz [CutN];


TH1D * hEldxyerr [CutN];
TH1D * hEldzerr [CutN];

TH1D * hElIPsigxy [CutN];
TH1D * hElIPsigz [CutN];

TH1D *hElneutralHadIso[CutN]; 
TH1D *hElphotonIso[CutN];
TH1D *hElchargedHadIso[CutN];
TH1D *hElpuIso[CutN];
TH1D *hElneutralIso[CutN];
TH1D *hElabsIsoEl[CutN];
TH1D *hElrelIsoEl[CutN];


TH1D *hMuneutralHadIso[CutN]; 
TH1D *hMuphotonIso[CutN];
TH1D *hMuchargedHadIso[CutN];
TH1D *hMupuIso[CutN];
TH1D *hMuneutralIso[CutN];
TH1D *hMuabsIsoMu[CutN];
TH1D *hMurelIsoMu[CutN];




TH1D *hLept1neutralHadIso[CutN]; 
TH1D *hLept1photonIso[CutN];
TH1D *hLept1chargedHadIso[CutN];
TH1D *hLept1puIso[CutN];
TH1D *hLept1neutralIso[CutN];
TH1D *hLept1absIsoMu[CutN];
TH1D *hLept1relIsoMu[CutN];


TH1D *hLept2neutralHadIso[CutN]; 
TH1D *hLept2photonIso[CutN];
TH1D *hLept2chargedHadIso[CutN];
TH1D *hLept2puIso[CutN];
TH1D *hLept2neutralIso[CutN];
TH1D *hLept2absIsoMu[CutN];
TH1D *hLept2relIsoMu[CutN];



TH1D * hEldxy [CutN];
TH1D * hEldz [CutN];

TH1D * htau_dxy [CutN];
TH1D * htau_dz [CutN];
TH1D * htau1_dxy [CutN];
TH1D * htau1_dz [CutN];
TH1D * htau2_dxy [CutN];
TH1D * htau2_dz [CutN];

TH1D *hMeffMuon[CutN];
TH1D *hMeffEl[CutN];
TH1D *hMeff[CutN];
TH1D *hHTOsqrMET[CutN];
TH1D *hPtOHT[CutN];
TH1D *hMeffMuonOsqrMET[CutN];
TH1D *hMeffElOsqrMET[CutN];
TH1D *hMeffOsqrMET[CutN];

TH1D *hHT[CutN];
TH1D *hgenHT[CutN];
TH1D *hHText[CutN];
TH1D *hRht[CutN];
TH1D *hHT2[CutN];
TH1D *hHT3[CutN];
TH1D *hHT4[CutN];
//TH1D *hST[CutN];
//TH1D *h0JetpT[CutN];
TH1D *hnJet[CutN];
TH1D *hnpartons[CutN];
TH1D *hnBJet[CutN];
TH1D *hnBJetTight[CutN];
TH1D *hCSVv2[CutN];
TH1D *hCSVv2_b1[CutN];
TH1D *hCSVv2_b2[CutN];

TH1D *hCentrality[CutN];

TH1D *hPtJ0[CutN];
TH1D *hPtJ1[CutN];
TH1D *hPtJ2[CutN];
TH1D *hPtJ3[CutN];

TH1D *hIsoMu[CutN];
TH1D *hIsoMuFB[CutN];
TH1D *hIsoLept1[CutN];
TH1D *hIsoLept2[CutN];
TH1D *hIsoEl[CutN];
TH1D *hIsoTau[CutN];
TH1D *hIsoTau1[CutN];
TH1D *hIsoTau2[CutN];

TH1D *hInvMassblmu[CutN];
TH1D *hInvMassblmuFB[CutN];

TH1D *hInvMassMuTau[CutN];
TH1D *hInvMassMuEl[CutN];
TH1D *hInvMassTauTau[CutN];
TH1D *hInvMassElEl[CutN];
TH1D *hInvMassElTau[CutN];
TH1D *hInvMassMuMu[CutN];
TH1D *hInvMass3MuTau[CutN];
TH1D *hInvMass2MuElTau[CutN];
TH1D *hInvMass2Mu2Tau[CutN];
TH1D *hInvMass3ElTauFB[CutN];
TH1D *hInvMass2ElMuTauFB[CutN];
TH1D *hInvMass2El2TauFB[CutN];

TH1D *hSmin[CutN];



TH1D *hnEl[CutN];
TH1D *hElpt[CutN];
TH1D *hEleta[CutN];


TH1D *hnMu[CutN];
TH1D *hMupt[CutN];
TH1D *hMueta[CutN];
TH1D *hLept1pt[CutN];
TH1D *hLept1eta[CutN];
TH1D *hLept2pt[CutN];
TH1D *hLept2eta[CutN];



TH1D *hnTau[CutN];
TH1D *hTaupt[CutN];
TH1D *hTaueta[CutN];
TH1D *hTau1pt[CutN];
TH1D *hTau1eta[CutN];
TH1D *hTau2pt[CutN];
TH1D *hTau2eta[CutN];

/*
TH1D *hnJetByBin[CutN][55];
TH1D *hMuptByBin[CutN][55];
TH1D *hMuetaByBin[CutN][55];
TH1D *hTauetaByBin[CutN][5];
TH1D *hTauptByBin[CutN][55];
TH1D *hMt2lesterByBin[CutN][55];
TH1D *hMt2lesterFBByBin[CutN][55];

TH1D *hDZetaByBin[CutN][55];
TH1D *hDZetaFBByBin[CutN][55];

TH1D *hMETByBin[CutN][55];
TH1D *hMETFBByBin[CutN][55];

TH1D *hElptByBin[CutN][55];
TH1D *hEletaByBin[CutN][55];
*/








TH1D *hMETFake[CutN][CutF];
TH1D *hnJetFake[CutN][CutF];
TH1D *hMuptFake[CutN][CutF];
TH1D *hMuetaFake[CutN][CutF];
TH1D *hTauetaFake[CutN][CutF];
TH1D *hTauptFake[CutN][CutF];
TH1D *hIsoMuFake[CutN][CutF];
TH1D *hIsoTauFake[CutN][CutF];
TH1D *hMt2lesterFake[CutN][CutF];
TH1D *hDZetaFake[CutN][CutF];
TH1D *hTauDecayMode1[CutN];
TH1D *hTauDecayMode2[CutN];
TH1D *hTauDecayModeAll[CutN];

TH1D *hMt2_binned[CutN][nBinsSR];
TH1D *hMET_binned[CutN][nBinsSR];
TH1D *hDzeta_binned[CutN][nBinsSR];

TH1D *hMET[CutN];
TH1D *hMETFB[CutN];
TH1D *hGenMETFB[CutN];
TH1D *hMETphi[CutN];
//TH1D *hnOver[CutN];
TH1D *hMETLowDzeta[CutN];
TH1D *hMETMiddleDzeta[CutN];
TH1D *hMETHighDzeta[CutN];

TH1D *hMETHighDzetaHighMt2[CutN];
TH1D *hMETHighDzetaLowMt2[CutN];
TH1D *hMETHighDzetaMiddleMt2[CutN];

TH1D *hMETLowDzetaHighMt2[CutN];
TH1D *hMETLowDzetaLowMt2[CutN];
TH1D *hMETLowDzetaMiddleMt2[CutN];

TH1D *hMt2HighDzetaMiddleMET[CutN];
TH1D *hMt2HighDzetaLowMET[CutN];
TH1D *hMt2HighDzetaHighMET[CutN];

TH1D *hMt2LowDzetaMiddleMET[CutN];
TH1D *hMt2LowDzetaLowMET[CutN];
TH1D *hMt2LowDzetaHighMET[CutN];

TH1D *hdEtaDil[CutN];
TH1D *hdEtaJ0J1[CutN];
TH1D *hdEtaMuMET[CutN];
TH1D *hdEtaElMET[CutN];
TH1D *hdEtaTauMET[CutN];
TH1D *hdEtaDilMET[CutN];
TH1D *hdEtaJ0Mu[CutN];
TH1D *hdEtaJ0El[CutN];
TH1D *hdEtaJ0Tau[CutN];


TH1D *hCosbl[CutN];
TH1D *hdPhiDil[CutN];
TH1D *hdPhiElMET[CutN];
TH1D *hdPhiMuMET[CutN];
TH1D *hdPhiTauMET[CutN];
TH1D *hdPhiTau1MET[CutN];
TH1D *hdPhiTau2MET[CutN];

TH1D *hdPhiJMET[CutN];
TH1D *hdPhiJ0J1[CutN];
TH1D *hdPhiJ0Tau[CutN];
TH1D *hdPhiJ0El[CutN];
TH1D *hdPhiJ0Mu[CutN];
TH1D *hdPhiJ0MET[CutN];
TH1D *hdPhiMinJMET[CutN];

TH1D *hCosdPhiJ0MET[CutN];

TH1D *hdPhiJ1MET[CutN];
TH1D *hdPhiJ2MET[CutN];
TH1D *hdPhiJ3MET[CutN];

TH1D *hdPhiLept1MET[CutN];
TH1D *hdPhiLept2MET[CutN];
TH1D *hdPhiJ0Lept1[CutN];
TH1D *hdPhiJ0Lept2[CutN];

TH1D *hMT[CutN];
TH1D *hMTsum[CutN];
TH1D *hMTtot[CutN];
TH1D *hMTel[CutN];
TH1D *hMTmu[CutN];
TH1D *hMTmuFineBin[CutN];
TH1D *hMTmub[CutN];
TH1D *hMTmubFineBin[CutN];
TH1D *hMT2blmu[CutN];
TH1D *hMT2blmuFineBin[CutN];
TH1D *hMTmax[CutN];
TH1D *hMTmin[CutN];
TH1D *hMTtau[CutN];
TH1D *hDZeta[CutN];
TH1D *hDZetaFB[CutN];
TH1D *hDZetaR[CutN];
TH1D *hDZetaRFB[CutN];

TH1D *hMTmutau[CutN];
TH1D *hMTdiff[CutN];
TH1D *hMTmuel[CutN];
TH1D *hMTeltau[CutN];
TH1D *hMTtautau[CutN];


TH1D *hMt2lesterDil[CutN];
TH1D *hMt2lesterDilFB[CutN];
TH1D *hMt2Dil[CutN];
TH1D *hMCTDil[CutN];
TH1D *hMCTbDil[CutN];
TH1D *hMTDil[CutN];
TH1D *hMTlept1[CutN];
TH1D *hMTlept2[CutN];
TH1D *hdR_Dil[CutN];
TH1D *hdR_BottomLepton[CutN];
TH1D *hInvMassDil[CutN];
TH1D *hInvMassDilFineBin[CutN];
TH1D *hPtDil[CutN];

TH1D *hPtDil3MuTau[CutN];
TH1D *hPtDil2Mu2Tau[CutN];
TH1D *hPtDil2MuElTau[CutN];

TH1D *hPtDil3ElTau[CutN];
TH1D *hPtDil2El2Tau[CutN];
TH1D *hPtDil2ElMuTau[CutN];

TH1D *hDiJetMass_J0J1[CutN];
TH1D *hTriJetMass_J0J1J2[CutN];

TH1D *hMt2LowDzeta[CutN];
TH1D *hMt2MiddleDzeta[CutN];
TH1D *hMt2HighDzeta[CutN];

TH1D *hMt2lestermutau[CutN];
TH1D *hMt2lestermutauFB[CutN];
TH1D *hMt2mutau[CutN];
TH1D *hMt2[CutN];
TH1D *hMCTmutau[CutN];
TH1D *hMCTxmutau[CutN];
TH1D *hMCTymutau[CutN];
TH1D *hMCTbmutau[CutN];
TH1D *hMCTcor[CutN];


TH1D *hMt2lestermuel[CutN];
TH1D *hMt2lestermuelFB[CutN];
TH1D *hMt2muel[CutN];
TH1D *hMCTmuel[CutN];
TH1D *hMCTxmuel[CutN];
TH1D *hMCTymuel[CutN];
TH1D *hMCTbmuel[CutN];

TH1D *hMt2lestereltau[CutN];
TH1D *hMt2lestereltauFB[CutN];
TH1D *hMt2eltau[CutN];
TH1D *hMCTeltau[CutN];
TH1D *hMCTxeltau[CutN];
TH1D *hMCTyeltau[CutN];
TH1D *hMCTbeltau[CutN];

TH1D *hMTBoundmutau[CutN];
TH1D *hMTTruemutau[CutN];

TH1D *hdR_mutau[CutN];
TH1D *hdR_eltau[CutN];
TH1D *hdR_tautau[CutN];
TH1D *hdR_muel[CutN];
TH1D *hdR_taujet[CutN];


TH1D *hnpv[CutN];
TH1D *hnpu[CutN];
TH1D *hnrho[CutN];
TH1D *hmet_MT2lester_DZeta_01J1D[CutN];


TH1D *hmet_MT2lester1D[CutN];
TH1D *hmet_MT2lester[CutN];
TH1D *hmet_DZeta1D[CutN];
TH1D *hMT2lester_DZeta1D[CutN];


TH1D *hDNNmutau_Stau100[CutN];

TH1D *hBDTmutau_Stau100_LSP50My[CutN];
TH1D *hBDTmutau_Stau100[CutN];
TH1D *hBDTmutau_Stau150_LSP100My[CutN];
TH1D *hBDTmutau_Stau150[CutN];
TH1D *hBDTmutau_Stau150_LSP50My[CutN];
TH1D *hBDTmutau_Stau200_LSP100My[CutN];
TH1D *hBDTmutau_Stau200_LSP150My[CutN];
TH1D *hBDTmutau_Stau200[CutN];
TH1D *hBDTmutau_Stau200_LSP50My[CutN];
TH1D *hBDTmutau_Stau300[CutN];
TH1D *hBDTmutau_Stau300_LSP200My[CutN];


TH1D *hBDTmutau_Stau90[CutN];
TH1D *hBDTmutau_Stau250[CutN];

TH1D *hBDTeltau_Stau90[CutN];
TH1D *hBDTeltau_Stau250[CutN];


TH1D *hBDTeltau_Stau100_LSP50My[CutN];
TH1D *hBDTeltau_Stau100[CutN];
TH1D *hBDTeltau_Stau150_LSP100My[CutN];
TH1D *hBDTeltau_Stau150[CutN];
TH1D *hBDTeltau_Stau150_LSP50My[CutN];
TH1D *hBDTeltau_Stau200_LSP100My[CutN];
TH1D *hBDTeltau_Stau200_LSP150My[CutN];
TH1D *hBDTeltau_Stau200[CutN];
TH1D *hBDTeltau_Stau200_LSP50My[CutN];
TH1D *hBDTeltau_Stau300[CutN];
TH1D *hBDTeltau_Stau300_LSP200My[CutN];

TH1D *hBDTchannel[CutN];



TH1D *CutFlow= new TH1D("CutFlow","Cut Flow",CutN,1,CutN+1);
TH1D *CutFlowUnW= new TH1D("CutFlowUnW","Cut Flow",CutN,1,CutN+1);
TH1D *CutFlowUnWNorm= new TH1D("CutFlowUnWNorm","Cut Flow",CutN,1,CutN+1);

TH1D *CutFlowUnWLoose= new TH1D("CutFlowUnWLoose","Cut Flow",CutN,1,CutN+1);
TH1D *CutFlowUnWTight= new TH1D("CutFlowUnWTight","Cut Flow",CutN,1,CutN+1);

TH1D *CutFlowUnWFakeRateL[CutF];
TH1D *CutFlowUnWFakeRateJetL[CutF];
TH1D *CutFlowUnWFakeRateT[CutF];
TH1D *CutFlowUnWFakeRateJetT[CutF];

TH1D *CutFlowUnWFakeRate[CutF][nBinsSR];
TH1D *CutFlowUnWFakeRateJet[CutF][nBinsSR];

TH1D * inputEventsH = new TH1D("inputEventsH","",1,-0.5,0.5);
TH1D * hxsec = new TH1D("xsec","",1,0,10e+20);


TH1D * muonPtAllH = new TH1D("muonPtAllH","",10,0,200);
TH1D * electronPtAllH = new TH1D("electronPtAllH","",10,0,200);
TH1D * TauPtAllH = new TH1D("TauPtAllH","",10,0,200);

// histograms (dilepton selection)
TH1D * electronPtH  = new TH1D("electronPtH","",10,0,200);
TH1D * electronEtaH = new TH1D("electronEtaH","",50,-2.5,2.5); 
TH1D * muonPtH  = new TH1D("muonPtH","",10,0,200);
TH1D * muonEtaH = new TH1D("muonEtaH","",50,-2.5,2.5); 
TH1D * tauEtaAllH = new TH1D("tauEtaAllH","",50,-2.5,2.5); 
 
TH1D * dileptonMassH = new TH1D("dileptonMassH","",10,0,200);
TH1D * dileptonPtH = new TH1D("dileptonPtH","",10,0,200);
TH1D * dileptonEtaH = new TH1D("dileptonEtaH","",100,-5,5);
TH1D * dileptondRH = new TH1D("dileptondRH","",60,0,6);
TH1D * ETmissH = new TH1D("ETmissH","",10,0,200);
TH1D * MtH = new TH1D("MtH_2l","",10,0,200);
TH1D * DZetaH = new TH1D("DZetaH","",60,-400,200);

// histograms (dilepton selection + DZeta cut DZeta)
TH1D * electronPtSelH  = new TH1D("electronPtSelH","",10,0,200);
TH1D * electronEtaSelH = new TH1D("electronEtaSelH","",50,-2.5,2.5); 
TH1D * muonPtSelH  = new TH1D("muonPtSelH","",10,0,200);
TH1D * muonEtaSelH = new TH1D("muonEtaSelH","",50,-2.5,2.5); 

TH1D * dileptonMassSelH = new TH1D("dileptonMassSelH","",10,0,200);
TH1D * dileptonPtSelH = new TH1D("dileptonPtSelH","",10,0,200);
TH1D * dileptonEtaSelH = new TH1D("dileptonEtaSelH","",100,-5,5);
TH1D * dileptondRSelH = new TH1D("dileptondRSelH","",60,0,6);
TH1D * ETmissSelH = new TH1D("ETmissSelH","",10,0,200);
TH1D * MtSelH = new TH1D("MtSelH_2l","",10,0,200);
TH1D * DZetaSelH = new TH1D("DZetaSelH","",60,-400,200);


//////////////////////////////////////////// FakeRate plots
/*
  TH1D * hMTf = new TH1D("hMTf","",20,0,200);
  TH1D * hRatioSum = new TH1D("hRatioSum","",10,0,1);
  TH1D * hDPhi = new TH1D("hDPhi","",70,0,3.5);
  TH1D * hMETf = new TH1D("hMETf","",10,0,200);
  TH1D * hnJets = new TH1D("hnJets","",15,-0.5,14.5);
  TH1D * hnMatchedJets = new TH1D("hnMatchedJets","",15,-0.5,14.5);
  TH1D * hnMatchedJetsT = new TH1D("hnMatchedJetsT","",15,-0.5,14.5);
  TH1D * hnbJets = new TH1D("hnbJets","",15,-0.5,14.5);
  TH1D * hIsoMuf = new TH1D("hIsoMuf","",100,0,0.5);
  TH1D * hIsoMuSel = new TH1D("hIsoMuSel","",100,0,0.5);

  TH1D * hnJets1L = new TH1D("hnJets1L","",15,-0.5,14.5);
  TH1D * hnbJets1L = new TH1D("hnbJets1L","",15,-0.5,14.5);
  TH1D * hnJets2L = new TH1D("hnJets2L","",15,-0.5,14.5);
  TH1D * hnbJets2L = new TH1D("hnbJets2L","",15,-0.5,14.5);
  TH1D * hnJets3L = new TH1D("hnJets3L","",15,-0.5,14.5);
  TH1D * hnbJets3L = new TH1D("hnbJets3L","",15,-0.5,14.5);
  TH1D * hnJets4L = new TH1D("hnJets4L","",15,-0.5,14.5);
  TH1D * hnbJets4L = new TH1D("hnbJets4L","",15,-0.5,14.5);
  TH1D * hnJets1T = new TH1D("hnJets1T","",15,-0.5,14.5);
  TH1D * hnbJets1T = new TH1D("hnbJets1T","",15,-0.5,14.5);
  TH1D * hnJets2T = new TH1D("hnJets2T","",15,-0.5,14.5);
  TH1D * hnbJets2T = new TH1D("hnbJets2T","",15,-0.5,14.5);
  TH1D * hnJets3T = new TH1D("hnJets3T","",15,-0.5,14.5);
  TH1D * hnbJets3T = new TH1D("hnbJets3T","",15,-0.5,14.5);
  TH1D * hnJets4T = new TH1D("hnJets4T","",15,-0.5,14.5);
  TH1D * hnbJets4T = new TH1D("hnbJets4T","",15,-0.5,14.5);
  TH1D * hnJetsTFRL = new TH1D("hnJetsTFRL","",15,-0.5,14.5);
  TH1D * hnbJetsTFRL = new TH1D("hnbJetsTFRL","",15,-0.5,14.5);
  TH1D * hnJetsTFRT = new TH1D("hnJetsTFRT","",15,-0.5,14.5);
  TH1D * hnbJetsTFRT = new TH1D("hnbJetsTFRT","",15,-0.5,14.5);

  TH1D * hMTCut1L = new TH1D("hMTCut1L","",20,0,200);
  TH1D * hMTCut2L = new TH1D("hMTCut2L","",20,0,200);
  TH1D * hMTCut3L = new TH1D("hMTCut3L","",20,0,200);
  TH1D * hMTCut4L = new TH1D("hMTCut4L","",20,0,200);
  TH1D * hMTCutTFRL = new TH1D("hMTCutTFRL","",20,0,200);
  TH1D * hMTCut1T = new TH1D("hMTCut1T","",20,0,200);
  TH1D * hMTCut2T = new TH1D("hMTCut2T","",20,0,200);
  TH1D * hMTCut3T = new TH1D("hMTCut3T","",20,0,200);
  TH1D * hMTCut4T = new TH1D("hMTCut4T","",20,0,200);
  TH1D * hMTCutTFRT = new TH1D("hMTCutTFRT","",20,0,200);

  TH1D * hRatioSum1L = new TH1D("hRatioSum1L","",10,0,1);
  TH1D * hRatioSum2L = new TH1D("hRatioSum2L","",10,0,1);
  TH1D * hRatioSum3L = new TH1D("hRatioSum3L","",10,0,1);
  TH1D * hRatioSum4L = new TH1D("hRatioSum4L","",10,0,1);
  TH1D * hRatioSumTFRL = new TH1D("hRatioSumTFRL","",10,0,1);
  TH1D * hRatioSum1T = new TH1D("hRatioSum1T","",10,0,1);
  TH1D * hRatioSum2T = new TH1D("hRatioSum2T","",10,0,1);
  TH1D * hRatioSum3T = new TH1D("hRatioSum3T","",10,0,1);
  TH1D * hRatioSum4T = new TH1D("hRatioSum4T","",10,0,1);
  TH1D * hRatioSumTFRT = new TH1D("hRatioSumTFRT","",10,0,1);

  TH1D * hDPhiCut1L = new TH1D("hDPhiCut1L","",70,0,3.5);
  TH1D * hDPhiCut2L = new TH1D("hDPhiCut2L","",70,0,3.5);
  TH1D * hDPhiCut3L = new TH1D("hDPhiCut3L","",70,0,3.5);
  TH1D * hDPhiCut4L = new TH1D("hDPhiCut4L","",70,0,3.5);
  TH1D * hDPhiCutTFRL = new TH1D("hDPhiCutTFRL","",70,0,3.5);
  TH1D * hDPhiCut1T = new TH1D("hDPhiCut1T","",70,0,3.5);
  TH1D * hDPhiCut2T = new TH1D("hDPhiCut2T","",70,0,3.5);
  TH1D * hDPhiCut3T = new TH1D("hDPhiCut3T","",70,0,3.5);
  TH1D * hDPhiCut4T = new TH1D("hDPhiCut4T","",70,0,3.5);
  TH1D * hDPhiCutTFRT = new TH1D("hDPhiCutTFRT","",70,0,3.5);
  TH1D * hMETCut1L = new TH1D("hMETCut1L","",10,0,200);
  TH1D * hMETCut2L = new TH1D("hMETCut2L","",10,0,200);
  TH1D * hMETCut3L = new TH1D("hMETCut3L","",10,0,200);
  TH1D * hMETCut4L = new TH1D("hMETCut4L","",10,0,200);
  TH1D * hMETCutTFRL = new TH1D("hMETCutTFRL","",10,0,200);
  TH1D * hMETCut1T = new TH1D("hMETCut1T","",10,0,200);
  TH1D * hMETCut2T = new TH1D("hMETCut2T","",10,0,200);
  TH1D * hMETCut3T = new TH1D("hMETCut3T","",10,0,200);
  TH1D * hMETCut4T = new TH1D("hMETCut4T","",10,0,200);
  TH1D * hMETCutTFRT = new TH1D("hMETCutTFRT","",10,0,200);

  TH1D * hLooseIndex = new TH1D("hLooseIndex","",5,0,5);
  TH1D * hTightIndex = new TH1D("hTightIndex","",5,0,5);
*/

 const int nPtBins = 3;
  float ptBins[4] = {20,30,40,1000};
	

  TString PtBins[3] = {
    "Pt20to30",
    "Pt30to40",
    "PtGt40"};//,
    //"PtGt60"};//,		       "Pt100to150",		       "Pt150to200",		        "PtGt200"};

 const int nPtBins2 = 2;
  float ptBins2[3] = {20,40,1000};
	

  TString PtBins2[2] = {
    "Pt20to40",
    "PtGt40"};//,


const  int nEtaBins = 4;
    float etaBins[5] = {0, 0.8, 1.444, 1.566, 2.3}; 

    TString EtaBins[4] = {"EtaLt0p8",
    "Eta0p8to1p44",
    "Eta1p44to1p566",
    "EtaGt1p566"};





  const int nCuts = 4;

  TString Cuts[4] = {"MET","mT","DPhi","All"};
  /////first stands for the Eta bin, second array for the cut 
  TH1D * FakeRatePtIncLoose[nEtaBins][nCuts];
  TH1D * FakeRatePtIncTight[nEtaBins][nCuts];



  TH1D * hnJets[nCuts];
  TH1D * hnJetsL[nCuts];
  TH1D * hnJetsT[nCuts];
  TH1D * hnbJets[nCuts];
  TH1D * hnbJetsT[nCuts];
  TH1D * hnbJetsL[nCuts];
  TH1D * hRatioSumL[nCuts];
  TH1D * hRatioSumT[nCuts];

  TH1D * hMuIsoL[nCuts];
  TH1D * hMuIsoT[nCuts];
  TH1D * hMTCutL[nCuts];
  TH1D * hMTCutT[nCuts];
  TH1D * hMRatioSumL[nCuts];
  TH1D * hMRatioSumT[nCuts];
  TH1D * hDPhiCutL[nCuts];
  TH1D * hDPhiCutT[nCuts];
  TH1D * hMETCutL[nCuts];
  TH1D * hMETCutT[nCuts];




std::vector<pair<string,float> > variables_;
std::vector<pair<string,float> > variablesMC_;

TTree *T;

void WriteHists(int CutNer, TFile *in, TString dir){

  in->cd(dir);

  for(int cj = 0; cj < CutNer; cj++)
    {

      hHTOsqrMET[cj]->Write();
    }
}

void SetupHistsFake(int CutNF){


for(int nSR = 0; nSR < nBinsSR; nSR++){
  for(int cj = 0; cj < CutNF; cj++)
    	{
      TString nCut;
      TString nsr;
      nCut.Form("%i",cj);
      nsr.Form("%i",nSR);
      
     // cout<<" setting histo now "<<"CutFlowUnWFakeRate_"<<nCut<<"_"<<nsr<<endl;

      CutFlowUnWFakeRate[cj][nSR]= new TH1D("CutFlowUnWFakeRate_"+nCut+"_"+nsr,"Cut Flow",CutNF,1,CutNF+1);

	int sz = FakeList.size();
	for (int j=0;j<sz;++j){
	TString l_ = FakeList[j].c_str();
	//cout<<" set up "<<FakeList[cj].c_str()<<endl;
       CutFlowUnWFakeRate[cj][nSR]->GetXaxis()->SetBinLabel(j+1,l_);
			}
    		}
	}//loop in nSR
}

void SetupHistsnSR(int CutNF){


for(int nSR = 0; nSR < nBinsSR; nSR++){
  for(int cj = 0; cj < CutNF; cj++)
    	{
      TString nCut;
      TString nsr;
      nCut.Form("%i",cj);
      nsr.Form("%i",nSR);
      
//      cout<<" setting histo now hMt2_binned_"<<nCut<<"_"<<nsr<<endl;

      hMt2_binned[cj][nSR]= new TH1D("hMt2_binned_"+nCut+"_"+nsr,"Mt2 ",nBinsMT2lester,binsMT2lesterr);
      hMET_binned[cj][nSR]= new TH1D("hMET_binned_"+nCut+"_"+nsr,"MET ",nBinsmet,binsmett);
      hDzeta_binned[cj][nSR]= new TH1D("hDzeta_binned_"+nCut+"_"+nsr,"DZeta ",nBinsDZeta,binsDZeta);

    		}
	}//loop in nSR
}

void SetupHistsFakeJet(int CutNF){

for(int nSR = 0; nSR < nBinsSR; ++nSR){
  for(int cj = 0; cj < CutNF; ++cj)
    	{
      TString nCut;
      TString nsr;
      nCut.Form("%i",cj);
      nsr.Form("%i",nSR);
      
     // cout<<" setting histo now "<<"CutFlowUnWFakeRate_"<<nCut<<"_"<<nsr<<endl;

      CutFlowUnWFakeRateJet[cj][nSR]= new TH1D("CutFlowUnWFakeRateJet_"+nCut+"_"+nsr,"Cut Flow",CutNF,1,CutNF+1);

	int sz = FakeListJet.size();
	for (int j=0;j<sz;++j){
	TString l_ = FakeListJet[j].c_str();
//	cout<<" set up "<<FakeListJet[cj].c_str()<<" for "<<nSR<<endl;
       CutFlowUnWFakeRateJet[cj][nSR]->GetXaxis()->SetBinLabel(j+1,l_);
			}
    		}
	}//loop in nSR
}

void SetupHistsFakeRate(int CutNer){



  TH1D * etaBinsH = new TH1D("etaBinsH", "etaBinsH", nEtaBins, etaBins);
  etaBinsH->GetXaxis()->Set(nEtaBins, etaBins);
  for (int i=0; i<nEtaBins; ++i){ etaBinsH->GetXaxis()->SetBinLabel(i+1, EtaBins[i]);}
  
  TH1D * PtBinsH = new TH1D("PtBinsH", "PtBinsH", nPtBins, ptBins);
  PtBinsH->GetXaxis()->Set(nPtBins, ptBins);
  for (int i=0; i<nPtBins; ++i){ PtBinsH->GetXaxis()->SetBinLabel(i+1, PtBins[i]);}


  for (int iEta=0; iEta<nEtaBins; ++iEta) {
    for (int iCut=0; iCut<nCuts; ++iCut) {
    	if (iEta!=2){  
      		FakeRatePtIncLoose[iEta][iCut] = new TH1D("FakeRatePtIncLoose"+EtaBins[iEta]+Cuts[iCut],"",nPtBins,ptBins);
      		FakeRatePtIncTight[iEta][iCut] = new TH1D("FakeRatePtIncTight"+EtaBins[iEta]+Cuts[iCut],"",nPtBins,ptBins);
	}
  
   	if (iEta==2) {
      		FakeRatePtIncLoose[iEta][iCut] = new TH1D("FakeRatePtIncLoose"+EtaBins[iEta]+Cuts[iCut],"",nPtBins2,ptBins2);
      		FakeRatePtIncTight[iEta][iCut] = new TH1D("FakeRatePtIncTight"+EtaBins[iEta]+Cuts[iCut],"",nPtBins2,ptBins2);
    		}
    }

    //for (int iPt=0; iPt<nPtBins; ++iPt) {
    //  FakeRatePt[iEta][iPt] = new TH1D("FakeRatePt"+EtaBins[iEta]+PtBins[iPt],"",100,0,1000);
    //  FakeRateNV[iEta][iPt] = new TH1D("FakeRateNV"+EtaBins[iEta]+PtBins[iPt],"",50,0,50);
    //  FakeRateEta[iEta][iPt] = new TH1D("FakeRateEta"+EtaBins[iEta]+PtBins[iPt],"",80,-4,4);
    // }

  }

for(int cj = 0; cj < CutNer; cj++)
    {
      CutFlow->GetXaxis()->SetBinLabel(cj+1,CutList[cj].c_str());
      CutFlowUnW->GetXaxis()->SetBinLabel(cj+1,CutList[cj].c_str());
      CutFlowUnWLoose->GetXaxis()->SetBinLabel(cj+1,CutList[cj].c_str());
      CutFlowUnWTight->GetXaxis()->SetBinLabel(cj+1,CutList[cj].c_str());

    }
}


void SetupHists(int CutNer, char* Nplots){



for(int cj = 0; cj < CutNer; cj++)
    {
      CutFlow->GetXaxis()->SetBinLabel(cj+1,CutList[cj].c_str());
      CutFlowUnW->GetXaxis()->SetBinLabel(cj+1,CutList[cj].c_str());
      CutFlowUnWLoose->GetXaxis()->SetBinLabel(cj+1,CutList[cj].c_str());
      CutFlowUnWTight->GetXaxis()->SetBinLabel(cj+1,CutList[cj].c_str());
  //  }

//for(int cj = 0; cj < CutNer; cj++)
  //  {
      TString cutName=CutList[cj];
      TString nCut;
      nCut.Form("%i",cj);
      TString fCut;
      ///generic variables
      /*
for(int jj = 0; jj < 60; jj++){
      TString nCutt;
      nCutt.Form("%i",jj);
      hDeltaMET[cj][jj] = new TH1D ("DeltaMET_"+nCut+"_bin"+nCutt,"DMET "+cutName + Nplots,100,-100,100);
      hDeltaMET[cj][jj]->Sumw2();
      hDeltaMETRel[cj][jj] = new TH1D ("DeltaMETRel_"+nCut+"_bin"+nCutt,"DMETRel "+cutName + Nplots,100,-10,10);
      hDeltaMETRel[cj][jj]->Sumw2();

}
*/
      hmet1D[cj]= new TH1D ("met1D_"+nCut + Nplots,"met1D "+cutName + Nplots,100,-100,100);
      hmet1D[cj]->Sumw2();
      hTauDecayMode1[cj] = new TH1D("TauDecayMode1_"+nCut + Nplots,"TauDecayMode "+cutName + Nplots, 10, -0.5,9.5);
      hTauDecayMode1[cj]->Sumw2();
      hTauDecayMode2[cj] = new TH1D("TauDecayMode2_"+nCut + Nplots,"TauDecayMode "+cutName + Nplots, 10, -0.5,9.5);
      hTauDecayMode2[cj]->Sumw2();

      hTauDecayModeAll[cj] = new TH1D("TauDecayModeAll_"+nCut + Nplots,"TauDecayModeAll "+cutName + Nplots, 11, -1.5,9.5);
      hTauDecayModeAll[cj]->Sumw2();

      //hDZeta[cj] = new TH1D("hDZeta_"+nCut + Nplots,"hDZeta "+cutName + Nplots,30,-400,200);
      hDZeta[cj] = new TH1D("hDZeta_"+nCut + Nplots,"hDZeta "+cutName + Nplots,nBinsDZeta,binsDZeta);
      hDZeta[cj]->Sumw2();

      hDZetaFB[cj] = new TH1D("hDZetaFB_"+nCut + Nplots,"hDZeta "+cutName + Nplots,30,-400,200);
      hDZetaFB[cj]->Sumw2();
      
      hDZetaR[cj] = new TH1D("hDZetaR_"+nCut + Nplots,"hDZetaR"+cutName + Nplots,nBinsDZetaR,binsDZetaR);
      hDZetaR[cj]->Sumw2();
      hDZetaRFB[cj] = new TH1D("hDZetaRFB_"+nCut + Nplots,"hDZetaRFB"+cutName + Nplots,200,0,2);
      hDZetaRFB[cj]->Sumw2();
	
      hMuneutralHadIso[cj] = new TH1D("mu_neutralHadIso_"+nCut + Nplots,"mu_neutralHadIso "+cutName + Nplots,150,0,300);
      hMuneutralHadIso[cj]->Sumw2();

      hMuphotonIso[cj] = new TH1D("mu_photonIso_"+nCut + Nplots,"mu_photonIso "+cutName + Nplots,150,0,300);
      hMuphotonIso[cj]->Sumw2();

      hMuchargedHadIso[cj] = new TH1D("mu_chargedHadIso_"+nCut + Nplots,"mu_chargedHadIso "+cutName + Nplots,150,0,300);
      hMuchargedHadIso[cj]->Sumw2();

      hMupuIso[cj] = new TH1D("mu_puIso_"+nCut + Nplots,"mu_puIso "+cutName + Nplots,200,0,200);
      hMupuIso[cj]->Sumw2();

      hMuneutralIso[cj] = new TH1D("mu_neutralIso_"+nCut + Nplots,"mu_neutralIso "+cutName + Nplots,150,0,300);
      hMuneutralIso[cj]->Sumw2();

      hMuabsIsoMu[cj] = new TH1D("mu_absIsoMu_"+nCut + Nplots,"mu_absIsoMu "+cutName + Nplots,150,0,300);
      hMuabsIsoMu[cj]->Sumw2();

      hMurelIsoMu[cj] = new TH1D("mu_relIsoMu_"+nCut + Nplots,"mu_relIsoMu "+cutName + Nplots,200,0,10);
      hMurelIsoMu[cj]->Sumw2();


      hMuEff[cj] = new TH2D ("MuEff_"+nCut + Nplots,"MuEff "+cutName + Nplots, nBinsPt, binsMuEff, nBinsEta,binsEtaMuEff);
      hMuEff[cj]->Sumw2();
      hElEff[cj] = new TH2D ("ElEff_"+nCut + Nplots,"ElEff "+cutName + Nplots, nBinsPt, binsElEff, nBinsEta-1,binsEtaElEff);
      hElEff[cj]->Sumw2();


      hTauPtEta[cj] = new TH2D ("TauPtEta"+nCut + Nplots,"TauPtEta "+cutName + Nplots, nBinsTauPt2, binsTauPt2, nBinsTauEta2,binsTauEta2);
      hTauPtEta[cj]->Sumw2();


      hLept1neutralHadIso[cj] = new TH1D("lept1_neutralHadIso_"+nCut + Nplots,"lept1_neutralHadIso "+cutName + Nplots,150,0,300);
      hLept1neutralHadIso[cj]->Sumw2();

      hLept1photonIso[cj] = new TH1D("lept1_photonIso_"+nCut + Nplots,"lept1_photonIso "+cutName + Nplots,150,0,300);
      hLept1photonIso[cj]->Sumw2();

      hLept1chargedHadIso[cj] = new TH1D("lept1_chargedHadIso_"+nCut + Nplots,"lept1_chargedHadIso "+cutName + Nplots,150,0,300);
      hLept1chargedHadIso[cj]->Sumw2();

      hLept1puIso[cj] = new TH1D("lept1_puIso_"+nCut + Nplots,"lept1_puIso "+cutName + Nplots,200,0,200);
      hLept1puIso[cj]->Sumw2();

      hLept1neutralIso[cj] = new TH1D("lept1_neutralIso_"+nCut + Nplots,"lept1_neutralIso "+cutName + Nplots,150,0,300);
      hLept1neutralIso[cj]->Sumw2();

      hLept1absIsoMu[cj] = new TH1D("lept1_absIsoMu_"+nCut + Nplots,"lept1_absIsoMu "+cutName + Nplots,150,0,300);
      hLept1absIsoMu[cj]->Sumw2();

      hLept1relIsoMu[cj] = new TH1D("lept1_relIsoMu_"+nCut + Nplots,"lept1_relIsoMu "+cutName + Nplots,200,0,10);
      hLept1relIsoMu[cj]->Sumw2();
/////////

      hLept2neutralHadIso[cj] = new TH1D("lept2_neutralHadIso_"+nCut + Nplots,"lept2_neutralHadIso "+cutName + Nplots,150,0,300);
      hLept2neutralHadIso[cj]->Sumw2();

      hLept2photonIso[cj] = new TH1D("lept2_photonIso_"+nCut + Nplots,"lept2_photonIso "+cutName + Nplots,150,0,300);
      hLept2photonIso[cj]->Sumw2();

      hLept2chargedHadIso[cj] = new TH1D("lept2_chargedHadIso_"+nCut + Nplots,"lept2_chargedHadIso "+cutName + Nplots,150,0,300);
      hLept2chargedHadIso[cj]->Sumw2();

      hLept2puIso[cj] = new TH1D("lept2_puIso_"+nCut + Nplots,"lept2_puIso "+cutName + Nplots,200,0,200);
      hLept2puIso[cj]->Sumw2();

      hLept2neutralIso[cj] = new TH1D("lept2_neutralIso_"+nCut + Nplots,"lept2_neutralIso "+cutName + Nplots,150,0,300);
      hLept2neutralIso[cj]->Sumw2();

      hLept2absIsoMu[cj] = new TH1D("lept2_absIsoMu_"+nCut + Nplots,"lept2_absIsoMu "+cutName + Nplots,150,0,300);
      hLept2absIsoMu[cj]->Sumw2();

      hLept2relIsoMu[cj] = new TH1D("lept2_relIsoMu_"+nCut + Nplots,"lept2_relIsoMu "+cutName + Nplots,200,0,10);
      hLept2relIsoMu[cj]->Sumw2();

///////////





      hElneutralHadIso[cj] = new TH1D("el_neutralHadIso_"+nCut + Nplots,"el_neutralHadIso "+cutName + Nplots,150,0,300);
      hElneutralHadIso[cj]->Sumw2();

      hElphotonIso[cj] = new TH1D("el_photonIso_"+nCut + Nplots,"el_photonIso "+cutName + Nplots,150,0,300);
      hElphotonIso[cj]->Sumw2();

      hElchargedHadIso[cj] = new TH1D("el_chargedHadIso_"+nCut + Nplots,"el_chargedHadIso "+cutName + Nplots,150,0,300);
      hElchargedHadIso[cj]->Sumw2();

      hElpuIso[cj] = new TH1D("el_puIso_"+nCut + Nplots,"el_puIso "+cutName + Nplots,200,0,200);
      hElpuIso[cj]->Sumw2();

      hElneutralIso[cj] = new TH1D("el_neutralIso_"+nCut + Nplots,"el_neutralIso "+cutName + Nplots,150,0,300);
      hElneutralIso[cj]->Sumw2();

      hElabsIsoEl[cj] = new TH1D("el_absIsoEl_"+nCut + Nplots,"el_absIsoEl "+cutName + Nplots,150,0,300);
      hElabsIsoEl[cj]->Sumw2();

      hElrelIsoEl[cj] = new TH1D("el_relIsoEl_"+nCut + Nplots,"el_relIsoEl "+cutName + Nplots,200,0,10);
      hElrelIsoEl[cj]->Sumw2();



      hMudxy[cj] = new TH1D ("mu_dxy_"+nCut + Nplots,"mu_dxy "+cutName + Nplots,80,-.2,.2);
      hMudxy[cj]->Sumw2();
      hMudxyerr[cj] = new TH1D ("mu_dxyerr_"+nCut + Nplots,"mu_dxyerr "+cutName + Nplots,80,-.2,.2);
      hMudxyerr[cj]->Sumw2();
      hLept1dxy[cj] = new TH1D ("lept1_dxy_"+nCut + Nplots,"lept1_dxy "+cutName + Nplots,80,-.2,.2);
      hLept1dxy[cj]->Sumw2();
      hLept1dxyerr[cj] = new TH1D ("lept1_dxyerr_"+nCut + Nplots,"lept1_dxyerr "+cutName + Nplots,80,-.2,.2);
      hLept1dxyerr[cj]->Sumw2();
      hLept2dxy[cj] = new TH1D ("lept2_dxy_"+nCut + Nplots,"lept2_dxy "+cutName + Nplots,80,-.2,.2);
      hLept2dxy[cj]->Sumw2();
      hLept2dxyerr[cj] = new TH1D ("lept2_dxyerr_"+nCut + Nplots,"lept2_dxyerr "+cutName + Nplots,80,-.2,.2);
      hLept2dxyerr[cj]->Sumw2();
 
      hEldxy[cj] = new TH1D ("el_dxy_"+nCut + Nplots,"el_dxy "+cutName + Nplots,80,-.2,.2);
      hEldxy[cj]->Sumw2();
      hEldxyerr[cj] = new TH1D ("el_dxyerr_"+nCut + Nplots,"el_dxyerr "+cutName + Nplots,80,-.2,.2);
      hEldxyerr[cj]->Sumw2();

      htau_dxy[cj] = new TH1D ("tau_dxy_"+nCut + Nplots,"tau_dxy "+cutName + Nplots,80,-.2,.2);
      htau_dxy[cj]->Sumw2();
      htau1_dxy[cj] = new TH1D ("tau1_dxy_"+nCut + Nplots,"tau_dxy "+cutName + Nplots,80,-.2,.2);
      htau1_dxy[cj]->Sumw2();
      htau2_dxy[cj] = new TH1D ("tau2_dxy_"+nCut + Nplots,"tau_dxy "+cutName + Nplots,80,-.2,.2);
      htau2_dxy[cj]->Sumw2();
      

      htau_dz[cj] = new TH1D ("tau_dz_"+nCut + Nplots,"tau_dz "+cutName + Nplots,20,-.2,.2);
      htau_dz[cj]->Sumw2();
      htau1_dz[cj] = new TH1D ("tau1_dz_"+nCut + Nplots,"tau_dz "+cutName + Nplots,20,-.2,.2);
      htau1_dz[cj]->Sumw2();
      htau2_dz[cj] = new TH1D ("tau2_dz_"+nCut + Nplots,"tau_dz "+cutName + Nplots,20,-.2,.2);
      htau2_dz[cj]->Sumw2();

      hMudz[cj] = new TH1D ("mu_dz_"+nCut + Nplots,"mu_dz "+cutName + Nplots,20,-.2,.2);
      hMudz[cj]->Sumw2();
      hLept1dz[cj] = new TH1D ("lept1_dz_"+nCut + Nplots,"lept1_dz "+cutName + Nplots,20,-.2,.2);
      hLept1dz[cj]->Sumw2();
      hLept2dz[cj] = new TH1D ("lept2_dz_"+nCut + Nplots,"lept2_dz "+cutName + Nplots,20,-.2,.2);
      hLept2dz[cj]->Sumw2();
      hEldz[cj] = new TH1D ("el_dz_"+nCut + Nplots,"el_dz "+cutName + Nplots,20,-.2,.2);
      hEldz[cj]->Sumw2();

      hMudzerr[cj] = new TH1D ("mu_dzerr_"+nCut + Nplots,"mu_dzerr "+cutName + Nplots,20,-.2,.2);
      hMudzerr[cj]->Sumw2();
      hLept1dzerr[cj] = new TH1D ("lept1_dzerr_"+nCut + Nplots,"lept1_dzerr "+cutName + Nplots,20,-.2,.2);
      hLept1dzerr[cj]->Sumw2();
      hLept2dzerr[cj] = new TH1D ("lept2_dzerr_"+nCut + Nplots,"lept2_dzerr "+cutName + Nplots,20,-.2,.2);
      hLept2dzerr[cj]->Sumw2();
      hEldzerr[cj] = new TH1D ("el_dzerr_"+nCut + Nplots,"el_dzerr "+cutName + Nplots,20,-.2,.2);
      hEldzerr[cj]->Sumw2();
	
      hMuIPsigxy[cj] = new TH1D ("muIPsigxy_"+nCut + Nplots,"muIPsigxy "+cutName + Nplots,50,0,10);
      hMuIPsigxy[cj]->Sumw2();
      hMuIPsigz[cj] = new TH1D ("muIPsigz_"+nCut + Nplots,"muIPsigz "+cutName + Nplots,50,0,10);
      hMuIPsigz[cj]->Sumw2();
      hLept1IPsigxy[cj] = new TH1D ("lept1IPsigxy_"+nCut + Nplots,"lept1IPsigxy "+cutName + Nplots,50,0,10);
      hLept1IPsigxy[cj]->Sumw2();
      hLept1IPsigz[cj] = new TH1D ("lept1IPsigz_"+nCut + Nplots,"lept1IPsigz "+cutName + Nplots,50,0,10);
      hLept1IPsigz[cj]->Sumw2();
      hLept2IPsigxy[cj] = new TH1D ("lept2IPsigxy_"+nCut + Nplots,"lept2IPsigxy "+cutName + Nplots,50,0,10);
      hLept2IPsigxy[cj]->Sumw2();
      hLept2IPsigz[cj] = new TH1D ("lept2IPsigz_"+nCut + Nplots,"lept2IPsigz "+cutName + Nplots,50,0,10);
      hLept2IPsigz[cj]->Sumw2();
 
      hElIPsigxy[cj] = new TH1D ("elIPsigxy_"+nCut + Nplots,"elIPsigxy "+cutName + Nplots,50,0,10);
      hElIPsigxy[cj]->Sumw2();
      hElIPsigz[cj] = new TH1D ("elIPsigz_"+nCut + Nplots,"elIPsigz "+cutName + Nplots,50,0,10);
      hElIPsigz[cj]->Sumw2();

      hHTOsqrMET[cj] = new TH1D ("hHTOsqrMET_"+nCut + Nplots,"hHTOsqrMET "+cutName + Nplots,10,0.0,100.0);
      hHTOsqrMET[cj]->Sumw2();
      hPtOHT[cj] = new TH1D ("hPtOHT_"+nCut + Nplots,"hPtOHT "+cutName + Nplots,20,0.0,20.0);
      hPtOHT[cj]->Sumw2();
      
      hMeffMuonOsqrMET[cj] = new TH1D ("hMeffMuonOsqrMET_"+nCut + Nplots,"hMeffMuonOsqrMET "+cutName + Nplots,10,0.0,100.0);
      hMeffMuonOsqrMET[cj]->Sumw2();
      hMeffElOsqrMET[cj] = new TH1D ("hMeffElOsqrMET_"+nCut + Nplots,"hMeffElOsqrMET "+cutName + Nplots,10,0.0,100.0);
      hMeffElOsqrMET[cj]->Sumw2();
      hMeffOsqrMET[cj] = new TH1D ("hMeffOsqrMET_"+nCut + Nplots,"hMeffOsqrMET "+cutName + Nplots,10,0.0,100.0);
      hMeffOsqrMET[cj]->Sumw2();

      hMeffMuon[cj] = new TH1D ("hMeffMuon_"+nCut + Nplots,"hMeffMuon "+cutName + Nplots,100,0.0,1000.0);
      hMeffMuon[cj]->Sumw2();
      hMeffEl[cj] = new TH1D ("hMeffEl_"+nCut + Nplots,"hMeffEl "+cutName + Nplots,100,0.0,1000.0); 
      hMeffEl[cj]->Sumw2();
      hMeff[cj] = new TH1D ("hMeff_"+nCut + Nplots,"hMeff "+cutName + Nplots,100,0.0,1000.0); 
      hMeff[cj]->Sumw2();

      hCentrality[cj]  = new TH1D ("hCentrality_"+nCut + Nplots,"hCentrality "+cutName + Nplots,20,0.,1.);
      hCentrality[cj]->Sumw2();

      hHT[cj] = new TH1D ("HT_"+nCut + Nplots,"HT "+cutName + Nplots,100,0.0,1000.0);
      hHT[cj]->Sumw2();
      hgenHT[cj] = new TH1D ("genHT_"+nCut + Nplots,"genHT "+cutName + Nplots,10,0.0,1000.0);
      hgenHT[cj]->Sumw2();
 
      hRht[cj] = new TH1D ("Rht_"+nCut + Nplots,"Rht "+cutName + Nplots,30,0.0,15);
      hRht[cj]->Sumw2();
    
      hHText[cj] = new TH1D ("HText_"+nCut + Nplots,"HText "+cutName + Nplots,80,0.0,800.0);
      hHText[cj]->Sumw2();
      hHT2[cj] = new TH1D ("HT2_"+nCut + Nplots,"HT2 "+cutName + Nplots,50,0.0,1000.0);
      hHT2[cj]->Sumw2();
      hHT3[cj] = new TH1D ("HT3_"+nCut + Nplots,"HT3 "+cutName + Nplots,50,0.0,1000.0);
      hHT3[cj]->Sumw2();
      hHT4[cj] = new TH1D ("HT4_"+nCut + Nplots,"HT4 "+cutName + Nplots,50,0.0,1000.0);
      hHT4[cj]->Sumw2();
          
      hPtJ0[cj] = new TH1D ("hPtJ0_"+nCut + Nplots,"hPtJ0 "+cutName + Nplots,50,0.0,1000.0);
      hPtJ0[cj]->Sumw2();
      hPtJ1[cj] = new TH1D ("hPtJ1_"+nCut + Nplots,"hPtJ1 "+cutName + Nplots,50,0.0,1000.0);
      hPtJ1[cj]->Sumw2();
      hPtJ2[cj] = new TH1D ("hPtJ2_"+nCut + Nplots,"hPtJ2 "+cutName + Nplots,50,0.0,1000.0);
      hPtJ2[cj]->Sumw2();
      hPtJ3[cj] = new TH1D ("hPtJ3_"+nCut + Nplots,"hPtJ3 "+cutName + Nplots,50,0.0,1000.0);
      hPtJ3[cj]->Sumw2();
     

      //h0JetpT[cj] = new TH1D ("0JetpT_"+nCut + Nplots,"0JetpT "+cutName + Nplots,80,0.0,800.0);
      //h0JetpT[cj]->Sumw2();
      hnJet[cj] = new TH1D ("nJet_"+nCut + Nplots,"nJet "+cutName + Nplots, 25,-0.5,24.5);
      hnJet[cj]->Sumw2();
      hCSVv2[cj] = new TH1D ("hCSVv2_"+nCut + Nplots,"CSVv2 "+cutName + Nplots, 40,0.75,1.05);
      hCSVv2[cj] ->Sumw2();
      hCSVv2_b1[cj] = new TH1D ("hCSVv2_b1_"+nCut + Nplots,"CSVv2_b1 "+cutName + Nplots, 40,0.75,1.05);
      hCSVv2_b1[cj] ->Sumw2();
      hCSVv2_b2[cj] = new TH1D ("hCSVv2_b2_"+nCut + Nplots,"CSVv2_b2 "+cutName + Nplots, 40,0.75,1.05);
      hCSVv2_b2[cj] ->Sumw2();
      hnpartons[cj] = new TH1D ("npartons_"+nCut + Nplots,"npartons "+cutName + Nplots,6,-0.5,5.5);
      hnpartons[cj]->Sumw2();
      hnBJet[cj] = new TH1D ("nBJet_"+nCut + Nplots,"nBJet "+cutName + Nplots,10,-0.5,9.5);
      hnBJet[cj]->Sumw2();
      hnBJetTight[cj] = new TH1D ("nBJetTight_"+nCut + Nplots,"nBJet Tight "+cutName + Nplots,10,-0.5,9.5);
      hnBJetTight[cj]->Sumw2();

      hWeights[cj] = new TH1D ("hWeights_"+nCut + Nplots,"hWeights "+cutName + Nplots,10,-1,9);
      hWeights[cj]->Sumw2();
      hEventSign[cj] = new TH1D ("hEventSign_"+nCut + Nplots,"hEventSign "+cutName + Nplots,20,-10,10);
      hEventSign[cj]->Sumw2();
	
      hSmin[cj] = new TH1D ("Smin_"+nCut + Nplots,"Smin "+cutName + Nplots,80,0,800);
      hSmin[cj]->Sumw2();

      hInvMassblmu[cj] = new TH1D ("hInvMassblmu_"+nCut + Nplots,"hInvMassblmu "+cutName + Nplots,50,0,500);
      hInvMassblmu[cj]->Sumw2();
      hInvMassblmuFB[cj] = new TH1D ("hInvMassblmuFB_"+nCut + Nplots,"hInvMassblmuFineBin "+cutName + Nplots,250,0,500);
      hInvMassblmuFB[cj]->Sumw2();
      
      hInvMassMuTau[cj] = new TH1D ("hInvMassMuTau_"+nCut + Nplots,"hInvMassMuTau "+cutName + Nplots,50,0,500);
      hInvMassMuTau[cj]->Sumw2();
      hInvMassMuEl[cj] = new TH1D ("hInvMassMuEl_"+nCut + Nplots,"hInvMassMuel "+cutName + Nplots,50,0,500);
      hInvMassMuEl[cj]->Sumw2();
      hInvMassMuMu[cj] = new TH1D ("hInvMassMuMu_"+nCut + Nplots,"hInvMassMuMu "+cutName + Nplots,50,0,500);
      hInvMassMuMu[cj]->Sumw2();
      hInvMassElTau[cj] = new TH1D ("hInvMassElTau_"+nCut + Nplots,"hInvMassElTau "+cutName + Nplots,50,0,500);
      hInvMassElTau[cj]->Sumw2();
      hInvMassElEl[cj] = new TH1D ("hInvMassElEl_"+nCut + Nplots,"hInvMassElEl "+cutName + Nplots,50,0,500);
      hInvMassElEl[cj]->Sumw2();
      hInvMassTauTau[cj] = new TH1D ("hInvMassTauTau_"+nCut + Nplots,"hInvMassTauTau "+cutName + Nplots,50,0,500);
      hInvMassTauTau[cj]->Sumw2();
      hInvMassDil[cj] = new TH1D ("hInvMassDil_"+nCut + Nplots,"hInvMassDil "+cutName + Nplots,50,0,500);
      hInvMassDil[cj]->Sumw2();
      hInvMassDilFineBin[cj] = new TH1D ("hInvMassDilFineBin_"+nCut + Nplots,"hInvMassDilFineBin "+cutName + Nplots,250,0,500);
      hInvMassDilFineBin[cj]->Sumw2();
      hDiJetMass_J0J1[cj] = new TH1D ("hDiJetMass_J0J1_"+nCut + Nplots,"hDiJetMass_J0J1 "+cutName + Nplots,50,0,500);
      hDiJetMass_J0J1[cj]->Sumw2();
      hTriJetMass_J0J1J2[cj] = new TH1D ("hTriJetMass_J0J1J2_"+nCut + Nplots,"M3 "+cutName + Nplots,50,0,500);
      hTriJetMass_J0J1J2[cj]->Sumw2();


      hInvMass3MuTau[cj] = new TH1D ("hInvMass3MuTau_"+nCut + Nplots,"hInvMass3MuTau "+cutName + Nplots,50,0,500);
      hInvMass3MuTau[cj]->Sumw2();
      hInvMass2MuElTau[cj] = new TH1D ("hInvMass2MuElTau_"+nCut + Nplots,"hInvMass2MuElTau "+cutName + Nplots,50,0,500);
      hInvMass2MuElTau[cj]->Sumw2();
      hInvMass2Mu2Tau[cj] = new TH1D ("hInvMass2Mu2Tau_"+nCut + Nplots,"hInvMass2Mu2Tau "+cutName + Nplots,50,0,500);
      hInvMass2Mu2Tau[cj]->Sumw2();

      hInvMass3ElTauFB[cj] = new TH1D ("hInvMass3ElTauFB_"+nCut + Nplots,"hInvMass3ElTauFB "+cutName + Nplots,250,0,500);
      hInvMass3ElTauFB[cj]->Sumw2();
      hInvMass2ElMuTauFB[cj] = new TH1D ("hInvMass2ElMuTauFB_"+nCut + Nplots,"hInvMass2ElMuTauFB "+cutName + Nplots,250,0,500);
      hInvMass2ElMuTauFB[cj]->Sumw2();
      hInvMass2El2TauFB[cj] = new TH1D ("hInvMass2El2TauFB_"+nCut + Nplots,"hInvMass2El2TauFB "+cutName + Nplots,250,0,500);
      hInvMass2El2TauFB[cj]->Sumw2();

        
      hPtDil[cj] = new TH1D ("PtDil_"+nCut + Nplots,"PtDil "+cutName + Nplots,80,0,800);
      hPtDil[cj]->Sumw2();

      hPtDil3MuTau[cj] = new TH1D ("PtDil3MuTau_"+nCut + Nplots,"PtDil3MuTau "+cutName + Nplots,80,0,800);
      hPtDil3MuTau[cj]->Sumw2();

      hPtDil2MuElTau[cj] = new TH1D ("PtDil2MuElTau_"+nCut + Nplots,"PtDil2MuElTau "+cutName + Nplots,80,0,800);
      hPtDil2MuElTau[cj]->Sumw2();

      hPtDil2Mu2Tau[cj] = new TH1D ("PtDil2Mu2Tau_"+nCut + Nplots,"PtDil2Mu2Tau "+cutName + Nplots,80,0,800);
      hPtDil2Mu2Tau[cj]->Sumw2();


      hPtDil3ElTau[cj] = new TH1D ("PtDil3ElTau_"+nCut + Nplots,"PtDil3ElTau "+cutName + Nplots,80,0,800);
      hPtDil3ElTau[cj]->Sumw2();

      hPtDil2ElMuTau[cj] = new TH1D ("PtDil2ElMuTau_"+nCut + Nplots,"PtDil2ElMuTau "+cutName + Nplots,80,0,800);
      hPtDil2ElMuTau[cj]->Sumw2();

      hPtDil2El2Tau[cj] = new TH1D ("PtDil2El2Tau_"+nCut + Nplots,"PtDil2El2Tau "+cutName + Nplots,80,0,800);
      hPtDil2El2Tau[cj]->Sumw2();




        hBDTmutau_Stau150[cj] = new TH1D ("BDTmutau_Stau150_" + nCut + Nplots, "BDTmutau_Stau150 "+cutName + Nplots,nbinsBDTmutau_Stau150,binsBDTmutau_Stau150);
        hBDTmutau_Stau150[cj]->Sumw2();
        

        hBDTmutau_Stau200[cj] = new TH1D ("BDTmutau_Stau200_"+nCut + Nplots,"BDTmutau_Stau200 "+cutName + Nplots,nbinsBDTmutau_Stau200,binsBDTmutau_Stau200);
        hBDTmutau_Stau200[cj]->Sumw2();



        //hBDTmutau_Stau150_LSP50My[cj] = new TH1D ("BDTmutau_Stau150_LSP50My_"+nCut + Nplots,"BDTmutau_Stau150_LSP50My "+cutName + Nplots,nbinsBDTmutau_Stau150_LSP50My,binsBDTmutau_Stau150_LSP50My);
        //hBDTmutau_Stau150_LSP50My[cj]->Sumw2();
        

        //hBDTmutau_Stau200_LSP50My[cj] = new TH1D ("BDTmutau_Stau200_LSP50My_"+nCut + Nplots,"BDTmutau_Stau200_LSP50My "+cutName + Nplots,nbinsBDTmutau_Stau200_LSP50My,binsBDTmutau_Stau200_LSP50My);
        //hBDTmutau_Stau200_LSP50My[cj]->Sumw2();


        //hBDTmutau_Stau200_LSP100My[cj] = new TH1D ("BDTmutau_Stau200_LSP100My_"+nCut + Nplots,"BDTmutau_Stau200_LSP100My "+cutName + Nplots,nbinsBDTmutau_Stau200_LSP100My,binsBDTmutau_Stau200_LSP100My);
        //hBDTmutau_Stau200_LSP100My[cj]->Sumw2();

        hBDTmutau_Stau100[cj] = new TH1D ("BDTmutau_Stau100_"+nCut + Nplots,"BDTmutau_Stau100 "+cutName+ Nplots,nbinsBDTmutau_Stau100,binsBDTmutau_Stau100);
        hBDTmutau_Stau100[cj]->Sumw2();
        
        //hBDTmutau_Stau100_LSP50My[cj] = new TH1D ("BDTmutau_Stau100_LSP50My_"+nCut + Nplots,"BDTmutau_Stau100_LSP50My "+cutName+ Nplots,nbinsBDTmutau_Stau100_LSP50My,binsBDTmutau_Stau100_LSP50My);
        //hBDTmutau_Stau100_LSP50My[cj]->Sumw2();
        
        hBDTeltau_Stau100[cj] = new TH1D ("BDTeltau_Stau100_"+nCut + Nplots,"BDTeltau_Stau100 "+cutName + Nplots,nbinsBDTeltau_Stau100,binsBDTeltau_Stau100);
        hBDTeltau_Stau100[cj]->Sumw2();
        
        //hBDTeltau_Stau100_LSP50My[cj] = new TH1D ("BDTeltau_Stau100_LSP50My_"+nCut + Nplots,"BDTeltau_Stau100_LSP50My "+cutName+ Nplots,nbinsBDTeltau_Stau100_LSP50My,binsBDTeltau_Stau100_LSP50My);
        //hBDTeltau_Stau100_LSP50My[cj]->Sumw2();
        
        hBDTeltau_Stau150[cj] = new TH1D ("BDTeltau_Stau150_"+nCut + Nplots,"BDTeltau_Stau150 "+cutName  + Nplots,nbinsBDTeltau_Stau150,binsBDTeltau_Stau150);
        hBDTeltau_Stau150[cj]->Sumw2();

        hDNNmutau_Stau100[cj] = new TH1D ("DNNmutau_Stau100_"+nCut + Nplots,"DNNmutau_Stau100_ "+cutName  + Nplots,
                                nbinsDNNmutau_Stau100, 0, 1);
        hDNNmutau_Stau100[cj]->Sumw2();

        //hBDTeltau_Stau200_LSP100My[cj] = new TH1D ("BDTeltau_Stau200_LSP100My_"+nCut + Nplots,"BDTeltau_Stau200_LSP100My "+cutName + Nplots,nbinsBDTeltau_Stau200_LSP100My,binsBDTeltau_Stau200_LSP100My);
        //hBDTeltau_Stau200_LSP100My[cj]->Sumw2();

        //hBDTeltau_Stau150_LSP100My[cj] = new TH1D ("BDTeltau_Stau150_LSP100My_"+nCut + Nplots,"BDTeltau_Stau150_LSP100My "+cutName + Nplots,nbinsBDTeltau_Stau150_LSP100My,binsBDTeltau_Stau150_LSP100My);
        //hBDTeltau_Stau150_LSP100My[cj]->Sumw2();

        //hBDTeltau_Stau150_LSP50My[cj] = new TH1D ("BDTeltau_Stau150_LSP50My_"+nCut + Nplots,"BDTeltau_Stau150_LSP50My "+cutName + Nplots,nbinsBDTeltau_Stau150_LSP50My,binsBDTeltau_Stau150_LSP50My);
        //hBDTeltau_Stau150_LSP50My[cj]->Sumw2();

        //hBDTeltau_Stau200_LSP150My[cj] = new TH1D ("BDTeltau_Stau200_LSP150My_"+nCut + Nplots,"BDTeltau_Stau200_LSP150My "+cutName + Nplots,nbinsBDTeltau_Stau200_LSP150My,binsBDTeltau_Stau200_LSP150My);
        //hBDTeltau_Stau200_LSP150My[cj]->Sumw2();

        hBDTeltau_Stau200[cj] = new TH1D ("BDTeltau_Stau200_"+nCut + Nplots,"BDTeltau_Stau200 "+cutName + Nplots,nbinsBDTeltau_Stau200,binsBDTeltau_Stau200);
        hBDTeltau_Stau200[cj]->Sumw2();
        
        //hBDTeltau_Stau200_LSP50My[cj] = new TH1D ("BDTeltau_Stau200_LSP50My_"+nCut + Nplots,"BDTeltau_Stau200_LSP50My "+cutName + Nplots,nbinsBDTeltau_Stau200_LSP50My,binsBDTeltau_Stau200_LSP50My);
        //hBDTeltau_Stau200_LSP50My[cj]->Sumw2();

        //hBDTeltau_Stau300[cj] = new TH1D ("BDTeltau_Stau300_"+nCut + Nplots,"BDTeltau_Stau300 "+cutName + Nplots,nbinsBDTeltau_Stau300,binsBDTeltau_Stau300);
        //hBDTeltau_Stau300[cj]->Sumw2();

        //hBDTeltau_Stau90[cj] = new TH1D ("BDTeltau_Stau90_"+nCut + Nplots,"BDTeltau_Stau90 "+cutName + Nplots,nbinsBDTeltau_Stau90,binsBDTeltau_Stau90);
        //hBDTeltau_Stau90[cj]->Sumw2();
        //hBDTeltau_Stau250[cj] = new TH1D ("BDTeltau_Stau250_"+nCut + Nplots,"BDTeltau_Stau250 "+cutName + Nplots,nbinsBDTeltau_Stau250,binsBDTeltau_Stau250);
        //hBDTeltau_Stau250[cj]->Sumw2();

      //Leptons
      //
      //
          hRatioSum[cj] = new TH1D("RatioSum_"+nCut + Nplots,"RatioSum "+cutName + Nplots,10,0,1);
	  hRatioSum[cj]->Sumw2();
      //Muons
      //
      //
      hLpMu[cj] = new TH1D ("LpMu_"+nCut + Nplots,"Lp  "+cutName + Nplots,40,-3,1.);
      hLpMu[cj]->Sumw2();
      hnMu[cj] = new TH1D ("nMu_"+nCut + Nplots,"nMu "+cutName + Nplots,10,-0.5,9.5);
      hnMu[cj]->Sumw2();
      hMupt[cj] = new TH1D ("MupT_"+nCut + Nplots,"Mu pT "+cutName + Nplots,50,0,500);
      hMupt[cj]->Sumw2();
      hMueta[cj] = new TH1D ("Mueta_"+nCut + Nplots,"Mu eta "+cutName + Nplots,30,-3,3);
      hMueta[cj]->Sumw2();

      hLept1pt[cj] = new TH1D ("Lept1pT_"+nCut + Nplots,"Lept1 pT "+cutName + Nplots,50,0,500);
      hLept1pt[cj]->Sumw2();
      hLept1eta[cj] = new TH1D ("Lept1eta_"+nCut + Nplots,"Lept1 eta "+cutName + Nplots,30,-3,3);
      hLept1eta[cj]->Sumw2();
      hLept2pt[cj] = new TH1D ("Lept2pT_"+nCut + Nplots,"Lept2 pT "+cutName + Nplots,50,0,500);
      hLept2pt[cj]->Sumw2();
      hLept2eta[cj] = new TH1D ("Lept2eta_"+nCut + Nplots,"Lept2 eta "+cutName + Nplots,30,-3,3);
      hLept2eta[cj]->Sumw2();
        
      //Taus
      //
      //
      hnTau[cj] = new TH1D ("nTau_"+nCut + Nplots,"nTau "+cutName + Nplots,10,-0.5,9.5);
      hnTau[cj]->Sumw2();
      hTaupt[cj] = new TH1D ("TaupT_"+nCut + Nplots,"Tau pT "+cutName + Nplots,50,0,500);
      hTaupt[cj]->Sumw2();
      hTaueta[cj] = new TH1D ("Taueta_"+nCut + Nplots,"Tau eta "+cutName + Nplots,30,-3,3);
      hTaueta[cj]->Sumw2();

      hTau1pt[cj] = new TH1D ("Tau1pT_"+nCut + Nplots,"Tau pT 1"+cutName + Nplots,50,0,500);
      hTau1pt[cj]->Sumw2();
      hTau1eta[cj] = new TH1D ("Tau1eta_"+nCut + Nplots,"Tau eta 1"+cutName + Nplots,30,-3,3);
      hTau1eta[cj]->Sumw2();
      hTau2pt[cj] = new TH1D ("Tau2pT_"+nCut + Nplots,"Tau pT 2"+cutName + Nplots,50,0,500);
      hTau2pt[cj]->Sumw2();
      hTau2eta[cj] = new TH1D ("Tau2eta_"+nCut + Nplots,"Tau eta 2"+cutName + Nplots,30,-3,3);
      hTau2eta[cj]->Sumw2();
	

/*
      for (int i=0;i<55;++i){
      fCut.Form("%i",i);
      hMETByBin[cj][i] = new TH1D("METByBin_"+nCut+"_"+fCut,"MET "+cutName + Nplots,nBinsmet,binsmet);
      hMETByBin[cj][i]->Sumw2();
      hMETFBByBin[cj][i] = new TH1D("METFBByBin_"+nCut+"_"+fCut,"METFB "+cutName + Nplots,50,0.,500.);
      hMETFBByBin[cj][i]->Sumw2();
     
      hMt2lesterByBin[cj][i] = new TH1D ("Mt2lesterByBin_"+nCut+"_"+fCut,"Mt2lester "+cutName + Nplots,nBinsMT2lester,binsMT2lester);
      hMt2lesterByBin[cj][i] ->Sumw2();
      hMt2lesterFBByBin[cj][i] = new TH1D ("Mt2lesterFBByBin_"+nCut+"_"+fCut,"Mt2lester "+cutName + Nplots,50,0,500);
      hMt2lesterFBByBin[cj][i]->Sumw2();
      
      hMuptByBin[cj][i] = new TH1D ("MupTByBin_"+nCut+"_"+fCut,"Mu pT "+cutName + Nplots,50,0,500);
      hMuptByBin[cj][i]->Sumw2();
      hMuetaByBin[cj][i] = new TH1D ("MuetaByBin_"+nCut+"_"+fCut,"Mu eta "+cutName + Nplots,30,-3,3);
      hMuetaByBin[cj][i]->Sumw2();

      hTauptByBin[cj][i] = new TH1D ("TaupTByBin_"+nCut+"_"+fCut,"Tau pT "+cutName + Nplots,50,0,500);
      hTauptByBin[cj][i]->Sumw2();
      hTauetaByBin[cj][i] = new TH1D ("TauetaByBin_"+nCut+"_"+fCut,"Tau eta "+cutName + Nplots,30,-3,3);
      hTauetaByBin[cj][i]->Sumw2();
      
      hDZetaByBin[cj][i] = new TH1D("hDZetaByBin_"+nCut+"_"+fCut,"hDZeta "+cutName + Nplots,60,-400,200);
      hDZetaByBin[cj][i]->Sumw2();
      hDZetaFBByBin[cj][i] = new TH1D("hDZetaFBByBin_"+nCut+"_"+fCut,"hDZeta "+cutName + Nplots,nBinsDZeta,binsDZeta);
      hDZetaFBByBin[cj][i]->Sumw2();

      hnJetByBin[cj][i] = new TH1D ("nJetByBin_"+nCut+"_"+fCut,"nJet "+cutName + Nplots, 25,-0.5,24.5);
      hnJetByBin[cj][i]->Sumw2();


      hElptByBin[cj][i] = new TH1D ("ElpTByBin_"+nCut+"_"+fCut,"El pT "+cutName + Nplots,50,0,500);
      hElptByBin[cj][i]->Sumw2();
      hEletaByBin[cj][i] = new TH1D ("EletaByBin_"+nCut+"_"+fCut,"El eta "+cutName + Nplots,30,-3,3);
      hEletaByBin[cj][i]->Sumw2();






      }

*/









      //hnOver[cj] = new TH1D ("nOver_"+nCut + Nplots,"nOver "+cutName + Nplots,2,0,2);
      //Electrons
      //
      //
      hnEl[cj] = new TH1D ("nEl_"+nCut + Nplots,"nEl "+cutName + Nplots,10,-0.5,9.5);
      hnEl[cj]->Sumw2();
      hElpt[cj] = new TH1D ("ElpT_"+nCut + Nplots,"El pT "+cutName + Nplots,50,0,500);
      hElpt[cj]->Sumw2();
      hEleta[cj] = new TH1D ("Eleta_"+nCut + Nplots,"El eta "+cutName + Nplots,30,-3,3);
      hEleta[cj]->Sumw2();
       
      hIsoMu[cj] = new TH1D ("IsoMu_"+nCut + Nplots,"Mu Iso "+cutName + Nplots,100,0,5);
      hIsoMu[cj]->Sumw2();
      hIsoMuFB[cj] = new TH1D ("IsoMuFB_"+nCut + Nplots,"Mu Iso "+cutName + Nplots,20,0,0.3);
      hIsoMuFB[cj]->Sumw2();
      hIsoLept1[cj] = new TH1D ("IsoLept1_"+nCut + Nplots,"Lept1 Iso "+cutName + Nplots,100,0,5);
      hIsoLept1[cj]->Sumw2();
      hIsoLept2[cj] = new TH1D ("IsoLept2_"+nCut + Nplots,"Lept2 Iso "+cutName + Nplots,100,0,5);
      hIsoLept2[cj]->Sumw2();
      hIsoEl[cj] = new TH1D ("IsoEl_"+nCut + Nplots,"El Iso "+cutName + Nplots,100,0,5);
      hIsoEl[cj]->Sumw2();
      hIsoTau[cj] = new TH1D ("IsoTau_"+nCut + Nplots,"Tau Iso "+cutName + Nplots,100,0,5);
      hIsoTau[cj]->Sumw2();
      hIsoTau1[cj] = new TH1D ("IsoTau1_"+nCut + Nplots,"Tau Iso 1"+cutName + Nplots,100,0,5);
      hIsoTau1[cj]->Sumw2();
      hIsoTau2[cj] = new TH1D ("IsoTau2_"+nCut + Nplots,"Tau Iso 2"+cutName + Nplots,100,0,5);
      hIsoTau2[cj]->Sumw2();
       
      hMETFB[cj] = new TH1D("METFB_"+nCut + Nplots,"METFB "+cutName + Nplots,50,0.,500.);
      hMETFB[cj]->Sumw2();
      hGenMETFB[cj] = new TH1D("GenMETFB_"+nCut + Nplots,"GenMETFB "+cutName + Nplots,50,0.,500.);
      hGenMETFB[cj]->Sumw2();


   
	
for (int i=0;i<FakeList.size();++i){

      TString FakeName=FakeList.at(i).c_str();
 //     TString FakeName="cat";

      fCut.Form("%i",i);
      hMETFake[cj][i] = new TH1D("METFake_"+nCut+"_"+fCut,"MET "+FakeName,50,0.,500.);
      hMETFake[cj][i]->Sumw2();
     
      hMt2lesterFake[cj][i] = new TH1D ("Mt2lestermutauFake_"+nCut+"_"+fCut,"Mt2lestermutau "+FakeName,nBinsMT2lester,binsMT2lester);
      hMt2lesterFake[cj][i] ->Sumw2();
      
      hMuptFake[cj][i] = new TH1D ("MupTFake_"+nCut+"_"+fCut,"Mu pT "+FakeName,50,0,500);
      hMuptFake[cj][i]->Sumw2();
      hMuetaFake[cj][i] = new TH1D ("MuetaFake_"+nCut+"_"+fCut,"Mu eta "+FakeName,30,-3,3);
      hMuetaFake[cj][i]->Sumw2();

      hTauptFake[cj][i] = new TH1D ("TaupTFake_"+nCut+"_"+fCut,"Tau pT "+FakeName,50,0,500);
      hTauptFake[cj][i]->Sumw2();
      hTauetaFake[cj][i] = new TH1D ("TauetaFake_"+nCut+"_"+fCut,"Tau eta "+FakeName,30,-3,3);
      hTauetaFake[cj][i]->Sumw2();

      hIsoMuFake[cj][i] = new TH1D ("IsoMuFake_"+nCut+"_"+fCut,"IsoMu "+FakeName,50,0,5);
      hIsoMuFake[cj][i]->Sumw2();

      hIsoTauFake[cj][i] = new TH1D ("IsoTauFake_"+nCut+"_"+fCut,"IsoTau "+FakeName,25,0,1);
      hIsoTauFake[cj][i]->Sumw2();
      
      hDZetaFake[cj][i] = new TH1D("hDZetaFake_"+nCut+"_"+fCut,"hDZeta"+FakeName,60,-400,200);
      hDZetaFake[cj][i]->Sumw2();

      hnJetFake[cj][i] = new TH1D ("nJetFake_"+nCut+"_"+fCut,"nJet "+FakeName, 25,-0.5,24.5);
      hnJetFake[cj][i]->Sumw2();
	}

      //dPhi
      //
      //
      hMETphi[cj] = new TH1D("METphi_"+nCut + Nplots,"METphi "+cutName + Nplots,64,-3.2,3.2);
      hMETphi[cj]->Sumw2();

      hdEtaDil[cj] = new TH1D("dEtaDil_"+nCut + Nplots,"dEtaDil "+cutName + Nplots,100,-10.,10);
      hdEtaDil[cj]->Sumw2();
      hdEtaJ0J1[cj] = new TH1D("dEtaJ0J1_"+nCut + Nplots,"dEtaJ0J1 "+cutName + Nplots,100,-10.,10);
      hdEtaJ0J1[cj]->Sumw2();
      hdEtaMuMET[cj] = new TH1D("dEtaMuMET_"+nCut + Nplots,"dEtaMuMET "+cutName + Nplots,100,-10.,10);
      hdEtaMuMET[cj]->Sumw2();
      hdEtaElMET[cj] = new TH1D("dEtaElMET_"+nCut + Nplots,"dEtaElMET "+cutName + Nplots,100,-10.,10);
      hdEtaElMET[cj]->Sumw2();
      hdEtaDilMET[cj] = new TH1D("dEtaDilMET_"+nCut + Nplots,"dEtaDilMET "+cutName + Nplots,100,-10.,10);
      hdEtaDilMET[cj]->Sumw2();
      hdEtaJ0Mu[cj] = new TH1D("dEtaJ0Mu_"+nCut + Nplots,"dEtaJ0Mu "+cutName + Nplots,100,-10.,10);
      hdEtaJ0Mu[cj]->Sumw2();
      hdEtaJ0El[cj] = new TH1D("dEtaJ0El_"+nCut + Nplots,"dEtaJ0El "+cutName + Nplots,100,-10.,10);
      hdEtaJ0El[cj]->Sumw2();
      hdEtaJ0Tau[cj] = new TH1D("dEtaJ0Tau_"+nCut + Nplots,"dEtaJ0Tau "+cutName + Nplots,100,-10.,10);
      hdEtaJ0Tau[cj]->Sumw2();
    
TH1D *hdEtaLeptMET[CutN];
TH1D *hdEtaTauMET[CutN];





      hCosbl[cj] = new TH1D("Cosbl_"+nCut + Nplots,"hCosbl "+cutName + Nplots,24,-1.2,1.2);
      hCosbl[cj]->Sumw2();

      hdPhiDil[cj] = new TH1D("dPhiDil_"+nCut + Nplots,"dPhiDil "+cutName + Nplots,64,-3.2,3.2);
      hdPhiDil[cj]->Sumw2();
      hdPhiJ0Lept1[cj] = new TH1D("dPhiJ0Lept1_"+nCut + Nplots,"dPhiJ0Lept1 "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ0Lept1[cj]->Sumw2();
      hdPhiJ0Lept2[cj] = new TH1D("dPhiJ0Lept2_"+nCut + Nplots,"dPhiJ0Lept2 "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ0Lept2[cj]->Sumw2();

    
      hdPhiJMET[cj] = new TH1D("dPhiJMET_"+nCut + Nplots,"dPhiJMET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJMET[cj]->Sumw2();
      hdPhiJ0MET[cj] = new TH1D("dPhiJ0MET_"+nCut + Nplots,"dPhiJ0MET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ0MET[cj]->Sumw2();
      hdPhiMinJMET[cj] = new TH1D("dPhiMinJMET_"+nCut + Nplots,"dPhiMinJMET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiMinJMET[cj]->Sumw2();

      hCosdPhiJ0MET[cj] = new TH1D("CosdPhiJ0MET_"+nCut + Nplots,"CosdPhiJ0MET "+cutName + Nplots,20,-1,1);
      hCosdPhiJ0MET[cj]->Sumw2();

      hdPhiJ0J1[cj] = new TH1D("dPhiJ0J1_"+nCut + Nplots,"dPhiJ0J1 "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ0J1[cj]->Sumw2();
      hdPhiJ1MET[cj] = new TH1D("dPhiJ1MET_"+nCut + Nplots,"dPhiJ1MET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ1MET[cj]->Sumw2();
      hdPhiJ2MET[cj] = new TH1D("dPhiJ2MET_"+nCut + Nplots,"dPhiJ2MET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ2MET[cj]->Sumw2();
      hdPhiJ3MET[cj] = new TH1D("dPhiJ3MET_"+nCut + Nplots,"dPhiJ3MET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ3MET[cj]->Sumw2();

      hdPhiJ0Tau[cj] = new TH1D("dPhiJ0Tau_"+nCut + Nplots,"dPhiJ0Tau "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ0Tau[cj]->Sumw2();
      hdPhiJ0Mu[cj] = new TH1D("dPhiJ0Mu_"+nCut + Nplots,"dPhiJ0Mu "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ0Mu[cj]->Sumw2();
      hdPhiJ0El[cj] = new TH1D("dPhiJ0El_"+nCut + Nplots,"dPhiJ0El "+cutName + Nplots,64,-3.2,3.2);
      hdPhiJ0El[cj]->Sumw2();

      hdPhiMuMET[cj] = new TH1D("dPhiMuMET_"+nCut + Nplots,"dPhiMuMET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiMuMET[cj]->Sumw2();

      hdPhiLept1MET[cj] = new TH1D("dPhiLept1MET_"+nCut + Nplots,"dPhiLept1MET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiLept1MET[cj]->Sumw2();
      hdPhiLept2MET[cj] = new TH1D("dPhiLept2MET_"+nCut + Nplots,"dPhiLept2MET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiLept2MET[cj]->Sumw2();

      hdPhiElMET[cj] = new TH1D("dPhiElMET_"+nCut + Nplots,"dPhiElMET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiElMET[cj]->Sumw2();
   
      hdPhiTauMET[cj] = new TH1D("dPhiTauMET_"+nCut + Nplots,"dPhiTauMET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiTauMET[cj]->Sumw2();
      hdPhiTau1MET[cj] = new TH1D("dPhiTau1MET_"+nCut + Nplots,"dPhiTauMET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiTau1MET[cj]->Sumw2();
      hdPhiTau2MET[cj] = new TH1D("dPhiTau2MET_"+nCut + Nplots,"dPhiTauMET "+cutName + Nplots,64,-3.2,3.2);
      hdPhiTau2MET[cj]->Sumw2();
   
      //MT
      //
      //
      hMTsum[cj] = new TH1D ("MTsum_"+nCut + Nplots,"MTsum "+cutName + Nplots,50,0,500);
      hMTsum[cj]->Sumw2();
      hMTtot[cj] = new TH1D ("MTtot_"+nCut + Nplots,"MTtot "+cutName + Nplots,50,0,500);
      hMTtot[cj]->Sumw2();
      hMT[cj] = new TH1D ("MT_"+nCut + Nplots,"MT "+cutName + Nplots,50,0,500);
      hMT[cj]->Sumw2();
      hMTel[cj] = new TH1D ("MTel_"+nCut + Nplots,"MTel "+cutName + Nplots,50,0,500);
      hMTel[cj]->Sumw2();
      hMT2blmu[cj] = new TH1D ("MT2blmu_"+nCut + Nplots,"MT2blmu "+cutName + Nplots,50,0,500);
      hMT2blmu[cj]->Sumw2();
      hMT2blmuFineBin[cj] = new TH1D ("MT2blmuFB_"+nCut + Nplots,"MT2blmu "+cutName + Nplots,100,0,500);
      hMT2blmuFineBin[cj]->Sumw2();
      hMTmu[cj] = new TH1D ("MTmu_"+nCut + Nplots,"MTmu "+cutName + Nplots,50,0,500);
      hMTmu[cj]->Sumw2();
      hMTmuFineBin[cj] = new TH1D ("MTmuFB_"+nCut + Nplots,"MTmu "+cutName + Nplots,100,0,500);
      hMTmuFineBin[cj]->Sumw2();
      hMTmub[cj] = new TH1D ("MTmub_"+nCut + Nplots,"MTbmu "+cutName + Nplots,50,0,500);
      hMTmub[cj]->Sumw2();
      hMTmubFineBin[cj] = new TH1D ("MTmubFB_"+nCut + Nplots,"MTbmu "+cutName + Nplots,100,0,500);
      hMTmubFineBin[cj]->Sumw2();

      hMTmax[cj] = new TH1D ("MTmax_"+nCut + Nplots,"MTmax "+cutName + Nplots,50,0,500);
      hMTmax[cj]->Sumw2();
      hMTmin[cj] = new TH1D ("MTmin_"+nCut + Nplots,"MTmin "+cutName + Nplots,50,0,500);
      hMTmin[cj]->Sumw2();

      hMTtau[cj] = new TH1D ("MTtau_"+nCut + Nplots,"MTtau "+cutName + Nplots,50,0,500);
      hMTtau[cj]->Sumw2();

      hMTmutau[cj] = new TH1D ("MTmutau_"+nCut + Nplots,"MTmutau "+cutName + Nplots,50,0,500);
      hMTmutau[cj]->Sumw2();

      hMTdiff[cj] = new TH1D ("MTdiff_"+nCut + Nplots,"MTdiff "+cutName + Nplots,50,-200,200);
      hMTdiff[cj]->Sumw2();
     
      hMTmuel[cj] = new TH1D ("MTmuel_"+nCut + Nplots,"MTmuel "+cutName + Nplots,50,0,500);
      hMTmuel[cj]->Sumw2();
       
      hMTeltau[cj] = new TH1D ("MTeltau_"+nCut + Nplots,"MTeltau "+cutName + Nplots,50,0,500);
      hMTeltau[cj]->Sumw2();
      
      hMTtautau[cj] = new TH1D ("MTtautau_"+nCut + Nplots,"MTtautau "+cutName + Nplots,200,0,1000);
      hMTtautau[cj]->Sumw2();


      hMTDil[cj] = new TH1D ("MTDil_"+nCut + Nplots,"MTDil "+cutName + Nplots,50,0,500);
      hMTDil[cj]->Sumw2();
      hMTlept1[cj] = new TH1D ("MTlept1_"+nCut + Nplots,"MTlept1 "+cutName + Nplots,50,0,500);
      hMTlept1[cj]->Sumw2();
      hMTlept2[cj] = new TH1D ("MTlept2_"+nCut + Nplots,"MTlept2 "+cutName + Nplots,50,0,500);
      hMTlept2[cj]->Sumw2();






      hMt2[cj] = new TH1D ("Mt2_"+nCut + Nplots,"Mt2 "+cutName + Nplots,200,0,1000);
      hMt2[cj]->Sumw2();
      hMt2mutau[cj] = new TH1D ("Mt2mutau_"+nCut + Nplots,"Mt2mutau "+cutName + Nplots,200,0,1000);
      hMt2mutau[cj]->Sumw2();
     /*
      hprofMt2vsDZeta[cj]  = new TProfile("hprofMt2vsDZeta_"+nCut + Nplots,"hprof "+cutName + Nplots,nBinsMT2lester,binsMT2lester);
      hprofMt2vsMET[cj]  = new TProfile("hprofMt2vsMET_"+nCut + Nplots,"hprof "+cutName + Nplots,nBinsMT2lester,binsMT2lester);
      hprofMETvsMt2[cj]  = new TProfile("hprofMETvsMt2_"+nCut + Nplots,"hprof "+cutName + Nplots,nBinsmet,binsmet);
      hprofMETvsDZeta[cj]  = new TProfile("hprofMETvsDZeta_"+nCut + Nplots,"hprof "+cutName + Nplots,nBinsmet,binsmet);
      hprofDZetavsMET[cj]  = new TProfile("hprofMETvsMET_"+nCut + Nplots,"hprof "+cutName + Nplots,nBinsDZeta,binsDZeta);
      hprofDZetavsMt2[cj]  = new TProfile("hprofMETvsMt2_"+nCut + Nplots,"hprof "+cutName + Nplots,nBinsDZeta,binsDZeta);
      */
      hTopMod[cj] = new TH1D ("TopMod_"+nCut + Nplots,"TopMod "+cutName + Nplots,30,-15,15);
      hTopMod[cj]->Sumw2();

      hTopMod1L[cj] = new TH1D ("TopMod1L_"+nCut + Nplots,"TopMod1L "+cutName + Nplots,30,-15,15);
      hTopMod1L[cj]->Sumw2();

      hMT2W[cj] = new TH1D ("MT2W_"+nCut + Nplots,"MT2W "+cutName + Nplots,nBinsMT,binsMT);
      hMT2W[cj]->Sumw2();

      hMT2WFB[cj] = new TH1D ("MT2WFB_"+nCut + Nplots,"MT2WFB "+cutName + Nplots,50,0,500);
      hMT2WFB[cj]->Sumw2();

      hMt2lestermutau[cj] = new TH1D ("Mt2lestermutau_"+nCut + Nplots,"Mt2lestermutau "+cutName + Nplots,nBinsMT2lester,binsMT2lester);
      //hMt2lestermutau[cj] = new TH1D ("Mt2lestermutau_"+nCut + Nplots,"Mt2lestermutau "+cutName + Nplots,50,0,500);
      hMt2lestermutau[cj]->Sumw2();

      hMt2LowDzeta[cj] = new TH1D ("Mt2lestermutauLowDzeta_"+nCut + Nplots,"Mt2lestermutauLowDzeta "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2LowDzeta[cj]->Sumw2();
      hMt2MiddleDzeta[cj] = new TH1D ("Mt2lestermutauMiddleDzeta_"+nCut + Nplots,"Mt2lestermutauMiddleDzeta "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2MiddleDzeta[cj]->Sumw2();
      hMt2HighDzeta[cj] = new TH1D ("Mt2lestermutauHighDzeta_"+nCut + Nplots,"Mt2lestermutauHighDzeta "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2HighDzeta[cj]->Sumw2();
    
      hMt2HighDzetaHighMET[cj] = new TH1D ("Mt2HighDzetaHighMET_"+nCut + Nplots,"Mt2HighDzetaHighMET "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2HighDzetaLowMET[cj] = new TH1D ("Mt2HighDzetaLowMET_"+nCut + Nplots,"Mt2HighDzetaLowMET "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2HighDzetaMiddleMET[cj] = new TH1D ("Mt2HighDzetaMiddleMET_"+nCut + Nplots,"Mt2HighDzetaMiddleMET "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2HighDzetaHighMET[cj]->Sumw2();
      hMt2HighDzetaLowMET[cj]->Sumw2();
      hMt2HighDzetaMiddleMET[cj]->Sumw2();

      hMETHighDzetaHighMt2[cj] = new TH1D ("METHighDzetaHighMt2_"+nCut + Nplots,"METHighDzetaHighMt2 "+cutName + Nplots,nBinsmet,binsmett);
      hMETHighDzetaLowMt2[cj] = new TH1D ("METHighDzetaLowMt2_"+nCut + Nplots,"METHighDzetaLowMt2 "+cutName + Nplots,nBinsmet,binsmett);
      hMETHighDzetaMiddleMt2[cj] = new TH1D ("METHighDzetaMiddleMt2_"+nCut + Nplots,"METHighDzetaMiddleMt2 "+cutName + Nplots,nBinsmet,binsmett);
      hMETHighDzetaHighMt2[cj]->Sumw2();
      hMETHighDzetaLowMt2[cj]->Sumw2();
      hMETHighDzetaMiddleMt2[cj]->Sumw2();


      hMt2LowDzetaHighMET[cj] = new TH1D ("Mt2LowDzetaHighMET_"+nCut + Nplots,"Mt2LowDzetaHighMET "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2LowDzetaLowMET[cj] = new TH1D ("Mt2LowDzetaLowMET_"+nCut + Nplots,"Mt2LowDzetaLowMET "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2LowDzetaMiddleMET[cj] = new TH1D ("Mt2LowDzetaMiddleMET_"+nCut + Nplots,"Mt2LowDzetaMiddleMET "+cutName + Nplots,nBinsMT2lester,binsMT2lesterr);
      hMt2LowDzetaHighMET[cj]->Sumw2();
      hMt2LowDzetaLowMET[cj]->Sumw2();
      hMt2LowDzetaMiddleMET[cj]->Sumw2();

      hMETLowDzetaHighMt2[cj] = new TH1D ("METLowDzetaHighMt2_"+nCut + Nplots,"METLowDzetaHighMt2 "+cutName + Nplots,nBinsmet,binsmett);
      hMETLowDzetaLowMt2[cj] = new TH1D ("METLowDzetaLowMt2_"+nCut + Nplots,"METLowDzetaLowMt2 "+cutName + Nplots,nBinsmet,binsmett);
      hMETLowDzetaMiddleMt2[cj] = new TH1D ("METLowDzetaMiddleMt2_"+nCut + Nplots,"METLowDzetaMiddleMt2 "+cutName + Nplots,nBinsmet,binsmett);
      hMETLowDzetaHighMt2[cj]->Sumw2();
      hMETLowDzetaLowMt2[cj]->Sumw2();
      hMETLowDzetaMiddleMt2[cj]->Sumw2();



      hMt2lestermutauFB[cj] = new TH1D ("Mt2lestermutauFB_"+nCut + Nplots,"Mt2lestermutau "+cutName + Nplots,50,0,500);
      hMt2lestermutauFB[cj]->Sumw2();
      hMt2lestereltauFB[cj] = new TH1D ("Mt2lestereltauFB_"+nCut + Nplots,"Mt2lestereltau "+cutName + Nplots,50,0,500);
      hMt2lestereltauFB[cj]->Sumw2();
      hMt2lestermuelFB[cj] = new TH1D ("Mt2lestermuelFB_"+nCut + Nplots,"Mt2lestermuel "+cutName + Nplots,50,0,500);
      hMt2lestermuelFB[cj]->Sumw2();


      hMET[cj] = new TH1D("MET_"+nCut + Nplots,"MET "+cutName + Nplots,nBinsmet,binsmet);
      hMET[cj]->Sumw2();

      hMETLowDzeta[cj] = new TH1D("METLowDzeta_"+nCut + Nplots,"METLowDzeta "+cutName + Nplots,nBinsmet,binsmett);
      hMETLowDzeta[cj]->Sumw2();

      hMETMiddleDzeta[cj] = new TH1D("METMiddleDzeta_"+nCut + Nplots,"METMiddleDzeta "+cutName + Nplots,nBinsmet,binsmett);
      hMETMiddleDzeta[cj]->Sumw2();

      hMETHighDzeta[cj] = new TH1D("METHighDzeta_"+nCut + Nplots,"METHighDzeta "+cutName + Nplots,nBinsmet,binsmett);
      hMETHighDzeta[cj]->Sumw2();

      hMCTcor[cj] = new TH1D ("MCTcor_"+nCut + Nplots,"MCTcor "+cutName + Nplots,50,0,500);
      hMCTcor[cj]->Sumw2();
      hMCTmutau[cj] = new TH1D ("MCTmutau_"+nCut + Nplots,"MCTmutau "+cutName + Nplots,50,0,500);
      hMCTmutau[cj]->Sumw2();
      hMCTxmutau[cj] = new TH1D ("MCTxmutau_"+nCut + Nplots,"MCTxmutau "+cutName + Nplots,50,0,500);
      hMCTxmutau[cj]->Sumw2();
      hMCTymutau[cj] = new TH1D ("MCTymutau_"+nCut + Nplots,"MCTymutau "+cutName + Nplots,50,0,500);
      hMCTymutau[cj]->Sumw2();
      
      hMCTbmutau[cj] = new TH1D ("MCTbmutau_"+nCut + Nplots,"MCTbmutau "+cutName + Nplots,50,0,500);
      hMCTbmutau[cj]->Sumw2();

      hMt2muel[cj] = new TH1D ("Mt2muel_"+nCut + Nplots,"Mt2muel "+cutName + Nplots,200,0,1000);
      hMt2muel[cj]->Sumw2();
      

      hMt2lesterDil[cj] = new TH1D ("Mt2lesterDil_"+nCut + Nplots,"Mt2lesterDil "+cutName + Nplots,nBinsMT2lester,binsMT2lester);
      hMt2lesterDil[cj]->Sumw2();

      hMt2lesterDilFB[cj] = new TH1D ("hMt2lesterDilFB_"+nCut + Nplots,"Mt2lesterDilFB "+cutName + Nplots,50,0,500);
      hMt2lesterDilFB[cj]->Sumw2();

      hMCTDil[cj] = new TH1D ("MCTDil_"+nCut + Nplots,"MCTDil "+cutName + Nplots,50,0,500);
      hMCTDil[cj]->Sumw2();
      
      hMCTbDil[cj] = new TH1D ("MCTbDil_"+nCut + Nplots,"MCTbDil "+cutName + Nplots,50,0,500);
      hMCTbDil[cj]->Sumw2();

      hMt2Dil[cj] = new TH1D ("Mt2Dil_"+nCut + Nplots,"Mt2Dil "+cutName + Nplots,200,0,1000);
      hMt2Dil[cj]->Sumw2();




      hMt2lestermuel[cj] = new TH1D ("Mt2lestermuel_"+nCut + Nplots,"Mt2lestermuel "+cutName + Nplots,nBinsMT2lester,binsMT2lester);
      hMt2lestermuel[cj]->Sumw2();

      hMCTmuel[cj] = new TH1D ("MCTmuel_"+nCut + Nplots,"MCTmuel "+cutName + Nplots,50,0,500);
      hMCTmuel[cj]->Sumw2();
      hMCTxmuel[cj] = new TH1D ("MCTxmuel_"+nCut + Nplots,"MCTxmuel "+cutName + Nplots,50,0,500);
      hMCTxmuel[cj]->Sumw2();
      hMCTymuel[cj] = new TH1D ("MCTymuel_"+nCut + Nplots,"MCTymuel "+cutName + Nplots,50,0,500);
      hMCTymuel[cj]->Sumw2();
      
      hMCTbmuel[cj] = new TH1D ("MCTbmuel_"+nCut + Nplots,"MCTbmuel "+cutName + Nplots,50,0,500);
      hMCTbmuel[cj]->Sumw2();



      hMTBoundmutau[cj] = new TH1D ("MTBoundmutau_"+nCut + Nplots,"MTBoundmutau "+cutName + Nplots,50,0,500);
      hMTBoundmutau[cj] ->Sumw2();
      hMTTruemutau[cj] = new TH1D ("MTTruemutau_"+nCut + Nplots,"MTTruemutau "+cutName + Nplots,80,0,800);
      hMTTruemutau[cj] ->Sumw2();
      hMt2eltau[cj] = new TH1D ("Mt2eltau_"+nCut + Nplots,"Mt2eltau "+cutName + Nplots,50,0,500);
      hMt2eltau[cj]->Sumw2();
      hMt2lestereltau[cj] = new TH1D ("Mt2lestereltau_"+nCut + Nplots,"Mt2lestereltau "+cutName + Nplots,nBinsMT2lester,binsMT2lester);
      hMt2lestereltau[cj]->Sumw2();
 
      hMCTeltau[cj] = new TH1D ("MCTeltau_"+nCut + Nplots,"MCTeltau "+cutName + Nplots,50,0,500);
      hMCTeltau[cj]->Sumw2();
      hMCTxeltau[cj] = new TH1D ("MCTxeltau_"+nCut + Nplots,"MCTxeltau "+cutName + Nplots,50,0,500);
      hMCTxeltau[cj]->Sumw2();
      hMCTyeltau[cj] = new TH1D ("MCTyeltau_"+nCut + Nplots,"MCTyeltau "+cutName + Nplots,50,0,500);
      hMCTyeltau[cj]->Sumw2();
      
      hMCTbeltau[cj] = new TH1D ("MCTbeltau_"+nCut + Nplots,"MCTbeltau "+cutName + Nplots,50,0,500);
      hMCTbeltau[cj]->Sumw2();

      hdR_BottomLepton[cj]= new TH1D ("dR_BottomLepton_"+nCut + Nplots,"dR_BottomLepton "+cutName + Nplots,60,0,6);;
      hdR_BottomLepton[cj]->Sumw2();
 
      hdR_eltau[cj]= new TH1D ("dR_eltau_"+nCut + Nplots,"dR_eltau "+cutName + Nplots,60,0,6);;
      hdR_eltau[cj]->Sumw2();
        
      hdR_mutau[cj]= new TH1D ("dR_mutau_"+nCut + Nplots,"dR_mutau "+cutName + Nplots,60,0,6);;
      hdR_mutau[cj]->Sumw2();

      hdR_taujet[cj]= new TH1D ("dR_taujet_"+nCut + Nplots,"dR_taujet "+cutName + Nplots,60,0,6);;
      hdR_taujet[cj]->Sumw2();

      hdR_tautau[cj]= new TH1D ("dR_tautau_"+nCut + Nplots,"dR_tautau "+cutName + Nplots,60,0,6);;
      hdR_tautau[cj]->Sumw2();
	
      hdR_muel[cj]= new TH1D ("dR_muel_"+nCut + Nplots,"dR_muel "+cutName + Nplots,60,0,6);;
      hdR_muel[cj]->Sumw2();
      hdR_Dil[cj]= new TH1D ("dR_Dil_"+nCut + Nplots,"dR_Dil "+cutName + Nplots,60,0,6);;
      hdR_Dil[cj]->Sumw2();

      hnpv[cj]= new TH1D ("npv_"+nCut + Nplots,"npv "+cutName + Nplots,100,-0.5,99.5);;
      hnpv[cj]->Sumw2();
      hnpu[cj]= new TH1D ("npu_"+nCut + Nplots,"npu "+cutName + Nplots,100,-0.5,99.5);;
      hnpu[cj]->Sumw2();
      hnrho[cj]= new TH1D ("nrho_"+nCut + Nplots,"nrho "+cutName + Nplots,100,-0.5,99.5);;
/////////////////////////////////////////1D histos
//
//
      
      hmet_MT2lester_DZeta_01J1D[cj]= new TH1D ("met_MT2lester_DZeta01J1D_"+nCut + Nplots,"met_MT2lester_DZeta01J1D "+cutName + Nplots,51,0.5,51.5);;
      hmet_MT2lester_DZeta_01J1D[cj]->Sumw2();

      hmet_MT2lester1D[cj]= new TH1D ("met_MT2lester1D_"+nCut + Nplots,"met_MT2lester1D "+cutName + Nplots,6,0.5,6.5);;
      hmet_MT2lester1D[cj]->Sumw2();

      hmet_MT2lester[cj]= new TH1D ("met_MT2lester_"+nCut + Nplots,"met_MT2lester "+cutName + Nplots,18,0.5,18.5);;
      hmet_MT2lester[cj]->Sumw2();

      hmet_DZeta1D[cj]= new TH1D ("met_DZeta1D_"+nCut + Nplots,"met_DZeta1D "+cutName + Nplots,6,0.5,6.5);;
      hmet_DZeta1D[cj]->Sumw2();
      
      hMT2lester_DZeta1D[cj]= new TH1D ("MT2lester_DZeta1D_"+nCut + Nplots,"MT2lester_DZeta1D "+cutName + Nplots,6,0.5,6.5);;
      hMT2lester_DZeta1D[cj]->Sumw2();
 

/*
  int nBinsTauPt = 4;
   double binsTauPt[5] = {0, 40, 80,120,1000};

   int nBinsmet = 4;
   double binsmet[5] = {0, 40, 80,120,1000};

   int nBinsMTsum = 4;
   double binsMTsum[5] = {0, 40,120,260,1000};

   int nBinsMTtot = 4;
   double binsMTtot[5] = {0, 40,120,200,1000};

   int nBinsMCTb = 3;
   double binsMCTb[4] = {0, 50,100,1000};

   int nBinsMT = 4;
   double binsMT[5] = {0, 40,120,160,1000};

   int nBinsDZeta = 4;
   double binsDZeta[5] = {-500, -150,-100,50,1000};

   int nBinsMT2lester = 3;
double binsMT2lester[4] = {0, 40,80,1000};

*/


   //met 
/*
      hmet_DZeta_MT2lester[cj] = new TH3D ("met_DZeta_MT2lester_"+nCut + Nplots,"met_DZeta_MT2lester "+cutName + Nplots, nBinsmet, binsmet ,nBinsDZeta,binsDZeta, nBinsMT2lester,binsMT2lester);
      hmet_DZeta_MT2lester[cj]->Sumw2();
      
      hmet_DZeta_MT2lester0Jets[cj] = new TH3D ("met_DZeta_MT2lester0Jets_"+nCut + Nplots,"met_DZeta_MT2lester 0Jets "+cutName + Nplots, nBinsmet, binsmet ,nBinsDZeta,binsDZeta, nBinsMT2lester,binsMT2lester);
      hmet_DZeta_MT2lester0Jets[cj]->Sumw2();

      hmet_DZeta_MT2lester1Jets[cj] = new TH3D ("met_DZeta_MT2lester1Jets_"+nCut + Nplots,"met_DZeta_MT2lester 1Jets "+cutName + Nplots, nBinsmet, binsmet ,nBinsDZeta,binsDZeta, nBinsMT2lester,binsMT2lester);
      hmet_DZeta_MT2lester1Jets[cj]->Sumw2();
    


      hmet_MT[cj] = new TH2D ("met_MT_"+nCut + Nplots,"met_MT "+cutName + Nplots, nBinsmet, binsmet ,nBinsMT,binsMT);
      hmet_MT[cj]->Sumw2();

      hmet_MTsum[cj] = new TH2D ("met_MTsum_"+nCut + Nplots,"met_MTsum "+cutName + Nplots, nBinsmet, binsmet , nBinsMTsum,binsMTsum);
      hmet_MTsum[cj]->Sumw2();

      hmet_MTtot[cj] = new TH2D ("met_MTtot_"+nCut + Nplots,"met_MTtot "+cutName + Nplots, nBinsmet, binsmet , nBinsMTtot,binsMTtot);
      hmet_MTtot[cj]->Sumw2();

      hmet_MCTb[cj] = new TH2D ("met_MCTb_"+nCut + Nplots,"met_MCTb "+cutName + Nplots, nBinsmet, binsmet , nBinsMCTb,binsMCTb);
      hmet_MCTb[cj] ->Sumw2();



      hmet_MT2lester[cj] = new TH2D ("met_MT2lester_"+nCut + Nplots,"met_MT2lester "+cutName + Nplots, nBinsmet, binsmet , nBinsMT2lester,binsMT2lester);
      hmet_MT2lester[cj] ->Sumw2();

      hmet_TauPt[cj] = new TH2D ("met_TauPt_"+nCut + Nplots,"met_TauPt "+cutName + Nplots, nBinsmet, binsmet ,nBinsTauPt,binsTauPt);
      hmet_TauPt[cj]->Sumw2();
      
      hmet_DZeta[cj] = new TH2D ("met_DZeta_"+nCut + Nplots,"met_DZeta "+cutName + Nplots, nBinsmet, binsmet , nBinsDZeta,binsDZeta);
      hmet_DZeta[cj] -> Sumw2();

      hmet_dR[cj] = new TH2D ("met_dR_"+nCut + Nplots,"met_dR "+cutName + Nplots, nBinsmet, binsmet , nBinsDr,binsDr);
      hmet_dR[cj] -> Sumw2();
     
      hmet_MTDil[cj] = new TH2D ("met_MTDil_"+nCut + Nplots,"met_MTDil "+cutName + Nplots, nBinsmet, binsmet , nBinsMTDil,binsMTDil);
      hmet_MTDil[cj] -> Sumw2();

///////////MT variables
      hMT_MTsum[cj] = new TH2D ("MT_MTsum_"+nCut + Nplots,"MT_MTsum "+cutName + Nplots, nBinsMT,binsMT,nBinsMTsum,binsMTsum);
      hMT_MTsum[cj]->Sumw2();

      hMT_MTtot[cj] = new TH2D ("MT_MTtot_"+nCut + Nplots,"MT_MTtot "+cutName + Nplots, nBinsMT,binsMT,nBinsMTtot,binsMTtot);
      hMT_MTtot[cj]->Sumw2();

      hMT_MCTb[cj] = new TH2D ("MT_MCTb_"+nCut + Nplots,"MT_MCTb "+cutName + Nplots, nBinsMT,binsMT,nBinsMCTb,binsMCTb);
      hMT_MCTb[cj]->Sumw2();

      hMT_MT2lester[cj] = new TH2D ("MT_MT2lester_"+nCut + Nplots,"MT_MT2lester "+cutName + Nplots, nBinsMT,binsMT,nBinsMT2lester,binsMT2lester);
      hMT_MT2lester[cj]->Sumw2();

      hMT_TauPt[cj] = new TH2D ("MT_TauPt_"+nCut + Nplots,"MT_TauPt "+cutName + Nplots, nBinsMT,binsMT,nBinsTauPt,binsTauPt);
      hMT_TauPt[cj]->Sumw2();
      
      hMT_DZeta[cj] = new TH2D ("MT_DZeta_"+nCut + Nplots,"MT_DZeta "+cutName + Nplots, nBinsMT,binsMT,nBinsDZeta,binsDZeta);
      hMT_DZeta[cj]->Sumw2();

      hMT_dR[cj] = new TH2D ("MT_dR_"+nCut + Nplots,"MT_dR "+cutName + Nplots, nBinsMT,binsMT , nBinsDr,binsDr);
      hMT_dR[cj] -> Sumw2();
     
      hMT_MTDil[cj] = new TH2D ("MT_MTDil_"+nCut + Nplots,"MT_MTDil "+cutName + Nplots, nBinsMT,binsMT, nBinsMTDil,binsMTDil);
      hMT_MTDil[cj] -> Sumw2();

/////////////////MTsum
      hMTsum_MTtot[cj] = new TH2D ("MTsum_MTtot_"+nCut + Nplots,"MTsum_MTtot "+cutName + Nplots, nBinsMTsum, binsMTsum , nBinsMTtot,binsMTtot);
      hMTsum_MTtot[cj] ->Sumw2();

      hMTsum_MCTb[cj] = new TH2D ("MTsum_MCTb_"+nCut + Nplots,"MTsum_MCTb "+cutName + Nplots, nBinsMTsum, binsMTsum , nBinsMCTb,binsMCTb);
      hMTsum_MCTb[cj] ->Sumw2();

      hMTsum_MT2lester[cj] = new TH2D ("MTsum_MT2lester_"+nCut + Nplots,"MTsum_MT2lester "+cutName + Nplots, nBinsMTsum, binsMTsum , nBinsMT2lester,binsMT2lester);
      hMTsum_MT2lester[cj] ->Sumw2();


      hMTsum_TauPt[cj] = new TH2D ("MTsum_TauPt_"+nCut + Nplots,"MTsum_TauPt "+cutName + Nplots, nBinsMTsum, binsMTsum , nBinsTauPt,binsTauPt);
      hMTsum_TauPt[cj] ->Sumw2();


      hMTsum_DZeta[cj] = new TH2D ("MTsum_DZeta_"+nCut + Nplots,"MTsum_DZeta "+cutName + Nplots, nBinsMTsum, binsMTsum , nBinsDZeta,binsDZeta);
      hMTsum_DZeta[cj] ->Sumw2();

      hMTsum_dR[cj] = new TH2D ("MTsum_dR_"+nCut + Nplots,"MTsum_dR "+cutName + Nplots, nBinsMTsum,binsMTsum , nBinsDr,binsDr);
      hMTsum_dR[cj] -> Sumw2();
     
      hMTsum_MTDil[cj] = new TH2D ("MTsum_MTDil_"+nCut + Nplots,"MT_MTDil "+cutName + Nplots, nBinsMTsum,binsMTsum, nBinsMTDil,binsMTDil);
      hMTsum_MTDil[cj] -> Sumw2();

//////////MTtot
      hMTtot_MCTb[cj] = new TH2D ("MTtot_MCTb_"+nCut + Nplots,"MTtot_MCTb "+cutName + Nplots, nBinsMTtot, binsMTtot , nBinsMCTb,binsMCTb);
      hMTtot_MCTb[cj] ->Sumw2();

      hMTtot_MT2lester[cj] = new TH2D ("MTtot_MT2lester_"+nCut + Nplots,"MTtot_MT2lester "+cutName + Nplots, nBinsMTtot, binsMTtot , nBinsMT2lester,binsMT2lester);
      hMTtot_MT2lester[cj] ->Sumw2();

      hMTtot_TauPt[cj] = new TH2D ("MTtot_TauPt_"+nCut + Nplots,"MTtot_TauPt "+cutName + Nplots, nBinsMTtot, binsMTtot , nBinsTauPt,binsTauPt);
      hMTtot_TauPt[cj] ->Sumw2();

      hMTtot_DZeta[cj] = new TH2D ("MTtot_DZeta_"+nCut + Nplots,"MTtot_DZeta "+cutName + Nplots, nBinsMTtot, binsMTtot , nBinsDZeta,binsDZeta);
      hMTtot_DZeta[cj] ->Sumw2();

      hMTtot_dR[cj] = new TH2D ("MTtot_dR_"+nCut + Nplots,"MTtot_dR "+cutName + Nplots, nBinsMTtot, binsMTtot , nBinsDr,binsDr);
      hMTtot_dR[cj] -> Sumw2();
     
      hMTtot_MTDil[cj] = new TH2D ("MTtot_MTDil_"+nCut + Nplots,"MTtot_MTDil "+cutName + Nplots, nBinsMTtot,binsMTtot, nBinsMTDil,binsMTDil);
      hMTtot_MTDil[cj] -> Sumw2();


/////////MCTb

      hMCTb_MT2lester[cj] = new TH2D ("MCTb_MT2lester_"+nCut + Nplots,"MCTb_MT2lester "+cutName + Nplots, nBinsMCTb,binsMCTb ,nBinsMT2lester,binsMT2lester);
      hMCTb_MT2lester[cj]->Sumw2();

      hMCTb_TauPt[cj] = new TH2D ("MCTb_TauPt_"+nCut + Nplots,"MCTb_TauPt "+cutName + Nplots, nBinsMCTb,binsMCTb ,nBinsTauPt,binsTauPt);
      hMCTb_TauPt[cj]->Sumw2();

      hMCTb_DZeta[cj] = new TH2D ("MCTb_DZeta_"+nCut + Nplots,"MCTb_DZeta "+cutName + Nplots, nBinsMCTb,binsDZeta ,nBinsDZeta,binsDZeta);
      hMCTb_DZeta[cj]->Sumw2();

      hMCTb_dR[cj] = new TH2D ("MCTb_dR_"+nCut + Nplots,"MCTb_dR "+cutName + Nplots, nBinsMCTb,binsMCTb , nBinsDr,binsDr);
      hMCTb_dR[cj] -> Sumw2();
     
      hMCTb_MTDil[cj] = new TH2D ("MTCTb_MTDil_"+nCut + Nplots,"MTCTb_MTDil "+cutName + Nplots, nBinsMCTb,binsMCTb, nBinsMTDil,binsMTDil);
      hMCTb_MTDil[cj] -> Sumw2();

////////////// MT2lester

       hMT2lester_DZeta[cj] = new TH2D ("MT2lester_DZeta_"+nCut + Nplots,"MT2lester_DZeta "+cutName + Nplots, nBinsMT2lester, binsMT2lester , nBinsDZeta,binsDZeta);
	hMT2lester_DZeta[cj]->Sumw2();

       hMT2lester_TauPt[cj] = new TH2D ("MT2lester_TauPt_"+nCut + Nplots,"MT2lester_TauPt "+cutName + Nplots, nBinsMT2lester, binsMT2lester , nBinsTauPt,binsTauPt);
	hMT2lester_TauPt[cj]->Sumw2();

      hMT2lester_dR[cj] = new TH2D ("MT2lester_dR_"+nCut + Nplots,"MT2lester_dR "+cutName + Nplots, nBinsMT2lester,binsMT2lester , nBinsDr,binsDr);
      hMT2lester_dR[cj] -> Sumw2();
     
      hMT2lester_MTDil[cj] = new TH2D ("MT2lester_MTDil_"+nCut + Nplots,"MT2lester_MTDil "+cutName + Nplots, nBinsMT2lester,binsMT2lester, nBinsMTDil,binsMTDil);
      hMT2lester_MTDil[cj] -> Sumw2();


     
//////DZeta
      hTauPt_DZeta[cj] = new TH2D ("TauPt_DZeta_"+nCut + Nplots,"TauPt_DZeta "+cutName + Nplots, nBinsTauPt,binsTauPt,nBinsDZeta, binsDZeta);
      hTauPt_DZeta[cj] ->Sumw2();

      hTauPt_dR[cj] = new TH2D ("TauPt_dR_"+nCut + Nplots,"TauPt_dR "+cutName + Nplots, nBinsTauPt, binsTauPt, nBinsDr,binsDr);
      hTauPt_dR[cj] -> Sumw2();

///Tau  
      hTauPt_MTDil[cj] = new TH2D ("TauPt_MTDil_"+nCut + Nplots,"TauPt_MTDil "+cutName + Nplots, nBinsTauPt, binsTauPt, nBinsMTDil,binsMTDil);
      hTauPt_MTDil[cj] -> Sumw2();

////////////////////////////////////////////////////////////
///dR
      hdR_MTDil[cj] = new TH2D ("dR_MTDil_"+nCut + Nplots,"dR_MTDil "+cutName + Nplots, nBinsDr, binsDr, nBinsMTDil,binsMTDil);
      hdR_MTDil[cj] -> Sumw2();

 */

    }

  /*
      char arg[100];
     for (unsigned int i = 0; i < vec.size (); i++)
    {
      var_[i] = -8888.;
      //string name = vec[i].c_str()+"_"+ds;
      sprintf (arg, "%s/F", vec[i].c_str ());
      T->Branch (vec[i].c_str (), &var_[i], arg);

      //cout << " creating the TTree. " << vec[i].c_str()<< "  "<<i<<endl;
    }
*/
}



double Centrality (vector < TLorentzVector > AllJets_Lepton_noMet_){
    // Centrality
    double Centrality = 0, Centrality_N = 0, Centrality_D = 0;
    for (unsigned int i = 0; i < AllJets_Lepton_noMet_.size (); i++)
    {
    Centrality_N += AllJets_Lepton_noMet_[i].Pt ();
    Centrality_D += AllJets_Lepton_noMet_[i].P ();
    }
    double Centr_=-1;

    Centrality_D > 0 ? Centr_ = Centrality_N / Centrality_D : Centr_=-1;

    return Centr_ ;
  }


void WriteTree() 

  {
	  T->Print();
	  //T->Write();
	  T->AutoSave();
  }


void FillTree() {

	  T->Fill();
}

