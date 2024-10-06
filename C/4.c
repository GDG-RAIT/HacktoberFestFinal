#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

struct ListNode{

    int v;
    struct ListNode* next;
};


int length(struct ListNode* head){
    int l = 0;
    struct ListNode* temp = head;

    while(temp != NULL){
        l++;
        temp = temp->next;
    }

    return l;
}


struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int len = length(head);

    if(len <= n){

        printf("Null");
        return NULL;
    }
        

    int del = len - n;

    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* temp = dummy;

    while (del > 0 && temp->next != NULL) {
        temp = temp->next;
        --del;
    }

    if (temp->next != NULL) {
        struct ListNode* toRemove = temp->next;
        temp->next = temp->next->next;
        free(toRemove);
    }

    printf("Sucesss");
    return dummy->next;
}

int main(){

    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* one = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* two = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* three = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* four = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* five = (struct ListNode*)malloc(sizeof(struct ListNode));

    head->v = 1;
    one->v = 2;
    two->v = 3;
    three->v = 4;
    four->v = 5;
    head->next = one;
    one->next = two; 
    two->next = three;
    three->next = four;
    four->next = NULL;

    struct ListNode* testy = head;

    while(testy != NULL){

        printf("%i, ",testy->v);
        testy = testy->next;
    }

    removeNthFromEnd(head, 2);

    while(head != NULL){

        printf("%i, ",head->v);
        head = head->next;
    }

    return 0;
    
}