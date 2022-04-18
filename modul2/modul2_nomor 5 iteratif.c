// C Program for Iterative Tower of Hanoi 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 
#include <limits.h> 
 
// variabel global
struct Stack 
{ 
unsigned capacity; 
int top; 
int *array; 
}; 
int step = 0;
 
// membuat stack berdasarkan kapasitas
struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = 
        (struct Stack*) malloc(sizeof(struct Stack)); 
    stack -> capacity = capacity; 
    stack -> top = -1; 
    stack -> array = 
        (int*) malloc(stack -> capacity * sizeof(int)); 
    return stack; 
} 
 
// fungsi pengecekan jika stack penuh 
int isFull(struct Stack* stack) 
{ 
return (stack->top == stack->capacity - 1); 
} 
 
// fungsi pengecekan jika stack kosong
int isEmpty(struct Stack* stack) 
{ 
return (stack->top == -1); 
} 
 
// fungsi penambahan item ke stack
void push(struct Stack *stack, int item) 
{ 
    if (isFull(stack)) 
        return; 
    stack -> array[++stack -> top] = item; 
} 
 
// fungsi pengurangan item dari stack
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack -> array[stack -> top--]; 
} 
 
//fungsi memindahkan disk
void moveDisk(char asal, char tujuan, int disk) 
{ 
    printf("Pindahkan piringan %d dari %c ke %c\n", disk, asal, tujuan);
	step = step + 1; 
    
}
 
// fungsi pemindahan disk
void moveDisksBetweenTwoPoles(struct Stack *A, struct Stack *C, char s, char d) 
{ 
    int pole1TopDisk = pop(A); 
    int pole2TopDisk = pop(C); 
 
    // When pole 1 is empty 
    if (pole1TopDisk == INT_MIN) 
    { 
        push(A, pole2TopDisk); 
        moveDisk(d, s, pole2TopDisk); 
    } 
 
    // When pole2 pole is empty 
    else if (pole2TopDisk == INT_MIN) 
    { 
        push(C, pole1TopDisk); 
        moveDisk(s, d, pole1TopDisk); 
    } 
 
    // When top disk of pole1 > top disk of pole2 
    else if (pole1TopDisk > pole2TopDisk) 
    { 
        push(A, pole1TopDisk); 
        push(A, pole2TopDisk); 
        moveDisk(d, s, pole2TopDisk); 
    } 
 
    // When top disk of pole1 < top disk of pole2 
    else
    { 
        push(C, pole2TopDisk); 
        push(C, pole1TopDisk); 
        moveDisk(s, d, pole1TopDisk); 
    } 
} 
 
//Function to implement TOH puzzle 
void tohIterative(int n, struct Stack 
            *A, struct Stack *B, 
            struct Stack *C) 
{ 
    int i, total_num_of_moves; 
    char s = 'A', d = 'C', a = 'B'; 
 
    //If number of disks is even, then interchange 
    //Cination pole and Biliary pole 
    if (n % 2 == 0) 
    { 
        char temp = d; 
        d = a; 
        a = temp; 
    } 
    total_num_of_moves = pow(2, n) - 1; 
 
    //Larger disks will be pushed first 
    for (i = n; i >= 1; i--) 
        push(A, i); 
 
    for (i = 1; i <= total_num_of_moves; i++) 
    { 
        if (i % 3 == 1) 
        moveDisksBetweenTwoPoles(A, C, s, d); 
 
        else if (i % 3 == 2) 
        moveDisksBetweenTwoPoles(A, B, s, a); 
 
        else if (i % 3 == 0) 
        moveDisksBetweenTwoPoles(B, C, a, d); 
    } 
} 
 
// program utama
int main() 
{ 
    //menerima input n jumlah piringan
	int n;
	printf("Jumlah piringan : ");
	scanf("%d",&n);
	printf("\n");
 
    struct Stack *A, *C, *B; 
 
    //membuat stack
    A = createStack(n); 
    B = createStack(n); 
    C = createStack(n); 
 
    tohIterative(n, A, B, C);
	printf("Jumlah step minimal adalah %d",step);
} 
