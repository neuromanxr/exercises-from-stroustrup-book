#include <iostream>
#include "c:\mingw\include\std_lib_facilities.h"

using namespace std;

void error(string s)
{
    throw runtime_error(s);
}


int main()
{
    vector<double>temps;

    double temp = 0;
    double sum = 0;
    double high_temp = -1000;
    double low_temp = 1000;

    while(cin >> temp)
        temps.push_back(temp);

    for(int i = 0; i < temps.size(); ++i)
    {
        if(temps[i]>high_temp) high_temp = temps[i];
        if(temps[i]<low_temp) low_temp = temps[i];
        sum += temps[i];
    }

    cout << "High temperature: " << high_temp << endl;
    cout << "Low temperature: " << low_temp << endl;
    cout << "Average temperature: " << sum/temps.size() << endl;


}
