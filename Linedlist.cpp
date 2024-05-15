#include <iostream>

using namespace std;

struct node {
    int value;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void traverse(struct node *n){
    while(n != NULL){
        cout << (n->value) << endl;
        n = n -> next;
    }
}

void append(int v){
    struct node *new_node = (struct node*) malloc( sizeof(struct node) );
    new_node -> value = v;
    new_node -> next = NULL;

    if(head==NULL){
        head = new_node;
    } else {
        tail -> next = new_node;
    }

    tail = new_node;
}

void delete_node(int pos){
    struct node *current;
    current = head;

    if(pos==0 && head != NULL){
        head = head -> next;
    } else {
        for(int i=1;i<pos;i++){
            current = current -> next;
            if(current == NULL)
                return;
        }

        current -> next = (current -> next) -> next;
    }
}

void insert_node(int pos, int v){
    struct node *new_node = (struct node*) malloc( sizeof(struct node) );
    new_node -> value = v;
    struct node *current;
    current = head;

    if(pos==0){
        new_node -> next = head;
        head = new_node;
    } else {
        for(int i=1;i<pos;i++){
            current = current -> next;
            if(current == NULL)
                return;
        }

        new_node -> next = current -> next;
        current -> next = new_node;
    }
}

int main(){
    cout << "Initial LL:" << endl;
    append(1024);
    append(2048);
    append(4096);
    append(512);
    traverse(head);

    cout << "After Delete:" << endl;
    delete_node(1);
    traverse(head);

    cout << "After Insert:" << endl;
    insert_node(2, 256);
    traverse(head);
}