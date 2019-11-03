struct nodo{
 int hijos;
 int nohijos;
}
typedef nodo Nodo;

public int alturaRecursiva(Nodo nodo){
	int altura=0, profundidad;
	if(nodo==NULL){
		return 0;
		
	}else{
		for(int i=0; i<nodo.nohijos; i++){
			profundidad= alturaRecursiva(nodo.hijos[i]);
			if(profundidad>altura){
				altura=profundidad;
			}
		}
		return altura+1;
	}
}