#include <iostream>
using namespace std;
int invertire(int,int);
int main(){
int a;
int b=0;
cout<<"inserisci un numero intero"<<endl;
cin>>a;
cout<<"il numero inverso e'"<<invertire(a,b)<<endl;
}

int invertire(int x,int y)
{
   if(x==0) return y;
   else
   {
       y=y*10+x%10;
       return invertire(x/10,y);

}
}

