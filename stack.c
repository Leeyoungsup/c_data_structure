#include<stdio.h>
#include<stdlib.h>
#define Max_Stack_Size 100
int stack[Max_Stack_Size];//stack variable declaration
int top=-1;//top of initial value is -1.
//The push commend pushes data onto the stack
void push(int item){
    if(top>=Max_Stack_Size-1){
        printf("stack_full()\n");
        return;
    }
    stack[++top]=item;
}
//The pop commend deletes data onto the stack
int pop(){
    if(top==-1){
        printf("stack_empty()\n");

    }
    return stack[(top)--];

}
int isempty()
{   
    if( top == -1 ) return(1);
    else return(0);
}
int isfull()
{
    if ( top >= Max_Stack_Size -1 ) return(1);
    else return(0); }
int main()
{
    int e;
    push(20);
    push(40);
    push(60);
    printf(" Begin Stack Test ...\n");
    while(!isempty())
    {
        e = pop();
        printf("value = %d\n", e);
    }
}
