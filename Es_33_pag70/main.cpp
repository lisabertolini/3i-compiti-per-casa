#include <iostream>

using namespace std;

int main()
{
    int x,y,i,pot;
    cout << "programma che premette di calcolare la potenza x alla y " << endl;
    cout<<"inserire la base=x"<<endl;
    cin>>x;
    cout<<"inserire l'esponente=y"<<endl;
    cin>>y;

    if(m==0)
       cout<<"il risultato di una potenza che ha come esponente 0 e' 1"<<endl;
    if(m==1)
        cout<<"il risultato di una potenza che ha come esponente 1 e'"<<x<<endl;
        else
        {
            pot=x*x;
        for(i=0;i=y;i++)
        {
            pot=pot*x;
        }
        }
        cout<<"il risultato e'"<<pot<<endl;
        
    return 0;
}

