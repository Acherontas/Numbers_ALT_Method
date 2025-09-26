#include "gen_alt.h"
#include "sum_cdi.h"

gen_alt::gen_alt(){}//ctor
gen_alt::~gen_alt(){}//dtor
gen_alt::gen_alt(const gen_alt& other){}//copy ctor
// handle self assignment//assignment operator
gen_alt& gen_alt::operator=(const gen_alt& rhs){if (this == &rhs) return *this; return *this;}




int gen_alt::g_a(long long int nmb){

  struct st{long long int a;};

  struct mt{long long int m[110];};

  sum_cdi *smcd =new sum_cdi();

  string mlki;
  mlki.clear();
  mlki+=to_string(nmb);
  int mki=0;
  mki=mlki.size()-1;

  char ck;
  int lk=0;
  int xk=0;

  struct st ast[mki];

  for(int i=0;i<=mki;i++){
     cout<< mlki.at(i) << " ";
     ck=mlki.at(i);
     lk=stoi(&ck);
     ast[i].a=lk;
  }
  cout<<"\n";

  struct mt mmt[110];
  int rtsm=0;
  int xop=0;
  int lx=0;
  for(int i=0;i<=mki;i++){
   // cout<<"@i " << i << ast[i].a << " :: ";
    lx=0;xop=0;
     for(int j=0;j<=110;j++){
       smcd->cdi=0;
       smcd->cdll=0;
       rtsm=0;
       //cout<<"sending value for cdi  "<< j <<"  ";
       rtsm=smcd->cdis(j,0);
       //cout<<" returning " << j << " da rtsm " << rtsm <<"  and cdll " << smcd->cdll <<  " ast[i].a " << ast[i].a <<"\n";
       if(rtsm==ast[i].a){
            if(lx==0){mmt[i].m[lx]=rtsm; xop+=1;lx+=1;goto B;}
            if(lx>0){mmt[i].m[lx]=j;xop+=1;lx+=1;}
            B: cout<<"";
       }
       if(smcd->cdll==ast[i].a)
       {
            //cout<<"using i " << i << " and lx " << lx <<" with j "<< j << " ";
            //cout<<"inserting rtsm  " << rtsm <<"  with  cdll " << smcd->cdll <<" ast[i].a " << ast[i].a <<" value " << j <<"\n";
            if(lx==0){mmt[i].m[lx]=rtsm; xop+=1;lx+=1;goto A;}
            if(lx>0){mmt[i].m[lx]=j;xop+=1;lx+=1;}
            A: cout<<"";
       }
     }
  }

  for(int i=0;i<=mki;i++){
  cout<<"\n";
  cout<<"@i  " << i << " number " << ast[i].a << " :: ";
     for(int j=0;j<110;j++){
       if(mmt[i].m[j]!=0){cout<<mmt[i].m[j] << " " ;}
    }
    cout<<"\n";
  }



return 0;
}
