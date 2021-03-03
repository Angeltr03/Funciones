//PROGRAMA QUE CALCULA EL FACTORIAL DE UN NUMERO//

#include<iostream>

using namespace std;
int factorial(int a);

int main()
{


int n1;
    cout<<"Introduczca el valor del numero:"<<endl;
    cin>>n1;

    int fact = factorial(n1);
    cout<<"El factorial es:"<<endl<<fact;

    return 0;

}


int factorial(int a)
{
    int i;
    int resultado = 1;
    for (i = 1; i <= a; i++)
    {
            resultado *=i;


}

return resultado;
}
