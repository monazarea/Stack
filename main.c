#include<stdio.h>
#include<conio.h>
#include"Stack.h"
void stacktop(StackEntry *pe,Stack *ps){ // user level
    Pop(pe,ps);
    Push(*pe,ps);
}
void display(StackEntry e){ //user level
    printf("e is: %d\n",e);
}
void main(){
    int  e;
    Stack s;
    int x;
    CreateStack(&s );
    Push(e,&s);
    Pop(&e,&s);
    //printf(Display(&e,&s));
    //StackTop(&e,&s);
    x=StackSize(&s);
    printf("Stack Size is:%d",x);
    ClearStack(&s);
    //TraverseStack(&s,&display);
     //stacktop(&e,&s);
}
