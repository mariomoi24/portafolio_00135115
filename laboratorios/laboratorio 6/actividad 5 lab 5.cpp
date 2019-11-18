#include <iostream>

using namespace std;
 
struct nodo{
       int nro;       
       struct nodo *sgte;
};
 
struct nodoarbol{
       int abd;       
       struct nodo *ABD;
};



typedef struct nodo *Tlista;
typedef struct nodo *arbol;
 
void insertarInicio(Tlista &lista, int valor)
{
    Tlista q;
    q = new(struct nodo);
    q->nro = valor;
    q->sgte = lista;
    lista  = q;
}
 void insertarInicio(arbol &arbol, int valor)
{
    arbol q;
    q = new(struct nodo);
    q->ABD = valor;
    q->abd = arbol;
    arbol  = q;
}
void insertarFinal(Tlista &lista, int valor)
{
    Tlista t, q = new(struct nodo);
 
    q->nro  = valor;
    q->sgte = NULL;
 
    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }
 
}
 
 void insertarFinal(abol, &arbol, int valor)
{
    arbol a, q = new(struct nodo);
 
    q->ABD = valor;
    q->abd = NULL;
 
    if(arbo==NULL)
    {
        arbol = q;
    }
    else
    {
        a = arbol;
        while(t->abd!=NULL)
        {
            t = t->ABD;
        }
        t->ABD = q;
    }
 
}
 
 
int insertarAntesDespues()
{
    int _op, band;
    cout<<endl;
    cout<<"\t 1. Antes de la posicion           "<<endl;
    cout<<"\t 2. Despues de la posicion         "<<endl;
 
    cout<<"\n\t Opcion : "; cin>> _op;
 
    if(_op==1)
        band = -1;
    else
        band = 0;
 
    return band;
}
 
void insertarElemento(Tlista &lista, int valor, int pos)
{
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->nro = valor;
 
    if(pos==1)
    {
        q->sgte = lista;
        lista = q;
    }
    else
    {
        int x = insertarAntesDespues();
        t = lista;
 
        for(i=1; t!=NULL; i++)
        {
            if(i==pos+x)
            {
                q->sgte = t->sgte;
                t->sgte = q;
                return;
            }
            t = t->sgte;
        }
    }
    cout<<"   Error...Posicion no encontrada..!"<<endl;
}
 
void buscarElemento(Tlista lista, int valor)
{
    Tlista q = lista;
    int i = 1, band = 0;
 
    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }
 
    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}
void insertarElemento(Tlista &lista, int valor, int pos)
{
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->nro = valor;
 
    if(pos==1)
    {
        q->sgte = lista;
        lista = q;
    }
    else
    {
        int x = insertarAntesDespues();
        t = lista;
 
        for(i=1; t!=NULL; i++)
        {
            if(i==pos+x)
            {
                q->sgte = t->sgte;
                t->sgte = q;
                return;
            }
            t = t->sgte;
        }
    }
    cout<<"   Error...Posicion no encontrada..!"<<endl;
}
 
void buscarElementonodo (arbol, arbol, int valor)
{
   arbol a = arbol;
    int i = 1, band = 0;
 
    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            cout<<endl<<" Encontrada en posicion nodo "<< i <<endl;
            band = 1;
        }
        q = q->ABD;
        i++;
    }
 
    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
} 

void reportarLista(Tlista lista)
{
     int i = 0;
 
     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
          lista = lista->sgte;
          i++;
     }
}
 void reportararbol(arbol arbol)
{
     int i = 0;
 
     while(arbol != NULL)
     {
          cout <<' '<< i+1 <<") " << arbol->abd << endl;
          lista = lista->ABD;
          i++;
     }
}
 
void eliminarElemento(Tlista &lista, int valor)
{
    Tlista p, ant;
    p = lista;
 
    if(lista!=NULL)
    {
        while(p!=NULL)
        {
            if(p->nro==valor)
            {
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;
 
                delete(p);
                return;
            }
            ant = p;
            p = p->sgte;
        }
    }
    else
        cout<<" Lista vacia..!";
}

void eliminarElemento(arbol &arbol, int valor)
{
    arbol a, ant;
    a = arbol;
 
    if(arbol!=NULL)
    {
        while(a!=NULL)
        {
            if(a->abd==valor)
            {
                if(p==arbol)
                    arbol = arbol->abd;
                else
                    abd->ABD = a->ABD;
 
                delete(a);
                return;
            }
            ant = a;
            a = a->ABD;
        }
    }
    else
        cout<<" Lista vacia..!";
}
 
void eliminaRepetidos(Tlista &lista, int valor)
{
    Tlista q, ant;
    q = lista;
    ant = lista;
 
    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            if(q==lista) // primero elemento
            {
                lista = lista->sgte;
                delete(q);
                q = lista;
            }
            else
            {
                ant->sgte = q->sgte;
                delete(q);
                q = ant->sgte;
            }
        }
        else
        {
            ant = q;
            q = q->sgte;
        }
 
    }
   
    cout<<"\n\n Valores eliminados..!"<<endl;
}
 
void eliminaRepetidos(arbol arbola, int valor)
{
    arbol a, ant;
    a = arbol;
    ant = arbol;
 
    while(q!=NULL)
    {
        if(q->abd==valor)
        {
            if(q==arbol) 
            {
                arbol = arbol->ABD;
                delete(a);
                a = arbol;
            }
            else
            {
                ant->sgte = a->ABD;
                delete(a);
                a = ant->ABD;
            }
        }
        else
        {
            ant = a;
            a = a->ABD;
        }
 
    }
   
    cout<<"\n\n Valores eliminados..!"<<endl;
}


void menu1()
{
    cout<<"\n\t\tLISTA ENLAZADA SIMPLE\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 3. INSERTAR EN UNA POSICION         "<<endl;
    cout<<" 4. REPORTAR LISTA                   "<<endl;
    cout<<" 5. BUSCAR ELEMENTO                  "<<endl;
    cout<<" 6. ELIMINAR ELEMENTO 'V'            "<<endl;
    cout<<" 7. ELIMINAR ELEMENTOS CON VALOR 'V' "<<endl;
    cout<<" 8. SALIR                            "<<endl;
 
    cout<<"\n INGRESE OPCION<<endl;
}

void menu2()
{
    cout<<"\n\a\arbol binario busqueda\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 3. INSERTAR EN UNA POSICION         "<<endl;
    cout<<" 4. REPORTAR arbol                 "<<endl;
    cout<<" 5. BUSCAR ELEMENTO                  "<<endl;
    cout<<" 6. ELIMINAR ELEMENTO 'B'            "<<endl;
    cout<<" 7. ELIMINAR ELEMENTOS CON VALOR 'B' "<<endl;
    cout<<" 8. SALIR                            "<<endl;
 
    cout<<"\n INGRESE OPCION<<endl;
}
 
int main()
{
    
   Tlista lista = NULL;
    int op;     
    int _dato;  
    int pos;    
 
  arbol arbol = NULL;
    int op;     
    int _dato;  
    int pos;    
 
 
    system("color 0b");
 
    do
    {
        menu1();  cin>> op;
 
        switch(op)
        {
            case 1:
 
                 cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
                 insertarInicio(lista, _dato);
                 incertar inicion(arbol, _nodo);
            break;
 
 
            case 2:
 
                 cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
                 insertarFinal(lista, _dato );
                 incertarfinal(arbol, _nodo);
            break;
 
 
            case 3:
 
                 cout<< "\n NUMERO A INSERTAR: ";cin>> _dato;
                 cout<< " Posicion : ";       cin>> pos;
                 insertarElemento(lista, _dato, pos);
                 insertarelemeto(arbol,_nodo, pos);
            break;
 
 
            case 4:
 
                 cout << "\n\n MOSTRANDO LISTA\n\n";
                 reportarLista(lista);
                 cout<"\n\nmostrar arbol";
                 reportararbol(arbol);
            break;
 
 
            case 5:
 
                 cout<<"\n Valor a buscar: "; cin>> _dato;
                 buscarElemento(lista, _dato);
                 buscarElemento(arbol, _nodo);
              break;
 
            case 6:
 
                cout<<"\n Valor a eliminar: "; cin>> _dato;
 
                eliminarElemento(lista, _dato);
                eliminarelemneto(arbol,_nodo);
            break;
 
            case 7:
 
                cout<<"\n Valor repetido a eliminar: "; cin>> _dato, _nodo;
            break;
 
                    }
 
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=8);
 
 
   system("pause");
   return 0;
}