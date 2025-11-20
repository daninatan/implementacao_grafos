#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "Node.h"

using namespace std;

struct ListNode {
    Node data;
    ListNode* nextNode;
};  

class List{

public: 

    List();
    void addNode(int position, Node newData);
    void removeNode(int position);
    void printNodes();
    int getSize();
    int setPosition(int position, ListNode*& node);

private:

    int size;
    ListNode* head;
};

#endif