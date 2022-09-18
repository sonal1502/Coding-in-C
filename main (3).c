/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
# define MAX 5
int A[MAX];
int first=-1;

void push(int data)
{int i;
first += 1;
for(i=first;i>0;i--)
A[i]=A[i-1];
A[0]=data;
}
void Print()
{int i;
if(first==-1)
{printf("STACK UNDERFLOW");
exit(1);
}
for(i=0;i<=first;i++)
printf("%d ",A[i]);
printf("\n");
}

int main()
{
push(30);
push(90);
push(40);
Print();
return 0;

}
