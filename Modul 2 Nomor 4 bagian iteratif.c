int main(){
  int n, first = 0, second = 1, result, i;
  printf("Masukan jumlah bilangan fibonaci: \n");
  scanf("%d", &n);
  printf("\nBilangan Fibonaci:\n");
  
  for (i = 0; i < n; i++){
    if (i <= 1) 
      result = i;
    else{
      result = first + second;
      first = second;
      second = result;
    }
    printf("%d", result);
  } 
  return 0;
} 
