void mok_fed_0425_14625() {
gStyle->SetOptStat(0);
Double_t S12_val, S23_val, TH_val, ALP_val;
Double_t s12_min, s12_max,s23_min, s23_max, th_min, th_max, alp_min, alp_max;
Double_t dm12,dm23;
Double_t ds12_tmp,ds23_tmp, dalpha_tmp;
Double_t dalpha, ds12, ds23;
Double_t th_l, th_r, dtheta, dtheta_tmp;



TH1F *hist1, *hist2, *hist3,*hist4;
Double_t mpr = 0.938272;
Double_t mpi = 0.13957;
TFile *MyFile1 = new TFile("out_gen_fed_425_14625.root","READ");

Double_t data_m12_val[8],data_m23_val[8], data_theta_val[8],data_alp_val[7], data_cr_sect_m12[8],data_err_m12[8], data_cr_sect_m23[8],data_err_m23[8], data_cr_sect_th_pim[8],data_err_th_pim[8],data_cr_sect_alp_pim[7],data_err_alp_pim[7], data_err_alp_pim_x[7];

data_m12_val[0] = 0.27774;
data_m12_val[1] =  0.31494;
data_m12_val[2] = 0.35214;
data_m12_val[3] = 0.38934;
data_m12_val[4] = 0.42653;
data_m12_val[5] = 0.46373;
data_m12_val[6] = 0.50093;
data_m12_val[7] =  0.53813;




data_m23_val[0] = 1.07644;
data_m23_val[1] = 1.11364;
data_m23_val[2] = 1.15084;
data_m23_val[3] = 1.18804;
data_m23_val[4] = 1.22523;
data_m23_val[5] = 1.26243;
data_m23_val[6] = 1.29963;
data_m23_val[7] =1.33683;






  
 
data_theta_val[0] = 11.25000*3.1415/180.;
data_theta_val[1] = 33.75000*3.1415/180.;
data_theta_val[2] = 56.24999*3.1415/180.;
data_theta_val[3] = 78.75000*3.1415/180.;
data_theta_val[4] = 101.24999*3.1415/180.;
data_theta_val[5] = 123.74999*3.1415/180.;
data_theta_val[6] = 146.25000*3.1415/180.;
data_theta_val[7] = 168.75000*3.1415/180.;


data_alp_val[0] = 0.;
data_alp_val[1] = 36.00000*3.1415/180.;
data_alp_val[2] = 108.00000*3.1415/180.;
data_alp_val[3] = 180.00000*3.1415/180.;
data_alp_val[4] = 251.99998*3.1415/180.;
data_alp_val[5] = 324.00000*3.1415/180.;
data_alp_val[6] = 360*3.1415/180.;

//--------------------------------


Double_t data_cr_sect_m12[8] =  {0.35923492E+02,0.12070387E+03,0.12211710E+03,0.13361009E+03,0.13671024E+03,0.13413545E+03,0.83763641E+02,0.34197652E+01};

 




Double_t data_err_m12[8] = {0.71697998E+01,0.14421137E+02,0.10821365E+02,0.88709002E+01,0.11023265E+02,0.99154768E+01,0.83326950E+01,0.81472522E+00}; 





//-------------------------
Double_t data_cr_sect_m23[8] ={0.80829859E+01,0.40658337E+02,0.10700409E+03,0.17428439E+03,0.21877872E+03,0.14633611E+03,0.70274200E+02,0.49648194E+01};






Double_t data_err_m23[8] = {0.10878980E+01,0.64031210E+01,0.12259884E+02,0.13405915E+02,0.12387323E+02,0.11820278E+02,0.88449116E+01,0.12218285E+01};







//-----------------------------------
Double_t data_cr_sect_th_pim[8] = {0.21008162E+02,0.22067310E+02,0.15250608E+02,0.13641298E+02,0.11349542E+02,0.11530874E+02,0.13857510E+02,0.13380238E+02} ;



Double_t data_err_th_pim[8] ={0.25408368E+01,0.17378305E+01,0.12782826E+01,0.11036105E+01,0.98379403E+00,0.14412795E+01,0.15817603E+01,0.20102983E+01}; 



  

//------------------------------------------








data_cr_sect_alp_pim[0] =0.;
data_cr_sect_alp_pim[1] =0.46548753E+01;
data_cr_sect_alp_pim[2] =0.44182568E+01;
data_cr_sect_alp_pim[3] =0.47199378E+01 ;
data_cr_sect_alp_pim[4] =0.45452356E+01;
data_cr_sect_alp_pim[5] =0.44664583E+01;
data_cr_sect_alp_pim[6] =0.;






data_err_alp_pim[0] = 0.;
data_err_alp_pim[1] =  0.35117149E+00;
data_err_alp_pim[2] = 0.31360805E+00;
data_err_alp_pim[3] = 0.48567778E+00;
data_err_alp_pim[4] = 0.31058690E+00;
data_err_alp_pim[5] = 0.31446081E+00;
data_err_alp_pim[6] = 0.;













gr_m12 = new TGraphErrors(8, data_m12_val,data_cr_sect_m12, 0, data_err_m12 );


gr_m23 = new TGraphErrors(8, data_m23_val,data_cr_sect_m23, 0, data_err_m23 );


gr_alp = new TGraphErrors(7, data_alp_val,data_cr_sect_alp_pim, 0, data_err_alp_pim );
gr_th = new TGraphErrors(8, data_theta_val,data_cr_sect_th_pim, 0, data_err_th_pim );

//TGraph*gr_pim = new TGraph (5,data_alp_val ,data_cr_sect_alp_pim );

//TGraph*gr_pr = new TGraph (5,data_alp_val ,data_cr_sect_alp_pr );

//TGraph*gr_pip = new TGraph (5,data_alp_val ,data_cr_sect_alp_pip );


//Double_t true_min_s12, true_max_s12, true_min_s23, true_max_s23;

TCanvas *c = new TCanvas("c","c",650,500);
c->Divide(2,2);
string dummy,xsect;

Double_t cross_sect, cross_sect_t, cross_sect_l,cross_sect_c2f,cross_sect_s2f,cross_sect_cf,cross_sect_sf, epsl,W,Xsect_int, sigma_t_int, sigma_l_int, sigma_c2f_int, sigma_s2f_int, sigma_cf_int, sigma_sf_int;
//Double_t cross_sect,W,Xsect_int;


c->cd();
Xsect_int = 0.;
sigma_t_int = 0.;
sigma_l_int  = 0.;
sigma_c2f_int = 0.;
sigma_s2f_int = 0.;
sigma_cf_int = 0.;
sigma_sf_int = 0.;
//Read from file minimum and maximum values of all variables
ifstream input("fedotov_4diffsec_0425_14625.dat");
if(input.is_open()){

for (Int_t is23 = 1; is23 <=10; is23++) {
for (Int_t is12 = 1; is12 <=10; is12++) {
for (Int_t itheta = 1; itheta <=8; itheta++) {
for (Int_t ialpha = 1; ialpha <=8; ialpha++) {
getline(input,dummy);
S12_val = atof(dummy.c_str());
getline(input,dummy);
S23_val = atof(dummy.c_str());
getline(input,dummy);
TH_val = atof(dummy.c_str());
getline(input,dummy);
ALP_val = atof(dummy.c_str());

getline(input,xsect);
cross_sect_t = atof(xsect.c_str());
getline(input,xsect);
cross_sect_l = atof(xsect.c_str());

getline(input,xsect);
cross_sect_c2f = atof(xsect.c_str());
getline(input,xsect);
cross_sect_s2f = atof(xsect.c_str());
getline(input,xsect);
cross_sect_cf = atof(xsect.c_str());
getline(input,xsect);
cross_sect_sf = atof(xsect.c_str());


getline(input,dummy);
epsl = atof(dummy.c_str());
getline(input,dummy);

W = atof(dummy.c_str());

if ((is23==1)&&(itheta==1)&&(ialpha==1)&&(is12==1)) s12_min = S12_val;
if ((is23==1)&&(itheta==1)&&(ialpha==1)&&(is12==10)) s12_max = S12_val;

if ((is12==1)&&(itheta==1)&&(ialpha==1)&&(is23==1)) s23_min = S23_val;
if ((is12==1)&&(itheta==1)&&(ialpha==1)&&(is23==10)) s23_max = S23_val;

if ((is12==1)&&(itheta==1)&&(ialpha==1)&&(is23==1)) th_min = TH_val;
if ((is12==1)&&(itheta==8)&&(ialpha==1)&&(is23==1)) th_max = TH_val;

if ((is12==1)&&(itheta==1)&&(ialpha==1)&&(is23==1)) alp_min = ALP_val;
if ((is12==1)&&(itheta==1)&&(ialpha==8)&&(is23==1)) alp_max = ALP_val;

};
};
};
};
};
input.close();


//Determine the with of the bin over all variables 
ds12 = (s12_max - s12_min)/9;
ds23 = (s23_max - s23_min)/9;
dalpha = (alp_max - alp_min)/7;
dtheta = (th_max - th_min)/7;

ds12_tmp = ds12; 
ds23_tmp = ds23; 
dalpha_tmp = dalpha; 
dtheta_tmp = dtheta;


dm12 = (sqrt(s12_max) - sqrt(s12_min))/9;
dm23 = (sqrt(s23_max) - sqrt(s23_min))/9;

TH1F *h_inv_m12 = new TH1F("h_inv_m12_10","h_inv_m12_10",100,0.13957+0.13957-dm12/2.,W-0.938272+dm12/2.);
TH1F *h_inv_m23 = new TH1F("h_inv_m23_10","h_inv_m23_10",100,0.13957+0.938272-dm23/2.,W-0.13957+dm23/2.);
TH1F *h_alpha = new TH1F("h_alpha_10","h_alpha_10",100,0.01-dalpha/2., 6.27318+dalpha/2.);
TH1F *h_theta = new TH1F("h_theta_10","h_theta_10",100,0.01-dtheta/2., 3.13159+dtheta/2.);


cout << "\n";
cout << "s12_min = "<< s12_min<<", s12_max = "<< s12_max <<", ds12 = " << ds12<< "\n";
cout << "s23_min = "<< s23_min<<", s23_max = "<< s23_max <<", ds23 = " << ds23<< "\n";
cout << "th_min = "<< th_min<<", th_max = "<< th_max <<", dtheta = " << dtheta<< "\n";
cout << "alp_min = "<< alp_min<<", alp_max = "<< alp_max <<", dalpha = " << dalpha<< "\n";

cout << "W = "<< W << " GeV \n";


//true_min_s12 = (mpi+mpi)*(mpi+mpi);
//true_max_s12 = (W - mpr)*(W - mpr);

//true_min_s23 = (mpi+mpr)*(mpi+mpr);
//true_max_s23 = (W - mpi)*(W - mpi);


//cout << true_min_s12-s12_min  << " WWWWWWW " << true_max_s12-s12_max << "\n";

ifstream input("fedotov_4diffsec_0425_14625.dat");
if(input.is_open()){


for (Int_t is23 = 1; is23 <=10; is23++) {
for (Int_t is12 = 1; is12 <=10; is12++) {

for (Int_t itheta = 1; itheta <=8; itheta++) {
for (Int_t ialpha = 1; ialpha <=8; ialpha++) {
//I am doing this to force this variables renew each time loops run, beceuse they are determied outside the loop and sometimes change inside the loop
ds12=ds12_tmp;
ds23=ds23_tmp;
dalpha = dalpha_tmp;
dtheta = dtheta_tmp;

getline(input,dummy);
S12_val = 0.;
S12_val = atof(dummy.c_str());

getline(input,dummy);
S23_val = 0.;
S23_val = atof(dummy.c_str());

getline(input,dummy);
TH_val = atof(dummy.c_str());
getline(input,dummy);
ALP_val = atof(dummy.c_str());


getline(input,xsect);
cross_sect_t = atof(xsect.c_str());
getline(input,xsect);
cross_sect_l = atof(xsect.c_str());

getline(input,xsect);
cross_sect_c2f = atof(xsect.c_str());
getline(input,xsect);
cross_sect_s2f = atof(xsect.c_str());
getline(input,xsect);
cross_sect_cf = atof(xsect.c_str());
getline(input,xsect);
cross_sect_sf = atof(xsect.c_str());

getline(input,dummy);
epsl = atof(dummy.c_str());
getline(input,dummy);

W = atof(dummy.c_str());
//cout << W << "\n";

//if the point is the first or the last then the width of the bin is smaller 
if ((is12==1)||(is12==10)) ds12=ds12_tmp/2;
//if ((is12==16)) cout << ds12 << "\n";

if ((is23==1)||(is23==10)) ds23=ds23_tmp/2;
//if ((is23==14)) cout << ds23 << "\n";

if ((ialpha==1)||(ialpha==8)) dalpha=dalpha_tmp/2+0.01;
//if ((ialpha==2)) cout << dalpha << "\n";


//left and right edge for theta if the point is not first or last
th_l = th_min + dtheta/2.+(itheta - 2.)*dtheta;
th_r = th_min + dtheta/2.+(itheta -1.)*dtheta;

//left and right edge for theta if the point is first or last
if ((itheta==1)) th_l = th_min-0.01;
if ((itheta==1)) th_r = th_min+dtheta/2.;

if ((itheta==8)) th_l = th_max - dtheta/2.;
if ((itheta==8)) th_r = th_max+0.01;




//if ((is12==2)&&(itheta==2)&&(ialpha==2)) cout << is23<< "    "<< "ds23 = " <<ds23 << "\n";

//if ((is23==2)&&(itheta==2)&&(ialpha==2)) cout << is12<< "    "<< "ds12 = " <<ds12 << "\n";

//if ((is23==2)&&(is12==2)&&(itheta==2)) cout << ialpha<< "    "<< "dalpha = " <<dalpha << "\n";

if ((is12==2)&&(is23==2)&&(ialpha==2)) cout << itheta<< "    "<<"th_l = "<< th_l <<", th_r = "<<th_r<<"  " << "   "<< ", th_r - th_l = "<<th_r-th_l<<  "\n";



cross_sect = cross_sect_t+epsl*cross_sect_l;

//cross_sect = cross_sect_t;
//cross_sect = epsl*cross_sect_l;
h_inv_m12->Fill(sqrt(S12_val),2*sqrt(S12_val)*cross_sect*(cos(th_l)-cos(th_r))*ds23*dalpha*(2*3.1415));
h_inv_m23->Fill(sqrt(S23_val),2*sqrt(S23_val)*cross_sect*(cos(th_l)-cos(th_r))*ds12*dalpha*(2*3.1415));
h_alpha->Fill(ALP_val,cross_sect*(cos(th_l)-cos(th_r))*ds12*ds23*(2*3.1415));
h_theta->Fill(TH_val,cross_sect*ds12*ds23*dalpha*(2*3.1415));



Xsect_int = Xsect_int + cross_sect*(cos(th_l)-cos(th_r))*ds12*ds23*dalpha; 


};
};
};
};
};



Xsect_int = Xsect_int*(2*3.1415);
//std::ofstream ofs ("qwqwqw.txt", std::ofstream::out);

//ofs << W << "   " << Xsect_int << "\n";


cout << W <<"  " << Xsect_int << "\n";

input.close();



c->cd(1);
c->cd(1)->SetBottomMargin(0.2);
c->cd(1)->SetLeftMargin(0.2);
c->cd(1)->SetTopMargin(0.15);

gr_m12->SetMarkerStyle(21);
gr_m12->SetMarkerSize(1.3);
gr_m12->SetMarkerColor(kBlue);
gr_m12-> SetMinimum(2.);
gr_m12->SetTitle(" ");
gr_m12->GetYaxis()->SetLabelSize(0.08);
gr_m12->GetXaxis()->SetLabelSize(0.08);
gr_m12->GetXaxis()->SetTitle("M_{#pi^{+}#pi^{-}} (GeV)");
gr_m12->GetYaxis()->SetTitle("d#sigma/dM (#mub/GeV)");
gr_m12->GetYaxis()->SetTitleSize(0.08);

gr_m12->GetXaxis()->SetTitleSize(0.08);

gr_m12->GetYaxis()->SetNdivisions(6);
gr_m12->GetXaxis()->SetNdivisions(6);


gr_m12->SetMaximum(200.);
//gr_m12->SetMinimum(20.);
gr_m12->Draw("Ap ");

h_inv_m12->SetMarkerStyle(20);
h_inv_m12->SetMarkerSize(1.3);
h_inv_m12->Draw("p same");


//--------------------------------------------------------
c->cd(2);
c->cd(2)->SetBottomMargin(0.2);
c->cd(2)->SetLeftMargin(0.2);
c->cd(2)->SetTopMargin(0.15);

gr_m23->SetMarkerStyle(21);
gr_m23->SetMarkerSize(1.3);
gr_m23->SetMarkerColor(kBlue);
gr_m23-> SetMinimum(2.);
gr_m23->SetTitle(" ");
gr_m23->GetYaxis()->SetLabelSize(0.08);
gr_m23->GetXaxis()->SetLabelSize(0.08);
gr_m23->GetXaxis()->SetTitle("M_{#pi^{+}p} (GeV)");
gr_m23->GetYaxis()->SetTitle("d#sigma/dM (#mub/GeV)");
gr_m23->GetYaxis()->SetTitleSize(0.08);

gr_m23->GetXaxis()->SetTitleSize(0.08);

gr_m23->GetYaxis()->SetNdivisions(6);
gr_m23->GetXaxis()->SetNdivisions(6);



gr_m23->SetMaximum(300.);
gr_m23->Draw("Ap ");

h_inv_m23->SetMarkerStyle(20);
h_inv_m23->SetMarkerSize(1.3);
h_inv_m23->Draw("p same");
//------------------------------------------------------------
c->cd(3);
c->cd(3)->SetBottomMargin(0.2);
c->cd(3)->SetLeftMargin(0.2);
c->cd(3)->SetTopMargin(0.15);

gr_th->SetMarkerStyle(21);
gr_th->SetMarkerColor(kBlue);
gr_th-> SetMinimum(2.);

gr_th->SetMarkerStyle(21);
gr_th->SetMarkerSize(1.3);
gr_th->SetMarkerColor(kBlue);
gr_th-> SetMinimum(2.);
gr_th->SetTitle(" ");
gr_th->GetYaxis()->SetLabelSize(0.08);
gr_th->GetXaxis()->SetLabelSize(0.08);
gr_th->GetXaxis()->SetTitle("#theta_{#pi^{-}} (rad)");
gr_th->GetYaxis()->SetTitle("d#sigma/d(-cos #theta) (#mub/rad)");
gr_th->GetYaxis()->SetTitleSize(0.08);

gr_th->GetXaxis()->SetTitleSize(0.08);

gr_th->GetYaxis()->SetNdivisions(6);
gr_th->GetXaxis()->SetNdivisions(6);


gr_th->SetMinimum(10.);

gr_th->GetXaxis()->SetRangeUser(0.,3.115); 
gr_th->Draw("Ap ");

h_theta->SetMarkerStyle(20);
h_theta->SetMarkerSize(1.3);
h_theta->Draw("p same");

c->cd(4);
c->cd(4)->SetBottomMargin(0.2);
c->cd(4)->SetLeftMargin(0.2);
c->cd(4)->SetTopMargin(0.15);


gr_alp->SetMarkerStyle(21);
gr_alp->SetMarkerColor(kBlue);
gr_alp-> SetMinimum(2.);

gr_alp->SetMarkerStyle(21);
gr_alp->SetMarkerSize(1.3);
gr_alp->SetMarkerColor(kBlue);
gr_alp-> SetMinimum(2.);
gr_alp->SetTitle(" ");
gr_alp->GetYaxis()->SetLabelSize(0.07);
gr_alp->GetXaxis()->SetLabelSize(0.07);
gr_alp->GetXaxis()->SetTitle("#alpha_{#pi^{-}} (rad)");
gr_alp->GetYaxis()->SetTitle("d#sigma/d(#alpha) (#mub/rad)");
gr_alp->GetYaxis()->SetTitleSize(0.08);

gr_alp->GetXaxis()->SetTitleSize(0.08);

gr_alp->GetYaxis()->SetNdivisions(6);
gr_alp->GetXaxis()->SetNdivisions(6);

gr_alp->GetXaxis()->SetRangeUser(0.,6.26); 
gr_alp->SetMinimum(3);
gr_alp->Draw("Ap ");

h_alpha->SetMarkerStyle(20);
h_alpha->SetMarkerSize(1.3);

h_alpha->Draw("p same");
ostringstream qqq;
//---------------------
MyFile1->cd();
qqq << "h_odn_inv_m12_14625";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist3);
qqq.str("");


qqq << "h_odn_inv_m23_14625";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist4);
qqq.str("");


qqq << "h_odn_theta_2_14625";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist2);
qqq.str("");

qqq << "h_odn_alpha_14625";

cout << qqq.str().c_str() <<"\n";
gDirectory->GetObject(qqq.str().c_str(),hist1);
qqq.str("");



c->cd(1);
hist3->Scale(2./5000000.*100./((1.4625-0.938)-(0.13957+0.13957)+0.04));

hist3->SetLineWidth(2.);
hist3->SetLineColor(kBlack);
hist3->Draw("same");

c->cd(2);
hist4->Scale(2./5000000.*100./((1.4625-0.938)-(0.13957+0.13957)+0.04));
hist4->SetLineWidth(2.);
hist4->SetLineColor(kBlack);
hist4->Draw("same");


c->cd(3);
hist2->Scale(2./5000000./2.);
hist2->SetLineWidth(2.);
hist2->SetLineColor(kBlack);
hist2->Rebin();
hist2->Draw("same][");


c->cd(4);
hist1->Scale(2./5000000.*100./4./3.14);
hist1->SetLineWidth(2.);
hist1->SetLineColor(kBlack);
hist1->Rebin();
hist1->Draw("same][");

c->cd();
newpad = new TPad("newpad","a transparent pad",0.,0.,1.,1.);
 newpad->SetFillStyle(4000);
 newpad->Draw();
  newpad->cd();
 TLatex tex;
 qqq.str("");
qqq << "Q^{2} =  0.425 GeV^{2}, W = 1.4625 GeV";
 tex.SetTextSize(0.042);
 tex.DrawLatex(0.3,0.955,qqq.str().c_str());
};
