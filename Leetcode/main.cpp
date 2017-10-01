//
//  main.cpp
//  Leetcode
//
//  Created by 林凱君 on 2017/10/1.
//  Copyright © 2017年 林凱君. All rights reserved.
//

#include <iostream>
#include <vector>
#include "LinkListProblem.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int list4[] = {1,2,3,5,6,7};
    vector<int> list4vec;
    LinkListProblem linkList4;
    
    list4vec.assign(list4, list4+sizeof(list4)/sizeof(*list4));
    ListNode *tmp5 = linkList4.create(list4vec);
    tmp5 = linkList4.rotateRight(tmp5, 4);
    linkList4.print(tmp5);
    return 0;
}
