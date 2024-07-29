/*
            ~~~~Linked Lists and Arrays~~~
one array store element and next or second array store pointer
or
field called link.
1. Single Linked List[element, next]
2. Doubly Linked List[Previous, element, next]
3. Singly Circular Linked List[address field of last node having
                                address of the first node]
4. Doubly Circular Linked List[next address field of last node contains
                                the address of first node]
*/

#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
