#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    int array[10],desimal,i;
 
    printf("Masukan bilangan desimal: ");    
    scanf("%d",&desimal);    //input bilangan desimal
    
    for(i=0; desimal>0; i++){  
        array[i]= desimal%2;    //Desimal dibagi 2 dan sisanya di simpan ke dalam array
        desimal = desimal/2;    //Bilangan desimal dibagi 2
    }    
    
    printf("\nBilangan biner adalah: ");    

    for(i=i-1; i>=0; i--){
        printf("%d",array[i]); //Print array dari index paling belakang/akhir
    }
    
    return 0;  
}   
