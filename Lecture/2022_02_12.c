#include <stdio.h>

typedef struct StackNode{}

StackaslinkedList* Initialize(){
    StackaslinkedList* newstack = (StackaslinkedList *)malloc(sizeof(StackaslinkedList));
    newstack->top = NULL;
    newstack->num_el = 0;
    return newstack
}

void push(StackaslinkedList *s, Person *p){
    StackNode* newnode = (StackNode*)malloc(sizeof(StackNode));
    newnode->cargo = p;
    newnode->next = s->top; // make newnode next be the current top of stack 
    s->top = newnode;
    s->num_el++;
}

Person* pop(StackaslinkedList* s){
    Person* p = s->top->cargo;
    StackNode* oldtop = s->top;
    s->top = s->top->next;
    free(oldtop);
    s->num_el--;
    return p;
}
