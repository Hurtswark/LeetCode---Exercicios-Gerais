#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int val;
    struct ListNode *next;
};
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode *atual = &dummy;
    dummy.next = NULL;

    while(list1 != NULL && list2 != NULL){
        if(list1->val < list2->val){
            atual->next = list1;
            list1 = list1->next;
            
        }
        else{
            atual->next = list2;
            list2 = list2->next;
        }        

        atual = atual->next;
    }

    if(list1 != NULL){
        atual->next = list1;
    }
    else{
        atual->next = list2;
    }

    return dummy.next;
}

int main(){

}

