#include <iostream>
#include "c:\mingw\include\std_lib_facilities.h"

using namespace std;

void error(string s1)
{
    throw runtime_error(s1);
}


int main()
{
    vector<int>vinput;
    int input = 0;
    while(cin >> input) {vinput.push_back(input);
        for(int i = 0; i < vinput.size(); ++i)
        cout << vinput[i] << "," << endl;
    }
    if(vinput[0] == 1){
        error("didn't get value")
        }
}

//catch(exception& e){
//    cerr<<"error:"<<e.what()<<endl;
//    keep_window_open();
//    return 1;
//}
//catch(...){
//    cerr<<"Oops: unknown exception!\n";
//    keep_window_open();
//    return 2;
//}
