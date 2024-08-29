#include <iostream>
using namespace std;

#include "Stack.h"

Stack ::Stack() {
    this->cnt = 0;
}

void Stack::push(int value) {
    Node *n = new Node(value);
    if(isEmpty()){
        root = n;
    }
    else {
        this->root->next = n;
        n->prev = root;
        this->root = n;
    }
    cnt++;
}

void Stack ::pop() {
    if(isEmpty()){
        return;
    }

    if(size() == 1){
        delete root;
    }
    else {
        root = root->prev;
        delete root->next;
    }
    cnt--;
}

int Stack ::top() {
    if(isEmpty()){
        return -1;
    }
    else {
        return root->value;
    }
}

bool Stack ::isEmpty() {
    return (cnt == 0);
}

int Stack ::size() {
    return cnt;
}

Stack ::~Stack() {
    while(!isEmpty()){
        pop();
    }
}
