void q2_dep_t_l_tot () {
gStyle->SetOptStat(0);
TCanvas *c = new TCanvas("c","c",1000,900);
//c->Divide(4,4);
ostringstream qqq;
TH1F *h,*h1,*h2,*h3;


TH1F *h_qqq065 = new TH1F ("h_qqq065","h_qqq065",150, 0, 1.2);

h_qqq065->Fill(0.001,70.36);
h_qqq065->Fill(0.65,22.8685);
h_qqq065->Fill(0.95,17.4726);
//h_qqq065->Fill(1.3,);

TH1F *h_qqq = new TH1F ("h_qqq","h_qqq",150, 0, 1.2);

h_qqq->Fill(0.001,70.36);
h_qqq->Fill(0.65,27.64);
h_qqq->Fill(0.95,22.45);

TH1F *h_qqqq = new TH1F ("h_qqqq","h_qqqq",150, 0, 1.2);

h_qqqq->Fill(0.001,0);
h_qqqq->Fill(0.65,4.77);
h_qqqq->Fill(0.95,4.9774);

c->cd();
c->cd()->SetBottomMargin(0.2);
c->cd()->SetLeftMargin(0.15);
h_qqq065->SetMarkerStyle(20);
h_qqq065->SetMarkerSize(1.5);
h_qqq065->SetMarkerColor(kBlue);
//h_qqq065->Scale(0.15/h_qqq065->Integral(0,15));
h_qqq065->SetAxisRange(0., h_qqq065->GetMaximum()+(h_qqq065->GetMaximum())/10., "Y");
h_qqq065->SetTitle(" ");
h_qqq065->GetYaxis()->SetLabelSize(0.05);
h_qqq065->GetXaxis()->SetLabelSize(0.05);
h_qqq065->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
h_qqq065->GetYaxis()->SetTitle("#sigma (#mub)");
h_qqq065->GetXaxis()->SetTitleSize(0.06);
h_qqq065->GetYaxis()->SetTitleSize(0.06);
//h_qqq065->SetTitle ("1.775 GeV < ");


h_qqq065->Draw("P");



h_qqq->SetMarkerStyle(20);
h_qqq->SetMarkerSize(1.5);
h_qqq->SetMarkerColor(kRed);
h_qqq->Draw("P same ");


h_qqqq->SetMarkerStyle(20);
h_qqqq->SetMarkerSize(1.5);
h_qqqq->SetMarkerColor(kGreen);
h_qqqq->Draw("P same");




TFile *MyFile1 = new TFile("out_gen_sig_t_l_tot.root","READ");
MyFile1->cd();
qqq << "h_odn_q2_dep_t_17125";
cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h);
qqq.str("");
h->Scale(1./5000000.*100);
h->SetLineColor(kBlue);
h->SetLineWidth(2);
h->SetAxisRange(0., h->GetMaximum()+(h->GetMaximum())/10., "Y");
h->SetAxisRange(0., 1.2, "X");
h->Draw("same][");


qqq << "h_odn_q2_dep_l_17125";
cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h2);
qqq.str("");
h2->Scale(1./5000000.*100);
h2->SetLineColor(kGreen);
h2->SetLineWidth(2);
h2->Draw("same][");

qqq << "h_odn_q2_dep_tot_17125";
cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h3);
qqq.str("");
h3->Scale(1./5000000.*100);
h3->SetLineColor(kRed);
h3->SetLineWidth(2);
h3->Draw("same][");

leg = new TLegend(0.1,0.3,0.4,0.4);

leg->AddEntry(h,"#sigma_{T}","l");
leg->AddEntry(h2,"#varepsilon_{L}#sigma_{L}","l");
leg->AddEntry(h3,"#sigma_{T}+#varepsilon_{L}#sigma_{L}","l");
leg->Draw();



};
