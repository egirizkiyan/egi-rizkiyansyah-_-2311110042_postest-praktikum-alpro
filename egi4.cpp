#include <iostream>

struct Node {
    int data;
    Node* next;
};

class SingleLinkedList {
private:
    Node* head;

public:
    SingleLinkedList() : head(nullptr) {}

    void addElementToEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

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

    void printList() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void deleteFirstElement() {
        if (head == nullptr) {
            std::cout << "List is empty, nothing to delete." << std::endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    ~SingleLinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    SingleLinkedList list;

    list.addElementToEnd(1);
    list.addElementToEnd(2);
    list.addElementToEnd(3);

    std::cout << "List after adding elements: ";
    list.printList();

    list.deleteFirstElement();
    std::cout << "List after deleting first element: ";
    list.printList();

    return 0;
}
