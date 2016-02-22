#include <iostream>
#include <time.hn>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{   srand(time(0));
    int i;
    int n,numero;
    cout<<"Ingresar numero de veces...:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       numero = 1 + rand() % (100-1);
        cout<<"valor de la I es  " <<i<<"\n valor del numeroes : "<<numero;
    }
    return 0;
}
