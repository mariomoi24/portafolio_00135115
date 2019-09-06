// Example program
#include <iostream>
using namespace std;

int main()
{
   int a=10, b=0, c;
   int i;
   int r[10];
  
  
  
  cout <<"ingresa los valores deseados"<<endl;
  
  for (i=0; i<a; i++){ 
      
      cout<<"ingresa data:";
      cin>>r[i];
      
      b=b+r[i];
      
      
     }
  
  c=(float)b/a;
   
   
  cout<<" la sumatoria es:"<<b<<endl;
  cout<<" el promedio es:"<<c<<endl;
  
   return 0;
}
