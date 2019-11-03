#include <iostream>
using namespace std;

class ColaCircular{
	
	private int frente;
	int maximo;
	int n;
	int vcola[];
	
   void ColaCircular(int tamano){
	
	maximo= tamano;
	vcola=new int[maximo];
	frente=0;
	n=0;
}



   public void entradaElemento(int dato){
	
	if(n==maximo){
		cout<<"Cola llena";
	}
	else {
		int ubicacion= (frente + n)%maximo;
		vcola[ubicacion]= dato;
		cout<<"frente + frente + n+n+ maximo + maximo"<<endl;
		n++;
		
			}
	
	
	 public void salidaElemento (){
		
		int axu= vcola[frente];
		cout<<"Sale elemento "<<+axu;
		frente=(frente+1)%maximo;
		n--;
		cout<<"frente + frente + n + n"<<endl;
		return 0;
		
	}