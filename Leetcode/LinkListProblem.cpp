//
//  LinkListProblem.cpp
//  Leetcode
//
//  Created by 林凱君 on 2017/10/1.
//  Copyright © 2017年 林凱君. All rights reserved.
//

#include "LinkListProblem.hpp"

#include <iostream>

using namespace std;

ListNode* LinkListProblem::create(const vector<int> &v){
    ListNode *first = new ListNode(v.at(0));
    ListNode *tmp = first;
    
    for(int i = 1; i < v.size(); i++){
        ListNode *node = new ListNode(v.at(i));
        tmp->next = node;
        tmp = node;
    }
    return first;
}

void LinkListProblem::print(ListNode *node){
    if(node == 0){
        cout << "The list is empty";
        return;
    }
    
    ListNode *tmp = node;
    while (tmp != NULL) {
        cout << tmp->val << "->";
        tmp = tmp->next;
    }
    cout << "\n";
}

ListNode* LinkListProblem::mergeTwoLists(ListNode *l1, ListNode *l2){
    ListNode *first = new ListNode(0);
    ListNode *tmp = first;
    while (l1 && l2) {
        if(l1->val <= l2->val){
            tmp->next = l1;
            l1 = l1->next;
        }else{
            tmp->next = l2;
            l2 = l2->next;
        }
        tmp = tmp->next;
    }
    if(l1){
        tmp->next = l1;
    }else{
        tmp->next = l2;
    }
    return first->next;
}

ListNode* LinkListProblem::removeNthFromEnd(ListNode *head, int n){
    if(head == NULL) return head;
    if(head->next == NULL && n > 0) return NULL;
    ListNode *slow = new ListNode(0);
    ListNode *fast = head;
    slow->next = head;
    int step = 0;
    while(fast){
        step += 1;
        if(step > n){
            slow = slow->next;
            fast = fast->next;
        }else{
            fast = fast->next;
        }
        
    }
    slow->next = slow->next->next;
    if(step == n){
        return slow->next;
    }
    return head;
}

ListNode* LinkListProblem::rotateRight(ListNode* head, int k){
    if(head == NULL) return head;
    if( k<1 || head->next == NULL) return head;
    ListNode *p = head;
    int len = 1;
    // calculate the list length
    while(p->next != NULL){
        p = p->next;
        len++;
    }
    p->next = head;
    int step = len - k%len;
    while (step) {
        p = p->next;
        step--;
    }
    head = p->next;
    p->next = NULL;
    return head;
}
