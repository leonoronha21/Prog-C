#include <stdio.h>
#define h 10
#define w 10


void MostraMatriz(char M[h][w]){
	int l, c;
	
	for(l = 0; l<h; l++){
		for(c = 0; c<w; c++){
			printf(" %c ", M[l][c]);
			
		}
		printf("\n");
	}
}

int main()
{
	char M[h][w];
	int xa=10, ya=10, xb=30, yb=10;
	
	int l, c;
	
	
	for(l = 0; l<h; l++){
		for(c = 0; c<w; c++){
			M[l][c] = '.';
			
		}
		
	}	
	MostraMatriz(M);
	return 0;
}
