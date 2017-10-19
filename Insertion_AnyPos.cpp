#include <iostream>
using namespace std;

void insert(int,int);
void print();

struct Node{
int data;
Node *next;
};

Node *head;


int main()
{
    head=NULL;
    int x,pos,non;
    cout<<"\nEnter the no of node :  ";
    cin>>non;
    for(int i=0;i<non;i++){
    cout<<"\nEnter data : ";
    cin>>x;
    cout<<"\nEnter postion : ";
    cin>>pos;
    insert(x,pos);
   }
    print();
    return 0;
}

void insert(int x,int pos){
Node *temp=new Node;
temp->data=x;
temp->next=NULL;
if(pos==1){
    temp->next=NULL;
    head=temp;
    return;
}
else{
    Node *temp2=head;
    for(int i=0;i<pos-2;i++){
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
    }
}

void print(){

Node *temp=head;
cout<<"\n\nList is  : ";
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
