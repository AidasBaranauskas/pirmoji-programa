#include <iostream>
//#include <fstream>
#include <string>


using namespace std;

int main()
{
    string vardas, pasisveik, tarpas, krastas;
    cout<<"iveskite megstamiausio mokytojo varda"<<endl;
    cin>>vardas;
    cout<<"iveskite remelio dydi"<<endl;
    int x,y;
    cin>>y;
    if(y<0)y*=-1;
    y-=(y+1)%2;
    cout<<y<<endl;
    pasisveik="* Sveikas, "+vardas+"! *";
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
    for(int i=1;i<y-1;i++)
    {
        if(i==y/2)cout<<pasisveik<<endl;
        else cout<<tarpas<<endl;
    }
    cout<<krastas<<endl;
    return 0;
}
