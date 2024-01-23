#include <stdio.h>
#include <stdlib.h>
#define n 4

int main (int argc, char*argv){
	if (argc ==2) n = atoi(argv[1]);
	printf("\n Assumindo n = %d \n", n);
	
	int tabuleiro[n][n];
	CondicaoInicial(tab);
}

void CondicaoInicial(int tab[n][n]){
	
	
	int l, c;
	
	for(l=0; l<n; l++){
		for(c=0; c<n; c++){
			tabuleiro[l][c]=0;
			if(l==0)tabuleiro[l][c];
		}
	v
	
}
