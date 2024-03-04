#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <iostream>
#include "ChainNode.h"

using namespace std;

class LinkedList {
    private:
        int curSize;
        ChainNode *firstNode;
        
    public:
        LinkedList();
        ~LinkedList();
        
        int size();
        int indexOf(int e);
        int get(int i);
        void set(int i, int e);
        int remove(int i);
        void add(int i, int e);
        void clear();

        void oddNumber();
        void evenNumber();
        
        void display();
};

#endif