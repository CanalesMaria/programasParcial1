#include <iostream>

using namespace std;
/* Ingresar el nombre, las horas y el turno usando el procedimiento.
luego usando una funcion devolver el pago por hora de acuerdo al turno.
turno
1     100
2     120
3     150
elaboar un procediemiento para calcular el pago de horas trabajadas del empleo y presentarlo*/
int hr, turn;
char nombre[30];
double pago;
double porpago;

void Datos(int &hr, int &turn,char nombre[])
  {
      cout<<"Nombre...:";
      cin.getline(nombre,30);
      cout<<"Horas trabajadas...:";
      cin>>hr;

      do
      {
          cout<<"Turno...:";
          cin>>turn;
      }
      while(!(turn>=1) and (turn<=3));
      }
       double xpago(int turn)
        {


     if(turn==1)
     {
         return 100;
     }
     else if(turn==2)
        {
    return 150;
     }
     else
        {
         return 200;
     }

        }


  void TotalPago(double &pago,double &porpago,int &hr, int &turn)
  {
  porpago=xpago(turn);
  pago=porpago*hr;


     }

int main()

{
Datos(hr, turn, nombre);
TotalPago(pago,porpago,hr,turn);

cout<<"El pago es de...:"<<pago;
    return 0;

}
