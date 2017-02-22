#include <iostream>
using namespace std;
int invertire(int,int);
int main(){
int a; //a=numero//
int b=0;//b=inverso//
cout<<"inserisci un numero intero"<<endl;
cin>>a;
cout<<"il numero inverso e'"<<invertire(a,b)<<endl;
}

int invertire(int x,int y) //x=a=numero e y=b=inverso
{
   if(x==0) return y;
   else{y=y*10+x%10; return invertire(x/10,y);}
       //inverso=inverso*10+numero%10//
       //return invertire(numero/10, inverso)//
}

