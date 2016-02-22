#include <iostream>
#include<stdio.h>
//ingresar un numero netre 50 y 100 luego preguntar si desea continuar al final del ciclo debera presentar el promedio
// de los numeros entre 80 y 100 y cual fue el numero mayor.
using namespace std;


int main()
{int num,mayor=0,suma=0,conta=0,contaPar;
double promedio;
  char resp;
  do
  { do
      {cout<<"ingresar un numero entre 50-100...>";
      cin>>num;
      }while((num<50) or (num>100));
        _flushall();
      do
      {
           cout<<"desea continuar...:";
           cin.get(resp);
        _flushall();
      }while((toupper(resp)!='S') and (toupper(resp)!='N'));
      suma= suma + num;
      if(num>mayor)
      {
          mayor= num;
      }
      conta++;
      if (num%2==0)
      {
          contaPar++;
      }

  } while ((toupper(resp)=='S'));
  promedio= suma/conta;
  cout<<"promedio"<<promedio<<"\n";
  cout<<"mayor es"<<mayor<<"\n";
  cout<<"contador de pares"<<contaPar<<"\n";
    return 0;
}
