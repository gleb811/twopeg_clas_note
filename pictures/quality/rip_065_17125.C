void rip_065_17125 () {
gStyle->SetOptStat(0);
TCanvas *c = new TCanvas("c","c",650,500);
c->Divide(2,2);
ostringstream qqq;
TH1F *h, *h1,*h2,*h3,*h4;
TH1F  *hist1,*hist2,*hist3,*hist4;
//gStyle->Reset();
//gStyle->SetPalette(1);
//gStyle->SetOptLogz(1);
Float_t W;
gStyle->SetTitleSize(0.11,"t"); 

//TFile *MyFile1 = new TFile("out_root_1dim_int_big_stat.root","READ");
//TFile *MyFile1 = new TFile("qqq_26Apr3.root","READ");
//TFile *MyFile1 = new TFile("qqq_14Jul_325_big.root","READ");

//TFile *MyFile2 = new TFile("mok_model_1dim_14July_fed_0325.root","READ");
TFile *MyFile1 = new TFile("out_gen_rip_065_17125.root","READ");

TFile *MyFile2 = new TFile("mok_model_1dim_plots_065.root","READ");


//for (Int_t i=1;i<=8;i++){
//MyFile1->cd();
//qqq << "h_odn_alpha_" << 10000*(1.3375+0.025*(i-1));
//cout << qqq.str().c_str() <<"\n";
//gDirectory->GetObject(qqq.str().c_str(),h);
//qqq.str("");

MyFile2->cd();
Short_t i=6;
//if (i<=8){
qqq << "h_alpha_12";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h1);
qqq.str("");
//};
W = 1.3375+0.025*(i-1);
for (Int_t j=1; j<=100; j++) {
h1->SetBinError(j,0);
};

qqq << "h_theta_12";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h2);
qqq.str("");


qqq << "h_inv_m12_12";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h3);
qqq.str("");

qqq << "h_inv_m23_12";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h4);
qqq.str("");


MyFile1->cd();
qqq << "h_odn_inv_m12_17125";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist3);
qqq.str("");


qqq << "h_odn_inv_m23_17125";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist4);
qqq.str("");


qqq << "h_odn_theta_2_17125";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist2);
qqq.str("");

qqq << "h_odn_alpha_17125";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist1);
qqq.str("");
//h4->Draw("P ");





//c->cd()->SetRightMargin(0.2);
//h->SetMinimum(0.);
//cout <<h->Integral(0,100) << " qqq \n";
//h->Scale(1/h->Integral(0,100));
//h->Scale(1/h->GetMaximum());


//factor = factor*100./2./3.1415;

//factor = factor/((W-0.938)-(0.13957+0.13957)+0.04);

//factor = factor/((W-0.13957)-(0.938+0.13957)+0.04);

//h->Scale(factor);
//h->SetAxisRange((h->GetMaximum()/2.), h->GetMaximum()+(h->GetMaximum())/5., "Y");

//h->SetMinimum(0.001);
//h->Draw();



//h->SetTitle(" ");
//h->GetYaxis()->SetLabelSize(0.09);
//h->GetXaxis()->SetLabelSize(0.09);

//h->GetXaxis()->SetTitle("M23, GeV");

//h->GetYaxis()->SetTitle("d#sigma/dM, #mub/GeV");
//h->GetYaxis()->SetTitleSize(0.1);

//h->GetXaxis()->SetTitleSize(0.1);

//h->GetYaxis()->SetNdivisions(6);
//h->GetXaxis()->SetNdivisions(5);
//qqq << "W = " << 1.3375+0.025*(i-1) <<" GeV";
//h->SetTitle(qqq.str().c_str());
//qqq.str("");

//s};





Double_t data_m12_val[10] = {0.28652,0.34128,0.39604,0.45080,0.50556,0.56031,0.61507,0.66983,0.72459,0.77935};
 
Double_t data_cr_sect_m12[10] = {0.13217432E+02,0.43776314E+02,0.49565510E+02,0.57258945E+02,0.57184937E+02,0.70775871E+02,0.74022873E+02,0.70745567E+02,0.74830650E+02,0.16125460E+02}; 

Double_t data_err_m12[10] = {0.21256442E+01,0.36872838E+01,0.25979729E+01,0.33070490E+01,0.28062308E+01,0.39096236E+01,0.48051424E+01,0.46123414E+01,0.71341019E+01,0.14149058E+01};

gr_m12 = new TGraphErrors(10, data_m12_val,data_cr_sect_m12, 0, data_err_m12 );
gr_m12->SetMarkerStyle(21);
gr_m12->SetMarkerSize(1.3);
gr_m12->SetMarkerColor(kBlue);
//gr_m12-> SetMinimum(2.);

c->cd(1); 
c->cd(1)->SetBottomMargin(0.2);
c->cd(1)->SetLeftMargin(0.2);
c->cd(1)->SetTopMargin(0.15);

gr_m12->SetTitle(" ");
gr_m12->GetYaxis()->SetLabelSize(0.08);
gr_m12->GetXaxis()->SetLabelSize(0.08);
gr_m12->GetXaxis()->SetTitle("M_{#pi^{+}#pi^{-}} (GeV)");
gr_m12->GetYaxis()->SetTitle("d#sigma/dM (#mub/GeV)");
gr_m12->GetYaxis()->SetTitleSize(0.08);
gr_m12->GetXaxis()->SetTitleSize(0.08);
gr_m12->GetYaxis()->SetNdivisions(6);
gr_m12->GetXaxis()->SetNdivisions(5);
gr_m12->SetMaximum(100.);
gr_m12->SetMinimum(0.);

gr_m12->Draw("Ap");
h3->Scale(2.*2.*3.1415);
h3->SetMarkerStyle(20);
h3->SetMarkerSize(1.3);

h3->Draw("p same");
hist3->Scale(1./5000000.*100./((1.7125-0.938)-(0.13957+0.13957)+0.04));
hist3->SetLineColor(kBlack);
hist3->SetLineWidth(2.);
hist3->Draw("same");



Double_t data_m23_val[10] = {1.08522,1.13998,1.19474,1.24950,1.30426,1.35901,1.41377,1.46853,1.52329,1.57805};
 
Double_t data_cr_sect_m23[10] = {0.10030262E+02,0.60819855E+02,0.12031922E+03,0.98024261E+02,0.71594597E+02,0.51671627E+02,0.49424763E+02,0.43093750E+02,0.19633196E+02,0.28913035E+01}; 

Double_t data_err_m23[10] = {0.10863121E+01,0.42245045E+01,0.74362631E+01,0.46530814E+01,0.39524376E+01,0.32783296E+01,0.40705180E+01,0.37860014E+01,0.16573826E+01,0.47566417E+00};

gr_m23 = new TGraphErrors(10, data_m23_val,data_cr_sect_m23, 0, data_err_m23 );

 c->cd(2);
  c->cd(2)->SetBottomMargin(0.2);
c->cd(2)->SetLeftMargin(0.2);
c->cd(2)->SetTopMargin(0.15);

 gr_m23->SetMarkerStyle(21);
 gr_m23->SetMarkerSize(1.3); 
gr_m23->SetMarkerColor(kBlue);
gr_m23->SetTitle(" ");
gr_m23->GetYaxis()->SetLabelSize(0.08);
gr_m23->GetXaxis()->SetLabelSize(0.08);
gr_m23->GetXaxis()->SetTitle("M_{#pi^{+}p} (GeV)");
gr_m23->GetYaxis()->SetTitle("d#sigma/dM (#mub/GeV)");
gr_m23->GetYaxis()->SetTitleSize(0.08);
gr_m23->GetXaxis()->SetTitleSize(0.08);
gr_m23->GetYaxis()->SetNdivisions(6);
gr_m23->GetXaxis()->SetNdivisions(5);
 gr_m23->SetMaximum(170.);
 gr_m23->Draw("Ap");
 h4->Scale(2.*2.*3.1415);
 h4->SetMarkerStyle(20);
h4->SetMarkerSize(1.3);
h4->Draw("p same");
hist4->Scale(1./5000000.*100./((1.7125-0.938)-(0.13957+0.13957)+0.04));
hist4->SetLineColor(kBlack);
hist4->SetLineWidth(2.);
hist4->Draw("same");


  

Double_t data_th_val[10] = {9.00000*3.1415/180.,27.00000*3.1415/180. , 45.00000*3.1415/180. , 63.00000*3.1415/180. , 81.00000*3.1415/180. , 98.99999*3.1415/180. ,117.00000*3.1415/180. ,135.00000*3.1415/180. ,153.00000*3.1415/180. ,171.00000*3.1415/180. };
 
 
 
Double_t data_cr_sect_th[10] = {0.19558044E+02,0.21388706E+02,0.17413124E+02,0.15096280E+02,0.12843718E+02,0.12857007E+02,0.11128770E+02,0.13156780E+02,0.14715611E+02,0.16025740E+02}; 

Double_t data_err_th[10] = { 0.16898896E+01,0.13932576E+01,0.75439411E+00,0.79898828E+00,0.63363391E+00,0.11608919E+01,0.96722895E+00,0.10239608E+01,0.14807230E+01,0.20106351E+01};

gr_th = new TGraphErrors(10, data_th_val,data_cr_sect_th, 0, data_err_th );

 c->cd(3);
 c->cd(3)->SetBottomMargin(0.2);
c->cd(3)->SetLeftMargin(0.2);
c->cd(3)->SetTopMargin(0.15);

 gr_th->SetMarkerStyle(21);
  gr_th->SetMarkerSize(1.3);
gr_th->SetMarkerColor(kBlue);
 gr_th->SetTitle(" ");
gr_th->GetYaxis()->SetLabelSize(0.08);
gr_th->GetXaxis()->SetLabelSize(0.08);
gr_th->GetXaxis()->SetTitle("#theta_{#pi^{-}} (rad)");
gr_th->GetYaxis()->SetTitle("d#sigma/d(-cos#theta) (#mub/rad)");
gr_th->GetYaxis()->SetTitleSize(0.08);
gr_th->GetXaxis()->SetTitleSize(0.08);
gr_th->GetYaxis()->SetNdivisions(6);
gr_th->GetXaxis()->SetNdivisions(5);
gr_th->SetMaximum(30.);
gr_th->GetXaxis()->SetRangeUser(0., 3.2);
 gr_th->Draw("Ap");
h2->Scale(2.*3.1415);
h2->SetMarkerStyle(20);
h2->SetMarkerSize(1.3);
h2->Draw("P same");
hist2->Scale(1./5000000.);
hist2->SetLineColor(kBlack);
hist2->SetLineWidth(2.);
hist2->Draw("same][");



Double_t data_alp_val[7] = {0.,37.00000*3.1415/180.,108.00000*3.1415/180.,180.00000*3.1415/180.,251.99998*3.1415/180.,324.00000*3.1415/180.,6.28};
 
Double_t data_cr_sect_alp[7] = {0.,0.39814229E+01,0.47381907E+01,0.52757597E+01,0.46283793E+01,0.43626266E+01,0.}; 

Double_t data_err_alp[7] = {0.,0.18378714E+00,0.23061478E+00,0.30678940E+00,0.27219316E+00,0.20364416E+0,0.};

gr_alp = new TGraphErrors(7, data_alp_val,data_cr_sect_alp, 0, data_err_alp );

 c->cd(4);
 c->cd(4)->SetBottomMargin(0.2);
c->cd(4)->SetLeftMargin(0.2);
c->cd(4)->SetTopMargin(0.15);

 gr_alp->SetMarkerStyle(21);
  gr_alp->SetMarkerSize(1.3);
gr_alp->SetMarkerColor(kBlue);
 gr_alp->SetTitle(" ");
gr_alp->GetYaxis()->SetLabelSize(0.08);
gr_alp->GetXaxis()->SetLabelSize(0.08);
gr_alp->GetXaxis()->SetTitle("#alpha_{#pi^{-}} (rad)");
gr_alp->GetYaxis()->SetTitle("d#sigma/d#alpha (#mub/rad)");
gr_alp->GetYaxis()->SetTitleSize(0.08);
gr_alp->GetXaxis()->SetTitleSize(0.08);
gr_alp->GetYaxis()->SetNdivisions(6);
gr_alp->GetXaxis()->SetNdivisions(5); 
gr_alp->SetMinimum(2.5);
gr_alp->SetMaximum(6.);
//gr_alp->SetAxisRange(0.,3.15,"X");
gr_alp->GetXaxis()->SetRangeUser(0., 6.3);
 gr_alp->Draw("Ap");
h1->Scale(2.*3.1415);
h1->SetMarkerStyle(20);
h1->SetMarkerSize(1.3);
h1->Draw("P same");
hist1->Scale(1./5000000.*100./2./3.14);
hist1->SetLineColor(kBlack);
hist1->SetLineWidth(2.);
hist1->Draw("same][");


c->cd();
newpad = new TPad("newpad","a transparent pad",0.,0.,1.,1.);
 newpad->SetFillStyle(4000);
 newpad->Draw();
  newpad->cd();
 TLatex tex;
 qqq.str("");
qqq << "Q^{2} =  0.65 GeV^{2}, W = 1.7125 GeV";
 tex.SetTextSize(0.042);
 tex.DrawLatex(0.3,0.955,qqq.str().c_str());
 
};
