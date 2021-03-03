//PROGRAMA QUE LEE 2 NUMEROS Y DETERMINA CUAL ES EL MAYOR//

#include<iostream>

using namespace std;
void Max(int n1, int n2);

int main()

{
    int n1,n2;

    cout<<"Ingrese el primer numero"<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>n2;
    Max(n1,n2);


    }
    void Max(int a, int b)
    {
      if(a>b)
      {
         cout<<"El numero mayor es:"<<a;
         }
         else if(a<b)
         {
             cout<<"El numero mayor es:"<<b;
         }
         else
            cout<<"Error"<<endl;



    }








