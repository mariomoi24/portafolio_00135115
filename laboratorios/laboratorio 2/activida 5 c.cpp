#include <iostream>
using namespace std;

void mover_torres(int a,int origen, int intermedio, int final){
  if (n>1){
     
      mover_torres(n-1, origen,intermedio, final);
      
      cout<< "\nmueve el disco" << N << "de" << origin <<"a"<< intermedio <<endl;
      mover_torres(n-1, origen,intermedio, final);
     
      }  
    
    if (1==N){
        
     cout<<"\n mueve el disco 1 de"<< origin <<"a"<< intermedio <<endl; 
      
        }
    
    }

int main()
{
 int discos;
 
 cout<<"n\ete programa resuelve el problema de las trres de hanoi";
 cout<<"mediandte la recursion "<<endl;
 cout<<"n\introdusca el numero de los discos que dece mover";
 cout<<"de la pila 1 a la 3"<<endl;
 cin>> discos;
 
 mover_torres(n-1, origen,intermedio, final);
    
     cout<< endl <<;



 return  0;
}
