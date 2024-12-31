#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverse(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* newHead = reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    Node* head = nullptr;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);

    cout << "Original List: ";
    printList(head);

    head = reverse(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
