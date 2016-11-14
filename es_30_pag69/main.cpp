#include <iostream>

using namespace std;

int main()
{
    int num, centinaia, decine, unita;
    cout << "inserire un numero"<< endl;
    cin>>num;
    cout<<"il numero e' composto da":<<endl;
    cout<<centinaia<<"centinaia"<<endl;
    cout<<decinde<<"decine"<<endl;
    cout<<unita<<"unita"<<endl;
    do{
    centinaia=num/100;
    decine=(num-centinaia*100)/10;
    unita=num-(centinaia*100+decine*10);
    }while(num<=1000)
    return 0;
}
