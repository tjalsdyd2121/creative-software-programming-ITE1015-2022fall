#pragma once
#include <iostream>

using namespace std;

template <class T>
class Node
{
	public:
		T data;
		Node<T>* next;
};


template <class T>
class List{
private:
    Node<T> *head;
public:
    List() : head(NULL) {};
    ~List();                                                //free resources
    List(T* arr, int n_nodes);                              //create a list with n_nodes
    void insert_at(int idx, const T& data);
    void remove_at(int idx);
    void pop_back();
    void push_back(const T& val);
    void pop_front();
    void push_front(const T& val);
    template<class U>
    friend ostream& operator<<(ostream& out, List<U>& rhs);    //print out nodes
};

template <class T>
List<T>::List(T* arr, int n_nodes)
	:head(new Node<T>) {
	Node<T>* node = this->head;
	for (int i = 0; i < n_nodes; i++) {
		node->data = arr[i];
		if (i == n_nodes - 1)
			node->next = NULL;
		else {
			node->next = new Node<T>;
			node = node->next;
		}
	}
}

template<typename T>
List<T>::~List(){
    Node<T>* currentnode = head;
    Node<T>* nextnode = (currentnode->next); 
    while (nextnode != NULL ) // 헤드를 무한히 따라가면서 널이 나올 때까지 딜리트를 해준다.
    {
        delete currentnode;

        currentnode = nextnode;
        nextnode = (currentnode->next);
    }
    delete currentnode;
    
}

template<typename T>
void List<T>::insert_at(int idx, const T& data){
    Node<T>* newnode = new Node<T>;
    newnode->data = data;
    Node<T>* idxnode = head;
    Node<T>* tempnode = idxnode->next;
    for(int q = 0 ; q < idx; q++){
        idxnode = tempnode;
        tempnode = idxnode->next;        
    }
    idxnode->next = newnode;
    newnode->next = tempnode;
}

template<typename T>
void List<T>::remove_at(int idx){
    Node<T>* idxnode = head;
    Node<T>* tempnode = idxnode->next;
    if(idx == 0){
        this->pop_front();
    }   
    else{
        for(int q = 0 ; q < idx-1; q++){
            idxnode = tempnode;
            tempnode = idxnode->next;        
        }
    }
    idxnode->next = tempnode->next;
    delete tempnode;
}

template<typename T>
void List<T>::pop_back(){
    Node<T>* currentnode = head;
    Node<T>* nextnode = (currentnode->next);
    int cnt = 0; 
    while (nextnode != NULL )
    {
        currentnode = nextnode;
        nextnode = (currentnode->next);
        cnt++;
    } // 마지막 노드가 몇번째 노드인지 확인, currentnode를 마지막 노드로 할당
    this->remove_at(cnt);
}

template<typename T>
void List<T>::push_back(const T& val){
    Node<T>* newnode = new Node<T>;
    Node<T>* currentnode = head;
    Node<T>* nextnode = (currentnode->next);
    int cnt = 0; 
    while (nextnode != NULL )
    {
        currentnode = nextnode;
        nextnode = (currentnode->next);
        cnt++;
    } // 마지막 노드가 몇번째 노드인지 확인, currentnode를 마지막 노드로 할당
    currentnode->next = newnode;
    newnode->data = val;
    newnode->next = NULL;
}

template<typename T>
void List<T>::pop_front(){
    Node<T>* tempnode = head->next;
    delete head;
    head = tempnode;
}

template<typename T>
void List<T>::push_front(const T& val){
    Node<T>* newnode = new Node<T>;
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}

template<typename T>
ostream& operator<<(ostream& out, List<T>& rhs){
    Node<T>* currentnode = rhs.head;
    Node<T>* nextnode = (currentnode->next);
    int cnt = 0; 
    while (nextnode != NULL )
    {
        out << currentnode->data << ",";
        currentnode = nextnode;
        nextnode = (currentnode->next);
        cnt++;
    }
    out << currentnode->data;
    out << "\n";
    return out;
}