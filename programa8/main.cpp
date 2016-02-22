#include <iostream>

using namespace std;
/*Ingresar la nota acumulada y examen, luego obtener la nota final y ajustarla a 60 si se ecuentra entre 57-59 a 60,
presentar la nota y el estado si es aprobado o reprobado*/
int na,ne,nf;

int main()
{
    cout << "ingresar nota acumulada.....";
    cin>>na;
    cout<<"ingresar nota examen";
    cin>>ne;
    nf= (na + ne);
    if ((nf>= 57) and (nf<=59))
    {
      nf = 60;
    }
    cout<<"nota final es" <<nf;
   if (nf>=60)
   {
    cout<<" Aprobado \n";
   }
   else
    {
         cout<< " Reprobado \n";
    }
    return 0;
}
