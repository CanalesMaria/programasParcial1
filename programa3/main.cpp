#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/* ingrese la nota examen y la nota acumulada en base a 100.
la nota examen vale 70% y la nota acumulada 30% */
int main()
{
   double ne,na,nf;
printf("ingresar nota examen ...>");
scanf("%lf",&ne);
printf("ingresar nota acumulada ...>");
scanf("%lf",&na);
nf= (na* 0.3) + (ne*0.7);
if (nf>=60)
{
printf("Estado de la nota :Apr\n");
}
else
{
printf("Estado de la nota :Rep\n");
printf("Necesita tutoria\n");
}
printf("nota final %lf \n",nf);
system("PAUSE");

    return 0;
}
