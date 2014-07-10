#include <std_lib_facilities.h>

using namespace std;

class Token{
public:
    char kind;
    double value;
    Token(char ch)
        :kind(ch),value(0){}
    Token(char ch, double val)
        :kind(ch),value(val){}


};

Token t1('+');
Token t2('8',11.5);

Token get_token();
vector<Token>tok;

int main()
{
    while(cin){
        Token t = get_token();
        tok.push_back(t);
    }
    //...
}
