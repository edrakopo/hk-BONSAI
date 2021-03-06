{
  TString libs0  = gSystem->GetDynamicPath();
  TString libswc = gSystem->Getenv("WCSIMDIR");
  TString libsb  = gSystem->Getenv("BONSAIDIR");
  TString libs   = libs0 + ":" + libsb + ":" + libswc + ":/usr/lib:/usr/local/lib:/opt/lib:/opt/local/lib";
  gSystem->SetDynamicPath(libs.Data());

  gSystem->Load("libGpad");
  gSystem->Load("libPhysics");
  gSystem->Load("libMatrix");
  gSystem->Load("libHist");
  gSystem->Load("libGraf");
  gSystem->Load("libTree");
  gSystem->Load("libRIO");
  gSystem->Load("libXMLIO");
  gSystem->Load("libMinuit");
  //gSystem->Load("libMinuit2");
  gSystem->Load("libMathMore"); 

  gSystem->Load("libWCSimRoot.so");
  
  gSystem->Load("libWCSimBonsai.so");
}

