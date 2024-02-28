#ifndef _CHAINNODE_H_
#define _CHAINNODE_H_

#include <iostream>

using namespace std;

class ChainNode {
    public:
        int element;
        ChainNode *next;
        
        ChainNode(int e = 0, ChainNode *p = NULL);
};

#endif