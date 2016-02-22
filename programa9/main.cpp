#include <iostream>

using namespace std;
//presentar los numeros del 1 al 1o usando while
int main()
{   int c=0; int numero; int suma=0; int mayor=0; double promedio;
    while (c<5)
    { c++;
      cout << "numero #" << c <<"...:";
      cin>> numero;
      suma = suma + numero; //suma+=numero;

      if (numero> mayor)
      {
          mayor = numero;
      }


    }
     promedio = ( suma/ 5);
      cout<< "el numero mayor es...:"<<mayor<<"\n";
      cout << " suma de los numeros es...:" <<suma<<"    promedio:" << promedio <<"\n";
      cout << " Final del ciclo\n";
    return 0;
}
