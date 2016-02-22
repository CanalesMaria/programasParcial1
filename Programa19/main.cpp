#include <iostream>

using namespace std;

   // 2. encontrar los multiplos de 3 entre 100-1000.
int main()
{ int i=0;
    for(i=100;i<=1000;i++)
{
    if (i%3==0)
    {
        cout<<"numero"<<i<<"\n";
    }
}

    return 0;
}
