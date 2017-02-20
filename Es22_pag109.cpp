#include <iostream>
using namespace std;
int invertire(int,int);
int main(){
int numero;
int inverso=0;
cout<<"inserire un numero intero"<<endl;
cin>>numero;
cout<<"il numero inverso e'"<<invertire(numero,inverso)<<endl;
}

int invertire(int numero,int inverso)
{
   if(numero==0) return inverso;
   else
   {
       inverso=inverso*10+numero%10;
       return invertire(numero/10,inverso);

}
}

