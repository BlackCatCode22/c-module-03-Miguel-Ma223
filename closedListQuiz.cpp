// mAm 9/17/25
//popQuiz.cpp

#include <iostream>
#include <string>
#include <list>

using namespace std;

struct Node {
    char data;
    Node* next;
};

int main() {

    cout << "\n Welcome to My Linked List! \n";
    string myStr = "abcDefg";

    // Create a pointer named head
    Node* pHead = nullptr;

    Node* pNew = new Node();

    // Create a new node

    pNew->data = myStr[0];
    pNew->next = nullptr;
    pHead = pNew;

   // Output nodes
    cout << "output of the node that pHead is pointing to " << endl;
    cout << pHead->data << endl;
    cout << pHead->next << endl;




    // Verify the output
    return 0;
}