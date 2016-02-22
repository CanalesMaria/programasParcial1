#include <iostream>

using namespace std;
/*1. producir la siguiente salida
     *****
     ****
     **
     *
     usando ciclos for anidados.

    3. En arduino usando el sensor ultrasonico
    encender un led cuando este se encuentre entre 5 cm y 10 cm*/


int main()
{ int i=0;
int k;
for (i=5;i>=1;i--)
    {
        for (k=0;k<i;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
