#include <iostream>

using namespace std;


int square(int x)

{
    int value = 0;
    value = 0;
    for(int add = x; add > 0; add--)
    {
        value += x;
    }

    return value;

}


int main()
{
    for(int i = 0; i<100; ++i){
    cout << i << '\t' << square(i) << endl;
    }

}
