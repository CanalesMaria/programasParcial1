#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Generar 10 numeros aleatorios, presentarlos en la pantalla. Al final presentar el numero mayor y el promedio
de los 10 numeros.Generar los numeros entre 30-80 */
int main()
{
   srand(time(0));
    int i;
    int numero,maxi=0,contador=0,suma=0,promedio;

    for(i=0;i<=10;i++)
    {
       numero = 30 + rand() % (80-30);
      cout<<"valor de numero  " <<i<< "es"<<numero<<"\n";
      if (numero>maxi)
      {
          maxi=numero;

      }
      contador++;
      suma+=numero; //suma=suma+ numero;
    }
    promedio= suma/contador;
    cout<<"promedio"<<promedio<<"\n";
    cout<<"numero mayor es"<<maxi<<"\n";
    system("PAUSE");
}
