//
// Created by monaz on 12/10/2022.
//

#ifndef MAIN_C_STACK_H
#define MAIN_C_STACK_H
#define MAXSTACK 100
typedef int KeyType;

#define EQ(a, b) ((a)==(b))
#define LT(a, b) ((a)<(b))
#define LE(a, b) ((a)<=(b))
#define GT(a, b) ((a)>(b))
#define GE(a, b) ((a)>=(b))
typedef struct elementtype{
    KeyType		key;
    int		year;
    float	age;
    int		tmp;
    short int	etype;
    union{
        int		year;
        float	age;
        void	*ptr;
        char	par;
    }info;
}ElementType;
typedef ElementType * StackEntry;

typedef  struct stack{
    int top;
    StackEntry entry[MAXSTACK];
}Stack;
#endif //MAIN_C_STACK_H
void	TestImplementation();
void	Push			(StackEntry, Stack *);
void	Pop				(StackEntry *, Stack *);
int		StackEmpty		(Stack *);
int		StackFull		(Stack *);
void	CreateStack		(Stack *);
void	StackTop		(StackEntry *, Stack *);
int		StackSize		(Stack *);
void	ClearStack		(Stack *);
void	TraverseStack	(Stack *, void (*)(StackEntry));
//StackEntry  Display     (StackEntry *,Stack *);
