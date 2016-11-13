#include <iostream>

using namespace std;

int main()
{
    float n;
    int m>=0;
    int i, pot;
    cout << "programma che premette di calcolare la potenza n alla m " << endl;
    cout<<"inserire la base=n"<<endl;
    cin>>x;
    cout<<"inserire l'esponente=m"<<endl;
    cin>>y;

    if(m==0)
       cout<<"il risultato di una potenza che ha come esponente 0 e' 1"<<endl;
    if(m==1)
        cout<<"il risultato di una potenza che ha come esponente 1 e'"<<x<<endl;
        else
        {
            pot=n*n;
        for(i=0;i=m;i++)
        {
            pot=pot*n;
        }
        }
        if(n<0)
        cout<<"il risultato e'"<<-pot<<endl;
        if(n>0)
        cout<<"il risultato e'"<<pot<<endl;
    return 0;
}
