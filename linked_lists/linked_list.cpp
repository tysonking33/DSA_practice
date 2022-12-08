#include "Linked_list.h"
#include <iostream>

int Linked_List::util_len(Node **head_ref)
{
    Node *new_node = new Node();
    new_node = head_ref;
    int len;
    while (new_node->next)
    {
        len++;
        new_node = new_node->next;
    }
    return len;
}
void Linked_List::util_print(Node **head_ref)
{
    Node *new_node = new Node();
    new_node = head_ref;
    while (new_node->next)
    {
        std::cout << new_node << " ";
        new_node = new_node->next;
    }
}

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

void Linked_List::append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    Node *last = (*head_ref);
    while (last->next)
    {
        last = last->next;
    }
    last->next = new_node;
}

void Linked_List::deleteFront(Node **head_ref)
{
    Node *new_head = new Node();
    new_head = (*head_ref);
    (*head_ref) = new_head->next;
    delete (new_head);
}

void Linked_List::deleteEnd(Node **head_ref)
{
    Node *to_delete = new Node();
    Node *new_end = new Node();
    new_end = (*head_ref);
    while (new_end->next)
    {
        new_end = new_end->next;
    }
    to_delete = new_end;
    delete (to_delete);
    new_end->next = NULL;
}

void Linked_List::deletePos(Node **head_ref, int pos)
{
    Node *temp1 = new Node();
    temp1 = (*head_ref);
    Node *new_mid = new Node();
    if (pos > util_len(head_ref))
    {
        std::cout << "error pos larger than list length";
    }
    int ctr = 0;
    while (ctr < pos)
    {
        temp1 = temp1->next;
    }
    new_mid = temp1;
    new_mid->next = temp1->next;
    delete (temp1);
}

void deleteAtData(Node **head_ref, int key)
{
    Node *temp1 = new Node();
    temp1 = (*head_ref);
    Node *new_mid = new Node();
    while (temp1->data != key)
    {
        temp1 = temp1->next;
    }
    new_mid = temp1;
    new_mid->next = temp1->next;
    delete (temp1);
}

void swapAB(Node **head_ref, int A, int B)
{
}
