#include <iostream>
#include <string>


using namespace std;

int main()
{
    string vardas, pasisveik, tarpas, krastas;
    cout<<"iveskite megstamiausio mokytojo varda"<<endl;
    cin>>vardas;
    cout<<"iveskite remelio dydi"<<endl;
    int x,zy,y;//zy yra laikina reiksme
    cin>>zy;
    y=zy;
    if(y<0)
        y*=-1;//jeigu neigiamas???
    if(y<3)y=3;//jeigu per mazas
    if(y%2==0)y--;//uztikrinama simetrija
    if(zy!=y)cout<<"duotas dydis netinkamas ir buvo pakeistas: "<<y<<endl;

    if(vardas[vardas.size()-1]=='s')
        pasisveik="* Sveikas, "+vardas+"! *";
    else
        pasisveik="* Sveika, "+vardas+"! *";
    x=pasisveik.size();
    tarpas="*";
    for(int i=1; i<x-1; i++)
    {
        tarpas+=" ";
    }
    tarpas+="*";

    for(int i=0; i<x; i++)
        krastas+="*";

    cout<<krastas<<endl;
    for(int i=1; i<y-1; i++)
    {
        if(i==y/2)
            cout<<pasisveik<<endl;
        else
            cout<<tarpas<<endl;
    }
    cout<<krastas<<endl;
    return 0;
}
