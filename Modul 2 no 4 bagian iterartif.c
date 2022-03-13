#include <stdio.h>

int main(){
  int n, first = 0, second = 1, result, i;
  printf("Masukan jumlah bilangan fibonaci: \n");
  scanf("%d", &n);
  printf("\nBilangan Fibonaci:\n");
  
  for (i = 0; i < n; i++){
    if (i <= 1) // hanya terpenuhi ketika i sama dengan 0 dan 1
      result = i;
    else{
      result = first + second;
      first = second; //nilai second akan mengisi first di perulangan berikutnya
      second = result; // nilai result akan mengisi second di perulangan berikutnya 
    }
    printf("%d", result);
  } 
  return 0;
} 
