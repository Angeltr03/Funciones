//PROGRAMA QUE SUMA DOS NUMEROS//
#include<iostream>

using namespace std;

int sumas(int x, int y);

int main()

{
    int x,y,z;

    cout<< "Ingresa el primer numero:" <<endl;
    cin>>x;
    cout<< "Ingresa el segundo numero:" <<endl;
    cin>>y;
   sumas(x,y);

}
int sumas(int x , int y )
{
    int z;
    z=x+y;
    cout<< "El resultado de la suma es:" <<endl<<z;



}


