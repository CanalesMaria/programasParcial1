#include <iostream>
//Ingresar 10 numeros y contar cuantos numeros estan en los siguientes rangos:
// 1-50, 51-80, >81.
using namespace std;

int main()
{
    int num; int mayor=0; int c=0;int c1=0; int c2=0; int c3=0;

while (c<10)
{
    c++;
    cout << "num #" << c <<"...:";
    cin >>num;

    if(num > mayor)
    {
        mayor = num;
    }
    if ((num>0)and(num<51))
        c1++;
    else if((num>50)and(num<81))
     c2++;

    else if (num>80)
        c3++;

    else
    {
        cout<<"nada\n";
    }
}
  cout<<"total numeros de 1-50: "<<c1 <<"\n";
  cout<<"total numeros de 51-80: "<<c2 <<"\n";
  cout<<"total mayor de 81: "<<c3 <<"\n";
  cout<<"El mayor es:" <<mayor <<"\n";
 return 0;

}
