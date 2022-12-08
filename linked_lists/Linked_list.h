#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"
#include <iostream"

class Linked_List{
public:
    int util_len(Node** head_ref);
    void util_print(Node** head_ref);
    void push(Node** head_ref, int new_data);
    void insertAfter(Node* prev_node, int new_data);
    void append(Node** head_ref, int new_data);
    void deleteFront(Node** head_ref);
    void deleteEnd(Node** head_ref);
    void deletePos(Node** head_ref, int pos);
    void deleteAtData(Node** head_ref, int key);
    void swapAB(Node** head_ref, int A, int B);
};

#endif