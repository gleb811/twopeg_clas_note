void ph_space_flat() {
//gStyle ->SetOptLogz(1);
//gStyle -> SetOptFit(1011);
gStyle ->SetOptStat("e");
Short_t i;
ostringstream qqq;


TCanvas *c = new TCanvas("c","c",0,0,1000,400);
c->Divide(2,1);

TFile *MyFile = new TFile("out_11Apr_test.root","READ");
MyFile->cd();


//TH2F *h1 = (TH2F*)MyFile->Get("Q2vsW2");
TH2F *h1 = (TH2F*)MyFile->Get("dalitz");
c->cd(1);
c->cd(1)->SetBottomMargin(0.17);
c->cd(1)->SetLeftMargin(0.15);

h1->SetTitle(" ");
h1->GetXaxis()->SetNdivisions(10);
h1->GetYaxis()->SetNdivisions(10);
h1->GetXaxis()->SetLabelSize(0.035);
h1->GetYaxis()->SetLabelSize(0.035);
h1->GetXaxis()->SetTitle("S_{12} (GeV^{2})");
h1->GetYaxis()->SetTitle("S_{23} (GeV^{2})");
h1->GetXaxis()->SetTitleSize(0.05);
h1->GetXaxis()->SetTitleOffset(1.7);
h1->GetYaxis()->SetTitleSize(0.05);
h1->GetYaxis()->SetTitleOffset(1.5);

h1->Draw("lego2");

c->cd(2);
c->cd(2)->SetBottomMargin(0.17);
c->cd(2)->SetLeftMargin(0.15);
h1->Draw("colz");


};
