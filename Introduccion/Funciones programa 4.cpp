//PROGRAMA QUE LEE 3 NUMEROS Y DETERMINA CUAL ES EL MAYOR//

#include<iostream>

using namespace std;
void Max(int a, int b);

int main()

{
    int n1,n2,n3;

    cout<<"Introduce el primer numero:"<<endl;
	cin>>n1;
	cout<<"Introduce el segundo numero:"<<endl;
	cin>>n2;
	cout<<"Introduce el tercer numero:"<<endl;
	cin>>n3;

	int Max = max(max(n1,n2),n3);
	cout<<"El numero mayor es:"<<endl<<Max;

	return 0;
}


	int max(int a, int b)
{
    int c;
    if (a>b)
    {

        c=a;
    }
    else
    {
            c=b;
    }

    return c;

}
