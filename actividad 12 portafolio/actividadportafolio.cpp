#include <iostream>
#include <vector>
using namespace std;

struct Orden{
    int revueltas;
    int frijolConQueso;
    int queso;
    bool arroz;
};
 struct Orden;

Orden solicitarOrden(){
    Orden p;
    cout << "Revueltas: "; cin >> p.revueltas;
    cout << "Frijol con Queso: ";   cin >> p.frijolConQueso;
    cout << "Queso: "; cin >> p.queso;
    return p;
}

void mostrarOrden(Orden p){
    cout << "Revueltas: " << p.revueltas << endl;
    cout << "Frijol con Queso: " << p.frijolConQueso << endl;
    cout << "Queso: " << p.queso<< endl;
    cout << endl;
}

vector<Orden> lista;

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        
        
       int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}


void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarOrden(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool arroz = true;
    do{
    	   
        
        int totalp1=0;
        cout<<"1. Agregar pupusas de arroz   2. Agregar pupusas de maiz  3. Ver orden   4. Salir"<<endl;
        cin>>totalp1;
        
        switch(totalp1){
            case 1:  cout<<"Agregando...";
                agregarOrden();
            break;
            case 2: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 3: cout<<"Listando..."<<endl;
              mostrarLista();
              break;
              case 4: arroz =false;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
        
        
        }
    while(arroz);

    return 0;
}