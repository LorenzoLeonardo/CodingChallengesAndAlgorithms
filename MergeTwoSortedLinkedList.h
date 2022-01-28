#pragma once

class SinglyLinkedListNode
{

public:
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int num)
    {
        data = num;
        next = nullptr;
    }
};
