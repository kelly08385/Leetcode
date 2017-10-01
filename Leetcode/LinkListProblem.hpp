//
//  LinkListProblem.hpp
//  Leetcode
//
//  Created by 林凱君 on 2017/10/1.
//  Copyright © 2017年 林凱君. All rights reserved.
//

#ifndef LinkListProblem_hpp
#define LinkListProblem_hpp

#include <stdio.h>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class LinkListProblem{
public:
    
    ListNode* create(const vector<int> &v);
    void print(ListNode* node);
    /* problem 21
     int list1 [] = {1,3,5,7,10,11,12};
     int list2 [] = {2,4,6,8,9};
     vector<int> list1vec, list2vec;
     int list1Len = sizeof(list1)/sizeof(*list1);
     int list2Len = sizeof(list2)/sizeof(*list2);
     list1vec.assign(list1, list1+list1Len);
     list2vec.assign(list2, list2+list2Len);
     LinkListProblem linkList1, linkList2,linkList3;
     ListNode *tmp1 = linkList1.create(list1vec);
     ListNode *tmp2 = linkList2.create(list2vec);
     ListNode *tmp3 = linkList3.mergeTwoLists(tmp1, tmp2);
     linkList3.print(tmp3);
     */
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
    
    
    /* problem 19
     int list3[] = {1,2,3};
     vector<int> list3vec;
     list3vec.assign(list3, list3+sizeof(list3)/sizeof(*list3));
     ListNode *tmp4 = linkList3.removeNthFromEnd(tmp3, 3);
     linkList3.print(tmp4);
     */
    ListNode* removeNthFromEnd(ListNode* head, int n);
    
    
    /* problem 61
     int list4[] = {1,2,3};
     vector<int> list4vec;
     Solution linkList4;
     
     list4vec.assign(list4, list4+sizeof(list4)/sizeof(*list4));
     ListNode *tmp5 = linkList4.create(list4vec);
     tmp5 = linkList4.rotateRight(tmp5, 2);
     linkList4.print(tmp5);
     */
    ListNode* rotateRight(ListNode* head, int k);
    
    
};

#endif /* LinkListProblem_hpp */
