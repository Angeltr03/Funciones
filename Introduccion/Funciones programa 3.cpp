//PROGRAMA QUE LEE 3 NUMEROS Y DETERMINA CUAL ES EL MAYOR//

#include<iostream>

using namespace std;
int Max(int a,int b );

int main()
{
	int n1,n2,n3;

	cout<<"Introduce el primer numero:"<<endl;
	cin>>n1;
	cout<<"Introduce el segundo numero:"<<endl;
	cin>>n2;
	cout<<"Introduce el tercer numero:"<<endl;
	cin>>n3;

	int max1 = max(n1,n2);
	int max2 = max(max1,n3);
	cout<<"El numero mayor es:"<<endl<<max2;

	return 0;
}

int Max(int a, int b)
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


