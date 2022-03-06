#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    int array[10],desimal,i;
 
    printf("Masukan bilangan desimal: ");    
    scanf("%d",&desimal);    
    
    for(i=0; desimal>0; i++){  
        array[i]= desimal%2;    
        desimal = desimal/2;    
    }    
    
    printf("\nBilangan biner adalah: ");    

    for(i=i-1; i>=0; i--){
        printf("%d",array[i]); 
    }
    
    return 0;  
}   
