#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* top = nullptr;

    void push (int value) {
        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = top;
        top = newNode;
        cout << value << " berhasil di push \n";
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack kosong \n";
            return;
        }
        Node* temp = top;
        cout << temp-> data << "berhasil di pop \n";
        top = top -> next;
        delete temp;
    }

    void display () {
        if (top == nullptr) {
            cout << "stack kosong";
            return;
        }

        Node* temp = top;
        cout << "isi stack (atas -> bawah): ";
        while (temp != nullptr) {
            cout << temp -> data << " ";
            temp = temp ->next;
        }
        cout << "\n";
    }
};

int main() {
    Stack s;

    s.push(100);
    s.push(200);
    s.push(300);
    s.display();

    s.pop();
    s.display();

    return 0;
}