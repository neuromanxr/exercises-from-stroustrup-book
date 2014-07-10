#include <iostream>
#include <vector>
#include "c:\mingw\include\std_lib_facilities.h"

using namespace std;

int main()
{
    cout << "Enter temperature: ";
    vector<double>Temps;
    double Temp;
    while(cin>>Temp)
        Temps.push_back(Temp);

    //average
    double sum = 0;
    for(unsigned int i = 0; i < Temps.size(); ++i)
        sum += Temps[i];
    cout << "Average temperature: " << sum/Temps.size() << endl;

    //median
    sort(Temps.begin(),Temps.end());

    cout << "Median temperature: " << Temps[Temps.size()/2] << endl;

    return 0;
}
