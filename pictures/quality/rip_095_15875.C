void rip_095_15875 () {
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
TFile *MyFile1 = new TFile("out_gen_rip_095_15875.root","READ");

TFile *MyFile2 = new TFile("mok_model_1dim_plots_095.root","READ");


//for (Int_t i=1;i<=8;i++){
//MyFile1->cd();
//qqq << "h_odn_alpha_" << 10000*(1.3375+0.025*(i-1));
//cout << qqq.str().c_str() <<"\n";
//gDirectory->GetObject(qqq.str().c_str(),h);
//qqq.str("");

MyFile2->cd();
Short_t i=6;
//if (i<=8){
qqq << "h_alpha_7";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h1);
qqq.str("");
//};
W = 1.3375+0.025*(i-1);
for (Int_t j=1; j<=100; j++) {
h1->SetBinError(j,0);
};

qqq << "h_theta_7";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h2);
qqq.str("");


qqq << "h_inv_m12_7";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h3);
qqq.str("");

qqq << "h_inv_m23_7";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h4);
qqq.str("");


MyFile1->cd();
qqq << "h_odn_inv_m12_15875";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist3);
qqq.str("");


qqq << "h_odn_inv_m23_15875";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist4);
qqq.str("");


qqq << "h_odn_theta_2_15875";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist2);
qqq.str("");

qqq << "h_odn_alpha_15875";

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





Double_t data_m12_val[10] = {0.28027,0.32253,0.36479,0.40705,0.44931,0.49156,0.53382,0.57608,0.61834,0.66060};
 
Double_t data_cr_sect_m12[10] = {0.70819440E+01,0.32212605E+02,0.37348892E+02,0.43762337E+02,0.42679161E+02,0.55910233E+02,0.59652313E+02,0.49309055E+02,0.49045177E+02,0.83483448E+01}; 

Double_t data_err_m12[10] = {0.14950669E+01,0.36782162E+01,0.41541557E+01,0.37948015E+01,0.38027177E+01,0.42284770E+01,0.54909415E+01,0.42968345E+01,0.35161908E+01,0.13319892E+01};

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
gr_m12->SetMaximum(70.);
gr_m12->SetMinimum(0.9);
gr_m12->SetMaximum(70.);
gr_m12->SetMinimum(0.);
gr_m12->Draw("Ap");
h3->Scale(2.*2.*3.1415);
h3->SetMarkerStyle(20);
h3->SetMarkerSize(1.3);

h3->Draw("p same");
hist3->Scale(1./5000000.*100./((1.5875-0.938)-(0.13957+0.13957)+0.04));
hist3->SetLineColor(kBlack);
hist3->SetLineWidth(2.);
hist3->Draw("same");

Double_t data_m23_val[10] = {1.07897,1.12123,1.16349,1.20575,1.24801,1.29026,1.33252,1.37478,1.41704,1.45930};
 
Double_t data_cr_sect_m23[10] = {0.30252681E+01,0.20787216E+02,0.45938080E+02,0.10107774E+03,0.85612785E+02,0.54832634E+02,0.39947960E+02,0.26437351E+02,0.70397902E+01,0.65164375E+00}; 

Double_t data_err_m23[10] = { 0.30372256E+00,0.27074423E+01,0.36064115E+01,0.64895072E+01,0.54449258E+01,0.52284522E+01,0.34793499E+01,0.29504585E+01,0.14747547E+01,0.38269211E-01};

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
 gr_m23->Draw("Ap");
 h4->Scale(2.*2.*3.1415);
 h4->SetMarkerStyle(20);
h4->SetMarkerSize(1.3);
h4->Draw("p same");
hist4->Scale(1./5000000.*100./((1.5875-0.938)-(0.13957+0.13957)+0.04));
hist4->SetLineColor(kBlack);
hist4->SetLineWidth(2.);
hist4->Draw("same");


Double_t data_th_val[10] = {9.00000*3.1415/180., 27.00000*3.1415/180., 45.00000*3.1415/180., 63.00000*3.1415/180., 81.00000*3.1415/180., 98.99999*3.1415/180.,117.00000*3.1415/180.,135.00000*3.1415/180.,153.00000*3.1415/180.,171.00000*3.1415/180.};
 
 
 
Double_t data_cr_sect_th[10] = {0.12837939E+02,0.13781322E+02,0.11291242E+02,0.82946024E+01,0.73864408E+01,0.59161649E+01,0.62141085E+01,0.74813256E+01,0.79399724E+01,0.53642011E+01}; 

Double_t data_err_th[10] = { 0.22294486E+01,0.11699274E+01,0.79968774E+00,0.52066654E+00,0.51342463E+00,0.66219825E+00,0.63524204E+00,0.74260598E+00,0.13120859E+01,0.10192199E+01};

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
gr_th->SetMaximum(20.);
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





Double_t data_alp_val[7] = {0.,36.00000*3.1415/180.,108.00000*3.1415/180.,180.00000*3.1415/180.,251.99998*3.1415/180.,324.00000*3.1415/180.,6.28};
 
Double_t data_cr_sect_alp[7] = {0.,0.24116724E+01,0.28196394E+01,0.28744593E+01,0.25836771E+01,0.22694097E+01,0.}; 

Double_t data_err_alp[7] = {0.,0.14698884E+00,0.21242616E+00,0.17650619E+00,0.18211825E+00,0.17353587E+00,0.};

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
gr_alp->SetMinimum(1.);
gr_alp->SetMaximum(4.);
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
qqq << "Q^{2} =  0.95 GeV^{2}, W = 1.5875 GeV";
 tex.SetTextSize(0.042);
 tex.DrawLatex(0.3,0.955,qqq.str().c_str());

};
