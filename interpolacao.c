#include <stdio.h>
#include <stdlib.h>




void MostraMatriz(int *m, int tam, char *msg){
		
	int l, c;
	
	printf("%s \n", msg);
	
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			
			switch(m[l*tam+c])
			{
				case 0: printf(".");
				break;
				case 1: printf("#");
				break;
			}
		}
	}
}

void Zoom(int *m, int *n, int tam){
	int RV = 2, RH = 2;
	int l, c;
	
	for(l=0; l<tam; l++){
		for(c=0;  c<tam; c++){
			int wl, wc;
			
			for(wl = L*RV; wl< (wl*RV+RV);wl++){
				for(wc=c*RH; wc<(wc*RH+RH);wc++){
					w[wl*RH+wc] = m[l*tam+c];		
				}
			}
		}
	}
}

int main(){
	
 	int m[n][n] = { {1, 0 ,1 
	 				 0, 1, 0 
					 1 ,0, 1}};
								
	int w[n*2][n*2];
	MostraMatriz (m, n, "M");
	Zoom[m,w,n];
	MostraMatriz (m, n*2, "W");
	return 0;
}
