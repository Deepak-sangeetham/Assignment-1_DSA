#ifndef _Stack
#define _Stack

typedef int EType;

struct node;

typedef struct node Node;
typedef struct node * stack;

struct node {

    EType Element;
    stack Next;
};
