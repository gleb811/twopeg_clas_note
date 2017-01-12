void miss_mass_pim() {
//gStyle ->SetOptLogz(1);
//gStyle -> SetOptFit(1011);
gStyle ->SetOptStat(0);
Short_t i;
ostringstream qqq;
Float_t max;

TCanvas *c = new TCanvas("c","c",0,0,1000,400);
c->Divide(2,1);

TFile *MyFile = new TFile("out_11Apr_test.root","READ");
MyFile->cd();


//TH2F *h1 = (TH2F*)MyFile->Get("Q2vsW2");
TH1F *h1 = (TH1F*)MyFile->Get("h_pim_miss_2");
TH1F *h2 = (TH1F*)MyFile->Get("h_pim_miss");

c->cd(1);
c->cd(1)->SetBottomMargin(0.17);
c->cd(1)->SetLeftMargin(0.15);

h1->SetTitle(" ");
h1->GetXaxis()->SetNdivisions(5);
h1->GetYaxis()->SetNdivisions(10);
h1->GetXaxis()->SetLabelSize(0.04);
h1->GetYaxis()->SetLabelSize(0.045);
h1->GetXaxis()->SetTitle("M_{#pi^{-}}^{2} (GeV^{2})");
h1->GetXaxis()->SetTitleSize(0.06);
h1->GetYaxis()->SetTitleSize(0.05);
max = h1->GetMaximum();
h1->Scale(1./max);
h1->SetLineWidth(2);

h1->GetYaxis()->SetRangeUser(0.0, 0.1);
h1->GetXaxis()->SetRangeUser(0.0, 0.04);
h1->Draw();

c->cd(2);
c->cd(2)->SetBottomMargin(0.17);
c->cd(2)->SetLeftMargin(0.15);

h2->SetTitle(" ");
h2->GetXaxis()->SetNdivisions(5);
h2->GetYaxis()->SetNdivisions(10);
h2->GetXaxis()->SetLabelSize(0.04);
h2->GetYaxis()->SetLabelSize(0.045);
h2->GetXaxis()->SetTitle("M_{#pi^{-}}^{2} (GeV^{2})");
h2->GetXaxis()->SetTitleSize(0.06);
h2->GetYaxis()->SetTitleSize(0.05);
h2->Scale(1./max);
h2->GetYaxis()->SetRangeUser(0.0, 0.1);
h2->GetXaxis()->SetRangeUser(0.0, 0.04);
h2->SetLineWidth(2);
h2->Draw();


c->cd();
newpad = new TPad("newpad","a transparent pad",0.,0.,1.,1.);
 newpad->SetFillStyle(4000);
 newpad->Draw();
  newpad->cd();
 TLatex tex;
 qqq.str("");
qqq << "M_{#pi^{-}}^{2} = (P_{p} + #tilde{P}_{e} - #tilde{P}_{e'} - #tilde{P}_{p'} - #tilde{P}_{#pi^{+}})";
 tex.SetTextSize(0.065);
 tex.DrawLatex(0.1,0.93,qqq.str().c_str());
 
 
 newpad2 = new TPad("newpad2","a transparent pad",0.,0.,1.,1.);
 newpad2->SetFillStyle(4000);
 newpad2->Draw();
  newpad2->cd();
 TLatex tex2;
 qqq.str("");
qqq << "M_{#pi^{-}}^{2} = (P_{p} + P_{e} - P_{e'} - #tilde{P}_{p'} - #tilde{P}_{#pi^{+}})";
 tex2.SetTextSize(0.065);
 tex2.DrawLatex(0.6,0.93,qqq.str().c_str());

};
