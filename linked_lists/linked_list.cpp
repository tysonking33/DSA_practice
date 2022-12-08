#include "Linked_list.h"
#include <iostream>

void Linked_List::push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void Linked_List::insertAfter(Node *prev_node, int new_data)
{
    if (!prev_node)
    {
        std::cout << "prev_node DNE\n";
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void Linked_List::append(Node** head_ref, int new_data){
    
}