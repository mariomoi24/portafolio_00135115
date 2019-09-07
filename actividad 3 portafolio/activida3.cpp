

/* 
 * File:   main.cpp
 * Author: Mario Orlando Moisa Candray
 *
 * Created on 20 de agosto de 2019, 11:53 AM
 */

#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main() {

    int cantidad= 10;
    int suma=0;
    int x=1;
    int numero;
    float media;
    
    while (x<=cantidad)
    
    {
      cout<<"introduce un valor:";
      cin>>numero;
      suma = suma+numero;
      media=(float)suma/cantidad;
      x++;
    }
    
    
    
    return 0;
}

