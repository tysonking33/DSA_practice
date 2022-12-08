#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

class Linked_List{
public:
    void push(Node** head_ref, int new_data);
    void insertAfter(Node* prev_node, int new_data);
    void append(Node** head_ref, int new_data); 
};

#endif