#include <iostream>
#include <string>
using namespace std;

struct Tpila{
	char elements[100];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, char e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, char *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

bool validar(string c){
	bool valid = true;
	Pila unaPila;
	initialize(&unaPila);
	
	for(int i=0; i<c.length(); i++){
		char symb = c[i];
		if(symb=='(')
			push(&unaPila, symb);
		else if(symb==')'){
			if(empty(&unaPila)){
				valid = false;
				break;
			}
			else{
				char i = 'i';
				pop(&unaPila, &i);
			}
		}
	}
	if(!empty(&unaPila))
		valid = false;
	return valid;
}

struct Tpila{
	char elements[100];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, char e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, char *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

bool validar(string c){
	bool valid = true;
	Pila unaPila;
	initialize(&unaPila);
	
	for(int i=0; i<c.length(); i++){
		char symb = c[i];
		if(symb=='(')
			push(&unaPila, symb);
		else if(symb==')'){
			if(empty(&unaPila)){
				valid = false;
				break;
			}
			else{
				char i = 'i';
				pop(&unaPila, &i);
			}
		}
	}
	if(!empty(&unaPila))
		valid = false;
	return valid;
}

int main(){
	string cad = "(1)+((2)*(3/4))-(5)";
	
	if(validar(cad))
		cout << "Valida" << endl;
	else
		cout << "No Valida" << endl;
}


