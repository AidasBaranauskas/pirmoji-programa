#include <iostream>
#include <string>


using namespace std;

int main()
{
    string vardas, zodis[3];
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
        zodis[0]="* Sveikas, "+vardas+"! *";
    else
        zodis[0]="* Sveika, "+vardas+"! *";
    x=zodis[0].size();
    zodis[1]="*";
    for(int i=1; i<x-1; i++)
    {
        zodis[1]+=" ";
    }
    zodis[1]+="*";

    for(int i=0; i<x; i++)
        zodis[2]+="*";

    cout<<zodis[2]<<endl;
    for(int i=1; i<y-1; i++)
    {
        if(i==y/2)
            cout<<zodis[0]<<endl;
        else
            cout<<zodis[1]<<endl;
    }
    cout<<zodis[2]<<endl;
    return 0;
}
