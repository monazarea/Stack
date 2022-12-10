//
// Created by monaz on 12/10/2022.
//
#include "Stack.h"
void CreateStack(Stack *ps){
    ps->top=0;
}
int StackEmpty(Stack *ps){
    if(ps->top=0)
        return 1;
    else
        return 0;
}
int StackFull(Stack *ps){
    if(ps->top==MAXSTACK)
        return 1;
    else
        return 0;
}
void Push(StackEntry e,Stack *ps){
    if(!StackFull(ps)){
        ps->entry[ps->top++]=e;
    }
}
void Pop(StackEntry *pe,Stack *ps){
    if(!StackEmpty(ps)){
        ps->top--;
        *pe=ps->entry[ps->top];
        //or *pe=ps->entry[--ps->top];
    }
}
//StackEntry Display(StackEntry *pe,Stack *ps){
//    //return *pe;
//}
void  StackTop(StackEntry *pe,Stack *ps){
    if(!StackEmpty(ps)){
        *pe=ps->entry[ps->top-1]; //copy of the last element
    }
}
int StackSize(Stack *ps){
    return (ps->top);
}
void ClearStack(Stack *ps){
    ps->top=0;
}
void TraverseStack(Stack *ps,void (*pf)(StackEntry)){// ارجعيلها ف الفيديو يا مون
    for(int i=ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }
}

