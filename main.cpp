#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <sstream>

#include "gen_alt.h"
#include "sum_cdi.h"
using namespace std;

int main(int argc,char** argv)
{

    cout<<"voyeristic behaviours and others have fun \n";
    cout<<"its a methodology almost automatic of_theLolos \n";
    long long int number_o=0;
    long long int number_t=0;
    cout<<"enter number one , number two\n";
    number_o=stoll(argv[1]);
    number_t=stoll(argv[2]);

    long long int pros=0;
    long long int pol=0;
    long long int diai=0;
    long long int diai_t=0;
    long long int afair=0;
    long long int afair_t=0;

    pros=number_o+number_t;
    pol=number_o*number_t;
    if(number_t>number_o){diai=number_t/number_o; afair=number_t-number_o;}
    if(number_o>number_t){diai=number_o/number_t; afair=number_o-number_t;}
    if(number_t<number_o){diai_t=number_t/number_o; afair_t=number_t-number_o;}
    if(number_o<number_t){diai_t=number_o/number_t; afair_t=number_o-number_t;}

    sum_cdi *main_mcdi=new sum_cdi();
    cout<<"prosthesi ::== " << pros <<" with sum of digit ::== " << main_mcdi->cdis(pros,3) <<"\n";
    cout<<"pollaplasiamos ::== " << pol <<" with sum of digit ::== " << main_mcdi->cdis(pol,3)<< "\n";
    cout<<"diairesi ::== " << diai <<" with sum of digit ::== "<< main_mcdi->cdis(diai,3) <<"\n";
    cout<<"diairesi_t ::== " << diai_t << " with sum of digit ::== " << main_mcdi->cdis(diai_t,3)<<"\n";
    cout<<"afairesi ::== " << afair <<" with sum of digit ::== "<< main_mcdi->cdis(afair,3)<<"\n";
    cout<<"afairesi_t ::== " << afair_t<< " with sum of digit ::== " << main_mcdi->cdis(afair_t,3) <<"\n";


    cout<<"\n";
    gen_alt *gna=new gen_alt();
    gna->g_a(number_o);
    cout<<"\n";
    gna->g_a(number_t);
    cout<<"\n";


    cout<<"Choose a combination based on the main number digits \n";
    cout<<"\n";
    cout<<"For number one : \n";
    cin>>number_o;
    cout<<"For number two : \n";
    cin>>number_t;

    cout<<"Generating new result set \n";
    pros=number_o+number_t;
    pol=number_o*number_t;
    if(number_t>number_o){diai=number_t/number_o; afair=number_t-number_o;}
    if(number_o>number_t){diai=number_o/number_t; afair=number_o-number_t;}
    if(number_t<number_o){diai_t=number_t/number_o; afair_t=number_t-number_o;}
    if(number_o<number_t){diai_t=number_o/number_t; afair_t=number_o-number_t;}

    cout<<"\n";
    cout<<"prosthesi ::== " << pros <<" with sum of digit ::== " << main_mcdi->cdis(pros,3) <<"\n";
    cout<<"pollaplasiamos ::== " << pol <<" with sum of digit ::== " << main_mcdi->cdis(pol,3)<< "\n";
    cout<<"diairesi ::== " << diai <<" with sum of digit ::== "<< main_mcdi->cdis(diai,3) <<"\n";
    cout<<"diairesi_t ::== " << diai_t << " with sum of digit ::== " << main_mcdi->cdis(diai_t,3)<<"\n";
    cout<<"afairesi ::== " << afair <<" with sum of digit ::== "<< main_mcdi->cdis(afair,3)<<"\n";
    cout<<"afairesi_t ::== " << afair_t<< " with sum of digit ::== " << main_mcdi->cdis(afair_t,3) <<"\n";


    return 0;
}
