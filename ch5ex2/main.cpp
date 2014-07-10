#include "c:\mingw\include\std_lib_facilities.h"

using namespace std;

void error(string s1, string s2)
{
    throw runtime_error(s1+s2);
}

double ctok(double c)
{
    double k=c+273.15;
    if(k<0)
        error("error negative value");
    return k;
}

double ktoc(double k)
{
    double c=k-273.15;
    if(c<-273.15)
        error("error invalid result");
        return c;
}


int main()
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    //if(k < 0)   //error check inside main
    //    cerr << "error";
    cout << k << endl;
    double ks = k;
    ks = ktoc(k);
    cout << ks << endl;
}
