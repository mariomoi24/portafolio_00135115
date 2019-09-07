#include <iostream>
using namespace std;


int recusion(int);


int main()
{
  
  cout<<"la recucion es (7):"<<endl;
  
  
  return 0;
}

int recursion (int n)
{ if(n==0){ 
    n = 1;
    }else { 
        
     n= recursion(n-1);   
        }

