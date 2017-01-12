void sigma_t_l_fit(){


gStyle->SetOptStat(0);
TCanvas *c = new TCanvas("c","c",1000,1000);
c->cd()->SetLeftMargin(0.18);
c->cd()->SetBottomMargin(0.18);
ostringstream qqq;
TH1F *h,*h1;


Double_t Q2[3];
Double_t PAR_1,PAR_2,PAR_3,PAR_4;

Q2[0] = 0.0003;
Q2[1] = 0.65;
Q2[2] = 0.95;
//Q2[3] = 1.3;

 

 Double_t Crsect[3];
 //sig_t W=1.7125
// Crsect[0]=70.36;
// Crsect[1]=22.8685;
// Crsect[2]=17.4726;
// Crsect[3]= 4.95817;

//sig_l W=1.7125
Crsect[0]=0.;
Crsect[1]=24.2714*0.196703;
Crsect[2]=26.2956*0.189394;
 TGraph*gr = new TGraph (3, Q2, Crsect);
gr ->SetMarkerStyle(20); 
gr ->SetMarkerSize(1.5);
gr ->Draw("AP* ");

//TF1 *func = new TF1("pol2",-0.0,1.,4);

//func->SetParLimits(0,-0.2,0.7);
//func->SetParLimits(1,-2.,2.);
//func->SetParLimits(2,10.,25);
//func->SetParLimits(3,-2,7);
//gr ->SetLineWidth(3.);
gr ->Fit("pol2" ,"M E");

//// PAR_1= func->GetParameter(0);
//PAR_2= func->GetParameter(1);
//PAR_3= func->GetParameter(2);
//PAR_4= func->GetParameter(3);


gr->SetTitle(" ");
gr->GetYaxis()->SetLabelSize(0.05);
gr->GetXaxis()->SetLabelSize(0.05);
gr->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
//gr->GetYaxis()->SetTitle("#sigma_{T} (#mub)");
gr->GetYaxis()->SetTitle("#varepsilon_{L}#sigma_{L} (#mub)");
gr->GetYaxis()->SetTitleSize(0.06);
gr->GetXaxis()->SetTitleSize(0.06);
gr->GetYaxis()->SetNdivisions(6);
gr->GetXaxis()->SetNdivisions(8); 
gr ->SetLineWidth(4.);

gr ->SetMarkerStyle(20); 
gr ->SetMarkerSize(1.5);
gr ->Draw("AP");

//cout << PAR_1 <<"\n";
//cout << PAR_2 <<"\n";
//cout << PAR_3 <<"\n";
//cout << PAR_4 <<"\n";


//cout << func->Eval(0,0,0) << "\n";

};



double funct_f(double *x, double *par) {
   double s;
  
     s = pow((x[0]+par[0]),(par[1]))*par[2]+par[3];
   return s;
};


