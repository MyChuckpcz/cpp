#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    
    
    long double x[20]={0};
    long double y[20]={0};
    long double a[20]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    double temp;

    ifstream plik;
    plik.open("test.txt");
    if(!plik.good())
    {
        cout<<"Nie udalo sie otworzyc pliku"<<endl;
        return 0;
    }
    for (int i = 0; i < 20; i++)
    {
        plik>>temp>>x[i]>>y[i];
    }
    plik.close();

    for (int i = 0; i < 20; i++)
    {
        cout<<x[i]<<" "<<y[i]<<endl;
    }
    
    

    for (int i = 0; i < 20; i++)
    {
        for(int j=0;j<20;j++)
        {
            if(i!=j)
            {
                a[i]*=(x[i]-x[j]);
            }
        }
        a[i]=y[i]/a[i];
    }
    
    for (int i = 0; i < 20; i++)
    {
        cout<<a[i]<<endl;
    }

    for(int i=0;i<20;i++)
    {
        cout<<"("<<a[i]<<")";
        for(int j=0;j<20;j++)
        {
            if(i!=j)
            {
                cout<<"*(x-"<<x[j]<<")";
            }
        }
        cout<<"+";
    }

    cout<<endl;
    return 0;
}