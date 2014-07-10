#include <iostream>

using namespace std;

void error(string s1)
{

}

int area(int length, int width)
{
    if(length<=0||width<=0) error("area()pre-condition");
    int a = length*width;
    if(a<=0) error("area()post-condition");
    return a;
}


int main()
{
    int x = 0;
    int y = 0;
    cout << "enter values: " << endl;
    cin >> x >> y;
    cout << area(x,y) << endl;

}
