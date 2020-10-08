Contribution by @Rohanfizz - github
#include<bits/stdc++.h>
#define LOOP(i,n) for (int i = 1; i <= n; i++)
#define loop(i,n) for(int i = 0;i<n;i++)
#define REP(i,a,b) for(int i = a;i<=b;i++)
#define lli long long int
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vlli vector<lli>
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
    
using namespace std;
class Node{
    public:
    int data = 0;
    Node* next = nullptr; Node* prev = nullptr;
    Node(int data){
        this->data = data;
    }
};

class doublyLinkedList{
    public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int sz = 0;

    //basic---------------
    //returns the size of the list
    int size(){
        return this->sz;
    }
    // returns true if list is empty
    bool isEmpty(){
        return this->sz==0;
    }
    //a simple display function
    string toString(){
        Node* curr = this->head;
        string ans = "";
        ans+="[";
        while(curr!=nullptr){
            ans+= to_string(curr->data);
            if(curr->next!=nullptr) ans+=", ";
            curr = curr->next;
        }
        ans+= "]";
        return ans;
    }
    
    // Add
    //add element at index 0 efficiently
    void addFirst(int val){
        Node *node = new Node(val);
        if(this->head == nullptr){
            this->head = node; this->tail = node;
        }else if(head == tail){
            head->prev = node; tail->prev = node;
            node->next = head;
            head = node;
        }else{
            head->prev = node; node->next = head;
            head = node;
        }
        this->sz++;
    }
    //add element at end efficiently
    void addLast(int val){
        Node* node= new Node(val);
        if(this->head == nullptr){
            this->head = node; this->tail = node;
        }else if(head == tail){
            head->next = node; node->prev = head;
            tail = node;
        }else{
            tail->next = node; node->prev = tail;
            tail = node;
        }
        this->sz++;
    }
    // adds at specific index
    void addAt(int val,int idx){
        if(idx == 0){
            addFirst(val);
        }else if(idx == this->sz){
            addLast(val);
        }else{
            int i = 0;
            Node* temp = head;
            while(i<idx){
                temp = temp->next;
                i++;
            }
            Node* newNode = new Node(val);
            temp->prev->next = newNode;
            newNode->prev = temp->prev;
            newNode->next = temp;
            temp->prev = newNode;
        }
        this->sz++;
    }

    // REMOVE
    // removes first element and returns its value
    int removeFirst(){
        if(head == nullptr){
            cout<<"List is empty"<<endl;
            return -1;
        }else if(head == tail){
            int ret = head->data;
            head = tail = nullptr; this->sz--;
            return ret;
        }else{
            int ret = head->data;
            head = head->next;
            head->prev = nullptr;
            this->sz--; return ret;
        }
    }
     // removes last element in linkedlist
    int removeLast(){
        if(head == nullptr){
            cout<<"List is empty"<<endl;
            return -1;
        }else if(head == tail){
            int ret = head->data;
            head = tail = nullptr; this->sz--;
            return ret;
        }else{
            int ret = tail->data;
            tail = tail->prev; tail->next = nullptr;
            this->sz--; return ret;
        }
    }
    // removes at specific index
    int removeAt(int idx){
        if(idx<0 || idx>=this->sz){
            cout<<"Enter valid index"<<endl;
            return -1;
        }
        if(idx == 0){
            return removeFirst();
        }else if(idx == this->sz-1){
            return removeLast();
        }else{
            int i = 0;
            Node* temp = head;
            while(i<idx){
                temp = temp->next;
                i++;
            }
            int ret = temp->data;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp = nullptr;
            this->sz--;
            return ret;
        }
    }
    // gets the node at particular address
    Node* getAt(int idx){
        if(idx == 0){
            return this->head;
        }else if(idx == this->sz-1){
            return this->tail;
        }else{
            int i = 0;
            Node* temp = head;
            while(i<idx){
                temp = temp->next;i++;
            }
            return temp;
        }
    }
};

//basic test cases to understand working
int main(){
    doublyLinkedList dll;
    for(int i = 1;i<=9;i++){
        dll.addLast(i*10);
    }
    for(int i = 10;i<=20;i++){
        dll.addFirst(i*10);
    }
    cout<<dll.toString()<<dll.size()<<endl;
    dll.removeFirst();
    cout<<dll.toString()<<dll.size()<<endl;
    dll.removeLast();
    cout<<dll.toString()<<dll.size()<<endl;
    dll.removeAt(2);
    cout<<dll.toString()<<dll.size()<<endl;
    cout<<dll.getAt(dll.size()-1)->data<<endl;
}
