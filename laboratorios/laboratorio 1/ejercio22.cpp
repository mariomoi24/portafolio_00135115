// Example program
#include <iostream>
using namespace std;

int main()
{
  int matriztridiagonal[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
  int filas=5;
  int columnas=5;
  for (int i=0; i<filas; i++){
      
      cout<<"los datos de la fila son:"<<endl;
      
      for (int j=0; j<columnas; j++){ 
          
          cout<<"los datos de la columna son:"<<endl;
          if(i==j){ 
              
             cin>> matriztridiagonal[i][j];
              
              }else if(i==j-1){
                  
                  cin>>matriztridiagonal[i][j];
                  
                  }else if(j==i-1){
                       
                       cin>>matriztridiagonal[i][j];
                      
                      }
          
          
          }
      
  }
 
 









return 0;


}
