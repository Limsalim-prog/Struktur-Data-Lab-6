#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Queue {
    Node* front = nullptr;
    Node* rear = nullptr;

    void enqueue (int value) {
        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
            cout << value << "berhasil di-enqueue. \n";
            return;
        }
        rear -> next = newNode;
        rear = newNode;
        cout << value << "  berhasil di-enqueue. \n"; 
    }
    
    void dequeue(){
        if (front == nullptr) {
            cout << "Queue Kosong (Underflow)!\n";
            return;
        }

        Node* temp = front;
        cout << temp -> data << " Berhasil di-dequeue. \n";
        front = front ->next;

        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }

    void display() {
    if(front == nullptr) {
        cout << "Queue Kosong .\n";
        return;
    }

    Node* temp = front;
    cout << "Isi Queue (Depan -> Belakang): ";
    while (temp != nullptr) {
        cout << temp -> data << " ";
        temp = temp->next;   
    }
    cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    return 0;    
}