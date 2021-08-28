#include <bits/stdc++.h>
using namespace std;

struct node {
    node* next;
    int data;
};

class sll {
   private:
    node* head;
    int size;

   public:
    sll() {
        head = NULL;
        size = 0;
    }
    void add_back(int data) {
        node* cur = head;
        if (head == NULL) {
            head = new node;
            head->data = data;
            head->next = NULL;
        } else {
            node* cur = head;
            while (cur->next != NULL) {
                cur = cur->next;
            }
            //add after cur:
            node* newnode = new node;
            newnode->data = data;
            newnode->next = NULL;
            cur->next = newnode;
        }
        size++;
    }
    void pop_back() {
        if (head == NULL) return;
        node* cur = head;
        node* prev = NULL;
        while (cur->next != NULL) {
            prev = cur;
            cur = cur->next;
        }
        if (cur == head) {
            cout << "delete head" << endl;
            head = NULL;
        } else {
            prev->next = NULL;
            cur = NULL;
        }
        if (size > 0) size--;
    }
    vector<int> all_nodes() {
        cout << "ALL_NODES" << endl;
        vector<int> nodes;
        node* cur = head;
        while (cur != NULL) {
            nodes.push_back(cur->data);
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
        return nodes;
    }
    int get_size() {
        return size;
    }
};

int main() {
    sll a;
    cout << a.get_size() << endl;
    a.add_back(12);
    a.add_back(1);
    a.add_back(32);
    cout << a.get_size() << endl;
    vector<int> res = a.all_nodes();
    a.pop_back();
    cout << a.get_size() << endl;
    res = a.all_nodes();
    cout << endl
         << "lets delete all" << endl;
    a.pop_back();
    a.pop_back();
    cout << a.get_size() << endl;
    res = a.all_nodes();
    cout << endl
         << "B" << endl;
    sll b;
    b.add_back(1);
    b.add_back(2);
    b.add_back(3);
    b.add_back(4);
    res = b.all_nodes();
    cout << b.get_size() << endl;
    b.pop_back();
    res = b.all_nodes();
    cout << b.get_size() << endl;
    b.add_back(9);
    res = b.all_nodes();
    cout << b.get_size() << endl;
    b.add_back(8);
    res = b.all_nodes();
    cout << b.get_size() << endl;
    b.pop_back();
    res = b.all_nodes();
    cout << b.get_size() << endl;
    b.pop_back();
    b.pop_back();
    b.pop_back();
    b.pop_back();
    res = b.all_nodes();
    cout << b.get_size() << endl;
    b.add_back(11);
    b.add_back(12);
    b.add_back(13);
    res = b.all_nodes();
    cout << b.get_size() << endl;
    return 0;
}