#include "Header.h"
#include "QueueUsingTwoStacks.h"

int main()
{
   // string s = "{(([])[])[]]}";
    //string n = "999999999999999999999";
   // int k = 100000;
    //printf("%d", superDigit(n, k));

   // cout<<isBalanced(s);

    MyQueue myqueue;
    int t;
    string input;

    cin >> t;

    string value;
    string operation;

    for (int i = 0; i <=t; i++)
    {
        std::getline(std::cin, input);
        std::stringstream ss(input);

        while (!ss.eof()) 
        {
            ss >> operation;
            ss >> value;
        }

        if (operation == "1")
        {
            myqueue.enQueue(stol(value));
        }
        else if(operation == "2")
        {
            myqueue.deQueue();
        }
        else if (operation == "3")
        {
            myqueue.frontElement();
        }

        operation = "";
        value = "";
    }
    return 0;
}