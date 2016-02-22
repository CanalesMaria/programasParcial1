#include <iostream>

using namespace std;

int main()
{
    int num; int mayor=0; int c=0; int c1=0; int c2=0; int c3=0; int promedio1=0; int promedio2=0; int promedio3=0; int suma1=0; int suma2=0; int suma3=0; int menor= 9999;

while (c<5)
{
    c++;
    cout << "num #" << c <<"...:";
    cin >>num;

    if(num > mayor)
    {
        mayor = num;
    }
    if(menor < num);
    {
        menor=num;
    }


    if ((num>1)and(num<50))
    {
        c1++ ;
        suma1+=num;
    }
    else if((num>51)and(num<100))
    {
        c2++;
        suma2+=num;
    }
    else if (num>101);
    {
        c3++;
        suma3+=num;
    }


}
    promedio1=(suma1/c1);
    promedio2=(suma2/c2);
    promedio3=(suma3/c3);

  cout<<"total numero de 1-50: "<<c1 <<"\n";
  cout<<"total numeros de 51-100: "<<c2 <<"\n";
  cout<<"total mayor de 101: "<<c3 <<"\n";
  cout<<"El mayor es:" <<mayor <<"\n";
  cout<<"el promedio uno es..."<<promedio1<<"\n";
  cout<<"el promedio dos es..."<<promedio2<<"\n";
  cout<<"el promedio tres es..."<<promedio3<<"\n";
  cout<<"El numero menor es...."<<menor<<"\n";

    return 0;
}
