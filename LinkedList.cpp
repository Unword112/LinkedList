#include "LinkedList.h"

LinkedList::LinkedList()
{
    ChainNode *p = new ChainNode;
    curSize = 0;
    firstNode = p;
}

LinkedList::~LinkedList()
{
    ChainNode *p = firstNode;
    
    for(int i = 0; p != NULL; i++){
        ChainNode *n = p->next;
        delete p;
        p = n;
    }
}

int LinkedList::size()
{
    return curSize;
}

int LinkedList::indexOf(int e)
{
    ChainNode *p = firstNode->next;
    
    int index = 0;
    while(p != NULL){
        if(p->element == e) return index;
        //else if(p->element != e) return -1;
        p = p->next;
        index++;
    }
    return -1;
}

int LinkedList::get(int i)
{
    ChainNode *p = firstNode->next;

    int index = 0;
    while (p != NULL) {
            if(index == i) return p->element;
            p = p->next;
            index++;
    }

    return -1;
}

void LinkedList::set(int i, int e)
{
    ChainNode *p = firstNode->next;

    int index = 0;

    while(p != NULL){
        if(index == i){
            p->element = e;
            return;
        }
        p = p->next;
        index++;
    }
}

int LinkedList::remove(int i)
{
    ChainNode *p = firstNode;

    for(int j = 0; j < i; j++) p = p->next;
    
    ChainNode *q = p->next;
    ChainNode *r = p->next->next;

    int temp = q->element;
    delete q;
    p->next = r;
    curSize--;

    return temp;
}

void LinkedList::add(int i, int e)
{
    ChainNode *p = firstNode;
    ChainNode *q = new ChainNode(e);
    
    if(q == NULL) cout << "Error : Memory full" << endl;
    if(i < 0) {
        cout << "Lower bound" << endl;
        i = 0;
    }
    if(i > 0) {
        cout << "Upper bound" << endl;
        i = curSize;
    }
    
    for(int j = 0; j < i; j++) p = p->next;
    
    q->next = p->next;
    p->next = q;
    curSize++;
}

void LinkedList::clear()
{
    ChainNode *p = firstNode->next;
    
    for(int i = 0; p != NULL; i++){
        ChainNode *n = p->next;
        delete p;
        p = n;
    }
    firstNode->next = NULL;
    curSize = 0;
}

void LinkedList::display()
{
    ChainNode *p = firstNode->next;

    cout << "L : [";
    for(int i = 0; i < curSize; i++){
        cout << p->element;
        if(i < curSize - 1) cout << ", ";
        p = p->next;
    }
    cout << " ] N : " << curSize << endl;
}
