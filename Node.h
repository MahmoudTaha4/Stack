#ifndef STACK_NODE_H
#define STACK_NODE_H

struct Node {
    int value;
    Node *next;
    Node *prev;
    Node (){
        value = 0;
        next = nullptr;
        prev = nullptr;
    }
    Node(int value) : value(value){
        next = nullptr;
        prev = nullptr;
    }
    ~Node(){
        delete next;
        delete prev;
    }
};

#endif //STACK_NODE_H
