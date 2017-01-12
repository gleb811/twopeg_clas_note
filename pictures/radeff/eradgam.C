void eradgam() {
//gStyle ->SetOptLogz(1);
//gStyle -> SetOptFit(1011);
gStyle ->SetOptStat(0);
Short_t i;
ostringstream qqq;
Float_t max;

TCanvas *c = new TCanvas("c","c",0,0,700,400);
//c->Divide(2,1);

TFile *MyFile = new TFile("out_11Apr_test.root","READ");
MyFile->cd();


//TH2F *h1 = (TH2F*)MyFile->Get("Q2vsW2");
TH1F *h1 = (TH1F*)MyFile->Get("h_eradgam");
TH1F *h2 = h1->Clone();

c->cd(1);
c->cd(1)->SetBottomMargin(0.17);
c->cd(1)->SetLeftMargin(0.15);

h1->SetTitle(" ");
h1->GetXaxis()->SetNdivisions(10);
h1->GetYaxis()->SetNdivisions(10);
h1->GetXaxis()->SetLabelSize(0.04);
h1->GetYaxis()->SetLabelSize(0.045);
h1->GetXaxis()->SetTitle("E_{rad} (GeV)");
h1->GetXaxis()->SetTitleSize(0.06);
h1->GetYaxis()->SetTitleSize(0.05);
h1->Rebin();
max = h1->GetMaximum();
h1->Scale(1./max);
h1->SetLineWidth(2);
h1->GetXaxis()->SetRangeUser(-0.1, 0.4);
h1->GetYaxis()->SetRangeUser(0.0, 0.015);
h1->Draw();

/*
c->cd(2);
c->cd(2)->SetBottomMargin(0.17);
c->cd(2)->SetLeftMargin(0.15);

h2->SetTitle(" ");
h2->GetXaxis()->SetNdivisions(10);
h2->GetYaxis()->SetNdivisions(10);
h2->GetXaxis()->SetLabelSize(0.04);
h2->GetYaxis()->SetLabelSize(0.045);
h2->GetXaxis()->SetTitle("E_{rad}, (GeV)");
h2->GetXaxis()->SetTitleSize(0.06);
h2->GetYaxis()->SetTitleSize(0.05);
h2->Rebin();
max = h2->GetMaximum();
h2->Scale(1./max);
h2->SetLineWidth(2);
h2->GetXaxis()->SetRangeUser(-0.1, 0.1);
h2->GetYaxis()->SetRangeUser(0.0, 0.015);




h2->Draw();*/

};
