/* Linked Lists*/

#include <stdio.h>

struct linked_list{
    int count;
    int * head;
};

struct node{
    int ele;
    struct node *next
};

void main(){
    struct linked_list l1;
    struct node n1;
    struct node n2;
    struct node n3;

    n1.ele = 10;
    n2.ele =20;
    n3.ele = 30;
    l1.count = 3;
    l1.head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printf("%d", n2.next->ele);
}
