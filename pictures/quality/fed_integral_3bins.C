void fed_integral_3bins() {
gStyle->SetOptStat(0);
TCanvas *c = new TCanvas("c","c",500,500);

TH1F *h_425, *h_325,*h_475;
ostringstream qqq;

c->cd()->SetBottomMargin(0.2);



///------------------------
Double_t w_values_325[10]={1.3125,1.3375,1.3625,1.3875,1.4125,1.4375,1.4625,1.4875,1.5125,1.5375};


Double_t data_int_325[10] = {3.80598235,9.00221252,18.797369,23.6943264,27.7946625,32.7993507,35.4190674,37.0180397,35.3550186,34.563118};

Double_t data_int_err_325[10] ={0.474624068,0.684731126,1.12964439,1.16060078,1.01271713,1.17859161,1.19018531,1.03291512,0.992419362,1.06454003};



Double_t data_int_mod_325[10] ={3.47,8.61,17.96,22.67,27.5,31.85,34.98,36.35,35.6,33.32};


gr_int_325 = new TGraphErrors(10,w_values_325 ,data_int_325, 0,data_int_err_325 );
gr_int_325->SetMarkerStyle(21);
gr_int_325->SetMarkerSize(1.3);
gr_int_325->SetMarkerColor(kGreen);


gr_int_325->SetTitle(" ");
gr_int_325->GetYaxis()->SetLabelSize(0.05);
gr_int_325->GetXaxis()->SetLabelSize(0.05);
gr_int_325->GetXaxis()->SetTitle("W (GeV)");
gr_int_325->GetYaxis()->SetTitle("#sigma (#mub)");
gr_int_325->GetYaxis()->SetTitleSize(0.05);

gr_int_325->GetXaxis()->SetTitleSize(0.06);

gr_int_325->GetYaxis()->SetNdivisions(6);
gr_int_325->GetXaxis()->SetNdivisions(6);


gr_int_325->Draw("Ap ");


gr_int_mod_325 = new TGraph(10,w_values_325 ,data_int_mod_325);
gr_int_mod_325->SetMarkerStyle(20);
gr_int_mod_325->SetMarkerSize(1.5);
gr_int_mod_325->SetMarkerColor(kGreen+2);
gr_int_mod_325->Draw("p same ");


TFile *MyFile1= new TFile("out_fed_int_325.root","READ");


MyFile1->cd();
qqq << "W" ;
cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h_325);
qqq.str("");
Float_t factor=1.;
factor = factor/5000000.*100.;
h_325->Scale(factor);


h_325->SetLineColor(kGreen);
h_325->SetLineWidth(2.);
h_325->Draw("same ][");
//----------------------------------------------------------

Double_t w_values_425[9]={1.3125,1.3375,1.3625,1.3875,1.4125,1.4375,1.4625,1.4875,1.5125};


Double_t data_int_425[9] = {3.27920032,7.57423258	,12.8282061	,19.7579994	,24.2210236	,27.2032166	,28.6573925	,31.6273079,29.9035053};

Double_t data_int_err_425[9] ={0.348774791,0.581891775,0.907347262,0.984615564,1.02476585,1.05169737,1.01539469,1.14650834,1.07694101};


Double_t data_int_mod_425[9] ={3.53,7.25,11.45,18.57,23.4,25.88,28.51,29.213,28.59};


gr_int_425 = new TGraphErrors(9,w_values_425 ,data_int_425, 0,data_int_err_425 );
gr_int_425->SetMarkerStyle(21);
gr_int_425->SetMarkerSize(1.3);
gr_int_425->SetMarkerColor(kBlue);


gr_int_425->SetTitle("Q^{2} = 0.425 GeV^{2}");
gr_int_425->GetYaxis()->SetLabelSize(0.05);
gr_int_425->GetXaxis()->SetLabelSize(0.05);
gr_int_425->GetXaxis()->SetTitle("W (GeV)");
gr_int_425->GetYaxis()->SetTitle("#sigma (#mub)");
gr_int_425->GetYaxis()->SetTitleSize(0.05);

gr_int_425->GetXaxis()->SetTitleSize(0.06);

gr_int_425->GetYaxis()->SetNdivisions(6);
gr_int_425->GetXaxis()->SetNdivisions(6);


gr_int_425->Draw("p same ");


gr_int_mod_425 = new TGraph(9,w_values_425 ,data_int_mod_425);
gr_int_mod_425->SetMarkerStyle(20);
gr_int_mod_425->SetMarkerSize(1.5);
gr_int_mod_425->SetMarkerColor(kBlue+2);
gr_int_mod_425->Draw("p same ");


TFile *MyFile1= new TFile("out_fed_int_425.root","READ");


MyFile1->cd();
qqq << "W" ;
cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h_425);
qqq.str("");
Float_t factor=1.;
factor = factor/5000000.*100.;
h_425->Scale(factor);
h_425->SetLineColor(kBlue);
h_425->SetLineWidth(2.);
h_425->Draw("same][");
///----------------------------------
Double_t w_values_475[8]={1.3125,1.3375,1.3625,1.3875,1.4125,1.4375,1.4625,1.4875};




 
Double_t data_int_475[8] = {3.88259625,6.40952635,12.1366282,15.3036842,22.4861298,23.518734,24.7309189,29.2696743};

Double_t data_int_err_475[8] ={0.534401238,0.637927055,0.86483264,0.896188021,0.997347295,0.943069935,1.1742028,1.24688637};


Double_t data_int_mod_475[8] ={3.55,6.08,11.32,14.9,21.15,22.79,24.28,28.29};


gr_int_475 = new TGraphErrors(8,w_values_475 ,data_int_475, 0,data_int_err_475 );
gr_int_475->SetMarkerStyle(21);
gr_int_475->SetMarkerSize(1.3);
gr_int_475->SetMarkerColor(kRed);


gr_int_475->SetTitle(" ");
gr_int_475->GetYaxis()->SetLabelSize(0.05);
gr_int_475->GetXaxis()->SetLabelSize(0.05);
gr_int_475->GetXaxis()->SetTitle("W (GeV)");
gr_int_475->GetYaxis()->SetTitle("#sigma (#mub)");
gr_int_475->GetYaxis()->SetTitleSize(0.05);

gr_int_475->GetXaxis()->SetTitleSize(0.06);

gr_int_475->GetYaxis()->SetNdivisions(6);
gr_int_475->GetXaxis()->SetNdivisions(6);

gr_int_475->SetMaximum(45.);
gr_int_475->Draw("p same");


gr_int_mod_475 = new TGraph(9,w_values_475 ,data_int_mod_475);
gr_int_mod_475->SetMarkerStyle(20);
gr_int_mod_475->SetMarkerSize(1.5);
gr_int_mod_475->SetMarkerColor(kRed+2);
gr_int_mod_475->Draw("p same ");


TFile *MyFile1= new TFile("out_fed_int_475.root","READ");


MyFile1->cd();
qqq << "W" ;
cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),h_475);
qqq.str("");
Float_t factor=1.;
factor = factor/5000000.*100.;
h_475->Scale(factor);



h_475->SetLineWidth(2.);
h_475->SetLineColor(kRed);
h_475->Draw("same][");


leg = new TLegend(0.1,0.3,0.4,0.4);
leg->AddEntry(h_325,"Q^{2} = 0.325 GeV^{2} ","l");
leg->AddEntry(h_425,"Q^{2} = 0.425 GeV^{2}","l");
leg->AddEntry(h_475,"Q^{2} = 0.475 GeV^{2}","l");


leg->Draw();
};
