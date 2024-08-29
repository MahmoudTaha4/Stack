#ifndef STACK_STACK_H
#define STACK_STACK_H

#include "Node.h"

class Stack {
    Node *root;
    int cnt;
    Stack ();
    void push(int value);
    void pop();
    int size();
    bool isEmpty();
    int top();
    ~Stack();
};


#endif