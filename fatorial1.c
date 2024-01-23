#include <stdio.h>

long int Fatorial(int n){
	
	if(n == 0 || n ==1) return 1;
	return Fatorial(n-1)*n;
	
}

long int Fatorial2(int n){
	int resultado = 1, cont;
	
	for(cont=2; cont <= n; cont++){
		resultado *= cont;
	}
	return resultado;
}

int main(){
	
	//Fatorial(33); //33
	
	//printf("-----------------------------------------\n\n");
	
	Fatorial2(33);
	
	//printf("-----------------------------------------\n\n");
}
