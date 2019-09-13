#include <iostream>
using namespace std;



int mcd(int a,int b){   
    if ((a % b) == 0){  
        return b;
   }
    mcd(a, (a%b));
}
    
int main(){  
    
    int a, b;
    cout<<"se nos dara el resultado del mcd" << "se retorna si es cero el residuo" << "\n"<<endl;
    cin>>a;
    cin>>b;
    
    cout << mcd(a,b);
    
    return 0;
    
}
    
