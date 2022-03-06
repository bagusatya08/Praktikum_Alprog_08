int main()  
{  
    
    int biner, desimal = 0, base = 1, sisa;  
    printf ("Masukan bilangan biner: ");  
    scanf (" %d", &biner); 
  
 
    while (biner > 0)  
    {  
        sisa = biner % 10;  
        desimal = desimal + sisa * base;  
        biner = biner / 10; 
        base = base * 2;  
    }  
  
    printf ("Bilangan desimalnya adalah %d \t", desimal); 
}  
