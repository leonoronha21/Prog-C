#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 8

void Troca(int v[], int i, int j) {
  int tmp;
  tmp = v[i]; 
  v[i] = v[j]; 
  v[j] = tmp;
}


int SolucaoValida(int linhas[]){
  int i;
  int x,y;
  int xx,yy;
 
  for(i = 0; i < n; i++){
    x = i;
    y = linhas[i];
 
    xx = x;
    yy = y;
    while(1){
      xx += 1;
      yy -= 1;
      if(xx > n-1 || yy < 0) 
	  break;
       
      if(yy == linhas[xx]) 
        return 0;
    }
 
    xx = x;
    yy = y;
    while(1){
      xx -= 1;
      yy -= 1;
      if(xx < 0 || yy < 0) 
	  break;
       
      if(yy == linhas[xx]) 
        return 0;
    }
  }
  return 1;
}

void ImprimeSolucao(int linhas[]){
  clock_t t1, t2;
  t1 = clock();		
  char tabuleiro[n][n];
  int i,j;
  int x,y;
  static int nsols = 0;
 
  nsols++;
 
  printf("******** SOL: %d ********\n",nsols);
 
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
      tabuleiro[i][j] = '.';
 
  for(i = 0; i < n; i++){
    x = i;
    y = linhas[i];
    tabuleiro[y][x] = 'R';
  }
 
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf(" %c ",tabuleiro[i][j]);
       
    } 
    printf("\n");
  }
  t2 = clock();
  printf("\n\nTempo Intervalo = %2.3fs \n\n\n", (t2-t1)/(double)CLOCKS_PER_SEC);
}

void Solucoes8Rainhas() {
  int linhas[n];
  int i;
  for(i = 0; i < n; i++)
    linhas[i] = i;
  TestaPermutacoes(linhas, 0);
}

void TestaPermutacoes(int linhas[], int k) {
  int i;
   
  if(k == n) {
    if(SolucaoValida(linhas))
      ImprimeSolucao(linhas);
  }
  else{
    for(i = k; i < n; i++) {
      Troca(linhas, k, i);
      TestaPermutacoes(linhas, k + 1);
      Troca(linhas, i, k);
    }
  }
} 
int main(){
  clock_t t1, t2;
  t1 = clock();
  
  Solucoes8Rainhas();
  
  t2 = clock();
  printf("\n\n\nTempo Final = %3.2fs \n", (t2-t1)/(double)CLOCKS_PER_SEC);
  
  return 0;
}
