#include<stdio.h>
#include<stdlib.h>

/*struct Node{
    int data;
    struct Node *next;
};

void linklisttraversal(struct Node* ptr){
    while(ptr != NULL){ 
        printf("Element : %d\n", ptr->data);
        ptr=ptr->next;
    }
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //allocate memory for the node 
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));  

    //link first andd second nodes
    head->data = 18;
    head->next = second;
    //link second andd third nodes
    second->data = 19;
    second->next = third;
    //link third node & terminate the list
    third->data = 20;
    third->next = fourth;

    fourth->data = 21;
    fourth->next = NULL;

    linklisttraversal(head);
    
    return 0;
}
*/

struct Node{
    int data;
    struct Node *next;
};

/*struct Node * insertatfirst(struct Node *head,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node * insertatindex(struct Node *head,int data,int index){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insertatend(struct Node *head,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while( p->next != NULL){
        p = p->next;

    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
*/
struct Node * insertafternode(struct Node *head,struct Node * prevNode ,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}


int linklisttraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Elements are %d \n ",ptr -> data );
        ptr=ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *one;
    struct Node *two;
    struct Node *three;
    struct Node *four;

    head =(struct Node *)malloc(sizeof(struct Node));
    one =(struct Node *)malloc(sizeof(struct Node));
    two =(struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 1000;
    head -> next = one;

    one -> data = 2000;
    one -> next = two;

    two -> data = 3000;
    two -> next = three;

    three -> data = 4000;
    three -> next = four;

    four -> data = 5000;
    four -> next = NULL;

    linklisttraversal(head);

    printf("After inserting \n");
    head = insertafternode(head,two,70000);
    linklisttraversal(head);


}