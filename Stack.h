//
// Created by Настя on 15.11.2022.
//

#ifndef MAIN_CPP_STACK_H
#define MAIN_CPP_STACK_H

#define SIZE 100

class Stack {
    int * arr;
    int top;
    int capacity;

public:
    Stack(int size = SIZE);
    ~Stack();

    void push(int);
    int pop();
    int peek();
    int peek2();

    int size();
    bool empty();
    bool isFull();
};
#endif //MAIN_CPP_STACK_H
