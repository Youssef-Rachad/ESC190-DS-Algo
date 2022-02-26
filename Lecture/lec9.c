// ESC190 Lecture: 9
// Date : 31/01/2022


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Defining Data structures
// Note runtime complexity of accessing and operating
// also space complexity to store values and pointers
// Example Linked List

typedef struct {
    int value;
    struct Node *next;
} Node;
typedef struct {
    int value;
} LinkedList;

void insert(Node* h, int v){

    Node* tmp = h;
    while(tmp->next)
        tmp = tmp->next;
    Node* newnode = malloc(sizeof(Node));
    newnode->data = v;
    newnode->next = NULL;
    tmp->next = newnode;
}
int main(int argc, char* argv[]){
    // LinkedList
    Node *head = NULL;
    head = malloc(sizeof(Node));
    if(head==NULL){
        printf("memory not available");
        return 1;
    }
    head->data = 3;
    head->next = NULL;
    node *p = NULL;
    insert(head, 5);
    for(int i=0;i<5;i++){
        insert(head, i);
    }
    p=head;
    while(p){
        printf("%d\n",p->data);
        p = p->next;
    }
    // deletion works by freeing the deleted node and reassigning the next node to the next pointer of the previous node
    // This is also O(n) as node access is O(n). Unless a pointer is stored for the head or tail nodes O(1)
    // linked lists are better memory wise because they are not contiguous and can allocate and deallocate memory easily
    return 0;
}
