#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*
ingresar un numero y dterminar su signo si es cero, positivo o negativo*/
int main()
{int num;
printf("Ingresar un numero....>");
scanf("%d",&num);
if (num>0)
{
    printf("el numero es positivo\n");
}
else if (num<0)
{
    printf("El numero es negativo\n");
}
else
{
    printf("El numero es Cero\n");
    system("PAUSE");


}
    return 0;
}

