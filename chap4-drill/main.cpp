#include <iostream>
#include "c:\mingw\include\std_lib_facilities.h"

using namespace std;



int main()
{
    cout << "Enter integers: ";
    double int1 = 0;
    double Large = 0;
    double Small = 0;
    string Measure = "?";
    vector<string>Units;
    //Units[0] = "cm";
    //Units[1] = "m";
    //Units[2] = "in";
    //Units[3] = "ft";

    while(cin >> int1 >> Measure){

            if(Measure == "cm" || "m" || "in" || "ft")
                Units.push_back(Measure);

                if(int1 > Large){
                Large = int1;
                cout << "Largest so far: " << Large << Units[0] << endl;
                cout << "Smallest so far: " << Small << Units[0] << endl;
                }
                else if(int1 < Large){
                    Small = int1;
                    cout << "Largest so far: " << Large << Units[0] << endl;
                    cout << "Smallest so far: " << Small << Units[0] << endl;
                }



        }

     return 0;
}
