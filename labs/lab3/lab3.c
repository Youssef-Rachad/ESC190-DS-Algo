#include "lab3.h"

//Add TA party item request to the list
int add_request(struct party_node **head, char *item, double price, char *ta){
    //Add code here
    if(strcmp(item,"IDE")==0)
        return -1;
    struct party_node *request_node = (struct party_node *)malloc(sizeof(struct party_node));
    //TODO malloc this stuff
    request_node -> item = (char *) malloc(strlen(item)+1);
    strcpy(request_node->item, item);

    request_node -> price = price;
    request_node -> ta = (char *) malloc(strlen(ta)+1);
    strcpy(request_node->ta, ta);

    request_node->next = *head;
    *head = request_node;
    return 0;
}

//Remove the last item added
void remove_request(struct party_node **head){
    //Add code here
    if(*head == NULL)
        return;
    struct party_node* tmp = *head;
    *head = (*head) -> next;
    free(tmp->item);
    free(tmp->ta);
    free(tmp);
}

int get_length(struct party_node *head){
    int count = 1;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}

//Sort party item requests - in place?
void make_sorted(struct party_node **head){
    //We will implement a dubious bubble sort in the interest of time
    struct party_node* iterator = (struct party_node *)malloc(sizeof(struct party_node*));
    struct party_node* temp = (struct party_node *)malloc(sizeof(struct party_node*));
    iterator = (*head);
    int swapped = 1;
    while(swapped){
        swapped = 0;
        while(iterator->next!=NULL){
            //printf("ok we have %s\n", iterator->item);
            if(iterator->price < iterator->next->price){
                //printf("%f is less than %f", iterator->price, iterator->next->price);
                temp->ta = iterator->ta;
                temp->item = iterator->item;
                temp->price = iterator->price;

                iterator->ta = iterator->next->ta;
                iterator->price = iterator->next->price;
                iterator->item = iterator->next->item;

                iterator->next->item = temp->item;
                iterator->next->ta = temp->ta;
                iterator->next->price = temp->price;
                printf("ok now we have\n");
                print_list(*head);
                swapped = 1;
            }
            iterator=iterator->next;
        }
    iterator = (*head);
    }
    //print_list(*head);
    //free(temp->ta);
    //free(temp->item);
    free(temp);
    //free(iterator->ta);
    //free(iterator->item);
    //free(iterator);

}

//Trim list to fit the budget
double finalize_list(struct party_node **head, double budget){
    //Add code here
    if(*head == NULL)
        return budget;
    if((*head)->price > budget){
        remove_request(head);
        return finalize_list(head, budget);
    }
    budget -= (*head)->price;
    return finalize_list(&((*head)->next), budget);
}

//Print the current list - hope this is helpful!
void print_list(struct party_node *head){
    int count = 1;
    printf("The current list contains:\n");
    while(head!=NULL){
        printf("Item %d: %s, %.2lf, requested by %s\n",
                count, head->item, head->price, head->ta);
        count++;
        head = head->next;
    }
    printf("\n\n");
    return;
}
