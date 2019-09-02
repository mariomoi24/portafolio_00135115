#include<iostream>
using namespace std;

void calculos (int num, int *doble, int *triple){
*doble = 4 *num;
*triple= 9 *num;
}
int main()
{
	
	int numero = 5, doble = 0 , triple=0;
	
	
	calculos (numero, &doble, &triple);
	
	cout<<"el doble de 5 es"<<doble<< endl;
	cout<<"el triple de 5 es"<<triple<< endl;
	
	return 0;
	
}