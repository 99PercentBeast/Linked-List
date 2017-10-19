#include <iostream>
#include<algorithm>
using namespace std;

void insert(int);
void print();
void deleteN(int);

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
    int pos2;
    cout<<"\nEnter the postion to delete : ";
    cin>>pos2;
    deleteN(pos2);
    print();
    return 0;
}

void insert(int x){
Node *temp=new Node;
temp->data=x;
temp->next=NULL;
if(head==NULL){
head=temp;
}
else{
	Node *newtemp=head;
	while(newtemp->next!=NULL){
	newtemp=newtemp->next;
	}
	newtemp->next=temp;
}
}   
    
void deleteN(int pos2){
	Node *prev=NULL;
	Node *temp=head;
	if(pos2==1){
		temp=head->next;
		free (temp);
	}
	for(int i=0;i<pos2-1;i++){
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	delete (temp);
}


void print(){

Node *temp=head;
cout<<"\n\nList is  : ";
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
