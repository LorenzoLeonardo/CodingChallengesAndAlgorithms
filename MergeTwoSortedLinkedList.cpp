#include "Header.h"
#include "MergeTwoSortedLinkedList.h"


SinglyLinkedListNode * mergeLists(SinglyLinkedListNode * head1, SinglyLinkedListNode * head2) 
{

    vector<int> data;
    SinglyLinkedListNode* tempH1 = head1;
    SinglyLinkedListNode* tempH2 = head2;
    SinglyLinkedListNode* mergeList = nullptr;
    
    while (tempH1 != nullptr)
    {
        data.push_back(tempH1->data);
        tempH1 = tempH1->next;
    }
    while (tempH2 != nullptr)
    {
        data.push_back(tempH2->data);
        tempH2 = tempH2->next;
    }
    sort(data.begin(), data.end());
    int s = (int)data.size();

    SinglyLinkedListNode*  List = new SinglyLinkedListNode(data[0]);
    SinglyLinkedListNode*  temp = List;

    for (int i = 1; i < s; i++)
    {
        temp->next = new SinglyLinkedListNode(data[i]);
        temp = temp->next;
    }

    return List; 
}