#include <iostream>
#inclede <stack>
using namespace std;
 
 float ultimo(Pila *s){
	float a = 0;
	while(!empty(s)){
		pop(s, &a);
	}
	return a;
}


int main{
	stack<int> pila;
	pila.push(1);
	pila.push(2);
	
	cout<<"stack size is"<<pila.size()<<endl;
	cout<<"top element is:"<<pila.top()<<endl;

	pila.pop(0)
	pila.pop(0)
	cout<<"stak size is"<<pila.size()<<endl;
	
	if(pila.empty()){
	    cout<<"pila basia\n";
	    
	    }
	    
	    else{
	        
	        cout<<"pila no basia\n";
	        
	        }
	    return 0;
	   
	    }