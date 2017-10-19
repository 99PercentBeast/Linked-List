#include <iostream>
using namespace std;

void insert(int);
void print();

struct Node{
int data;
Node *next;
};

Node *head;


int main()
{
    head=NULL;
    int x,non;
    cout<<"\nEnter the no of node :  ";
    cin>>non;
    for(int i=0;i<non;i++){
    cout<<"\nEnter data : ";
    cin>>x;
    insert(x);
   }
    print();
    return 0;
}

void insert(int x){
Node *temp=new Node;
temp->data=x;
temp->next=head;
head=temp;
}   
    
void print(){

Node *temp=head;
cout<<"\n\nList is  : ";
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
