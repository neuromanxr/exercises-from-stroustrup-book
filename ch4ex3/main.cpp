#include <std_lib_facilities.h>

using namespace std;

int main()
{
    vector<double>dist;
    double input=0;
    double large=0;
    double small=0;
    double sum=0;
    double mean=0;
    int city1=0;
    int city2=0;

    cout << "Enter distances: " << endl;

    while(cin>>input)
        dist.push_back(input);
        sort(dist.begin(), dist.end());
    for(int i=0; i<dist.size(); ++i){

        if(small == 0 && dist[i]>small){
            small=dist[i];
            large=dist[i];}
            else if(dist[i]>small){
                large=dist[i];}
                else if(dist[i]<small){
                    small=dist[i];}
                    else if(dist[i]>large){
                        large=dist[i];}


    cout << dist[i] << " ";
    sum+=dist[i];}

    //int city1=0;
    //int city2=0;
    cout << "Enter city number between: " << "0 " << dist.size() << endl;
    cin >> city1;
    cin >> city2;
    //while(cin>>city1>>city2){
    mean=dist[city1]+dist[city2]/2;
    cout << "Average of 2 cities: " << mean << endl;


    cout << endl;
    cout << "Largest: " << large << endl;
    cout << "Smallest: " << small << endl;
    //cout << "Average of 1st 2 cities: " << mean << endl;
    cout << sum << endl;
}
