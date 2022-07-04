#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		node(int val){
			data = val;
			next = NULL;
		}
	
};
node* reverse(node *head){
	
	node* prev=NULL,*next = NULL;
	node* curr = head;
	
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr  = next;
	}
	head = prev;
	return head;
}

void display(node* head){
	node* temp= head;
	cout<<"The linked list is : ";
	while(temp != NULL){
		cout<<temp->data<<" -> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

node* getTail(node* head12){
	node* temp= head12;
	cout<<endl<<" Tail of the linked list is : ";
	while(temp->next != NULL){
		temp=temp->next;
	}
	return temp;

}
void insertAtEnd(node* &head,int val){
	node* n = new node(val);
	if(head == NULL){
		head = n;
		return;
	}
	node* temp=head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next=n;
}
void insertAtBeg(node* &head,int val){
	node* temp=head;
	node* n = new node(val);
	head = n;
	n->next = temp;
}
void insertAtMid(node* &head,int val,int pos){
	node* temp = head;
	node* n = new node(val);
	int i=1;
	while(i<pos){
		temp=temp->next;
		i++;
	}
	n->next = temp->next;
	temp->next = n;
}

int deleteAnodeFrombeg(node* &head){
	node* temp = head;
	if(temp == NULL){
		cout<<"the linked list is empty";
	}
	int ans = temp->data;
	head=head->next;
	return ans;
}

int deleteAnodeFromEnd(node* &head){
	int ans;
	int i=0;
	while(i<3){
	node* temp = head,*ano_temp;
	if(temp == NULL){
		cout<<"the linked list is empty";
	}
	
	while(temp->next!=NULL){
		ano_temp = temp;
		temp = temp->next;
	}
	ans =  temp->data;
	  cout<<"this is deleted element "<< ans;
	  cout<<endl;
	
	if(temp == head){
		head = NULL;
	}
	else{
		ano_temp->next=NULL;
	}
	i++;
}
	return ans;
}


void deletea_GivenNode( node* Node){
	node* temp = Node->next;
	Node->data = temp->data;
	Node->next = Node->next->next;
	delete(temp);

}
node* middle(node* head){
	node* slow = head;
	node* fast = head->next;
	while(fast!=NULL && fast->next){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
	
}
bool CheckPalindrome(node* head){
	node* mid = middle(head);
	node* temp = mid->next;
	mid->next = reverse(temp);
	
	node* curr = head;
	node* head1 = mid->next;
	while(head1){
		if(curr->data!= head1->data){
			return false;
		}
		curr = curr->next;
		head1 = head1->next;
	}
	mid = middle(head);
	mid->next = reverse(mid->next);
	return true;
	
}


int getLength(node* head){
	node* temp = head;
	
	if(head == NULL){
		cout<<"the list is empty";
	}
	else{
		int count=1;
		while(temp->next!=NULL){
			count++;
			temp=temp->next;
		}
//		cout<<"the length of the list is "<<count;
return count;
	}
}





node* add(node* head1,node* heads){	
		node* extra = NULL;
	node* f1 = reverse(head1);
	node* f2 = reverse(heads);
	
	int sum = 0,carry=0;
	while(f1!=NULL || f2!=NULL||carry!=0){
		int val1=0;
		if(f1){
			val1 = f1->data;
		}
		
		int val2=0;
		if(f2){
			val2 = f2->data;
		}
			
		sum = carry + val1 + val2;
		int digit = sum%10;
		insertAtEnd(extra,digit);
		carry = sum/10;
		
		if(f1){
			f1 = f1->next;
		}
		if(f2){
			f2 = f2->next;
		}
			
	}
	return reverse(extra);
}

/*node* reverse_using_Stack(node* head)
	stack<node*>st;
	node* temp=head;
	while(temp->next != NULL){
		st.push(temp);
		temp = temp->next;
	}
	head = temp;
	
	while(!st.empty()){
		temp->next  =st.top();
		st.pop();
		temp = temp->next;
	}
	temp->next = NULL;
 return head;
}*/
void linearSearch(node* head,int element){
	node* temp = head;
	int cnt=0;
	bool flag=false;
	while(temp->next!=NULL){
		if(temp->data == element){
			flag = true;
			break;
		}
		cnt++;
		temp=temp->next;
	}
	if(flag){
		cout<<endl<<"the element "<<element<< " is present at "<<cnt<<" position";
	}
	else{
		cout<<endl<<"the element "<<element<< " is not present in this list";
	}
}
node * reverse_rec(node* head){
	if(head !=NULL || head->next!=NULL){
		return head;
	}
	node* newhead  = reverse(head->next);
	node* headnext = head->next;
	head->next = headnext;
	head->next=NULL;
	return newhead;
}
node* removeDuplicate(node* head){
	 node* temp = head,*temp1= head;
 while(temp->next!=NULL){
     if(temp->data==temp->next->data){
         temp1 = temp->next->next;
         temp->next= temp1;
     }
     else{
         temp = temp->next;
     }
 }
    return head;
}



bool  checkLoop(node* head){
	node* temp= head;	
	map<node*,bool>mp;	
	while(temp){
		if(mp[temp]==true){
			cout<<"The loop prsent at :  "<<temp->data<<endl;
			return 1;
		}
		mp[temp]= true;
		temp = temp->next;
	}
	return 0;
}

bool checkLoopFrom_Floyad_cycle_det(node* heads){
	
	node* slow = heads;
	node* fast = heads;
	if(heads == NULL)
		return false;
	while(fast!=NULL && slow!=NULL){
		fast = fast->next;
		if(fast!=NULL)
		{
			fast = fast->next;
		}
		
		slow = slow->next;
		if(slow==fast)
		{
			return true;
		}
	}
	return false;
	
}

 node* checkLoopFrom_Floyadcycledet(node* heads){
	
	node* slow = heads;
	node* fast = heads;
	if(heads == NULL)
		return NULL;
	while(fast!=NULL && slow!=NULL){
		fast = fast->next;
		if(fast!=NULL)
		{
			fast = fast->next;
		}
		
		slow = slow->next;
		if(slow==fast)
		{
			return slow;
		}
	}
	return NULL;
	
} 

node* getStartingPoint(node* head){
	
	if(head == NULL){
		return NULL;
	}
	node* intersection  = checkLoopFrom_Floyadcycledet(head);
	node* slow  = head;
	
	if(intersection == NULL)
        return NULL;
        
	while(slow!=intersection){
		slow = slow->next;
		intersection = intersection->next;
	}
	return slow;
	
}
int main(){
	
	node* head=NULL;
	cout<<"After inserting the element at the Tail ";
	insertAtEnd(head,1);
	insertAtEnd(head,2);
	insertAtEnd(head,3);
	insertAtEnd(head,4);
	display(head);
	cout<<endl;
	
//	insert element at the begning
	cout<<"After inserting the element at the front ";
	insertAtBeg(head,5);
	insertAtBeg(head,25);
	insertAtBeg(head,125);
	display(head);
	cout<<endl;
	
//	insert element at the begning
	insertAtEnd(head,5);
	insertAtEnd(head,6);
	display(head);
	cout<<endl;
	
//	insert at specified position 
	insertAtMid(head,225,1);
	display(head);
	insertAtMid(head,10,5);
	display(head);
	
//	deletion a node from beg
	int anode = deleteAnodeFrombeg(head);
	cout<<"the deleted node is "<< anode<<endl;
	display(head);
	
//	deletion a node from end
	int s = deleteAnodeFromEnd(head);
	cout<<"the nodes deleted from the end of the list "<<s;
	cout<<endl;	
	
//	to get the length of the list
	getLength(head);	
	
//	linear search in the linked list
	linearSearch(head,225);
	linearSearch(head,25);
	linearSearch(head,5);
	
//	reverse a linked list using iterative method
display(head);
		node* temp = reverse(head);
	cout<<endl<<"the linked list in the reverse order : ";
	display(temp);
	
//	reverse a linked list using iterative method
//	node* temp1 = reverse_using_Stack(head);
//	cout<<endl<<"the linked list in the reverse order : ";
//	display( temp1);
	
//	remove duplicate th element from a linked llist
cout<<endl;
	node* head1=NULL;
	cout<<"After inserting the element at the Tail ";
	insertAtEnd(head1,1);
	insertAtEnd(head1,2);
	insertAtEnd(head1,2);
	insertAtEnd(head1,2);
	insertAtEnd(head1,2);
	insertAtEnd(head1,3);
	insertAtEnd(head1,4);
	insertAtEnd(head1,4);
	display(head1);
	cout<<endl;
	removeDuplicate(head1);
	display(head1);
	
	
	
	cout<<endl<<"the linked list in the revrese  order "<<endl;
	node* temp2 = reverse_rec(head);
	display(temp2);
	
	
	
	
	cout<<endl<<endl<<endl;
//	Check whether the linked list is palindrome or not
	cout<<"Check whether the linked list is palindrome or not"<<endl;
	node* heads = NULL;
	insertAtBeg(heads,1);
	insertAtEnd(heads,2);
//	insertAtEnd(heads,3);
//	insertAtEnd(heads,4);
//	insertAtEnd(heads,1);
	display(heads);
	if(CheckPalindrome(heads))
		cout<<"The linked list is palindrome"<<endl;
	else
		cout<<"The linked list is not palindrome"<<endl;
		
	
	
cout<<endl<<endl<<endl<<"\t";
cout<<"Add the number of two linked list"<<endl;	
	display(head1);
	display(heads);
	node* temp12 = heads;
	node* temp4 = getTail(temp12);
	cout<<temp4->data;
	
	cout<<endl;
	cout<<"After adding the node of the linked list the resultant list is "<<endl;
	node* temp3 = add(head1,heads);
	display(temp3);
	
	
cout<<endl<<endl<<endl;

if(checkLoop(head1)){
	cout<<"the loop is present in the list "<<endl;
}
else{
	cout<<"the loop is not present in the list "<<endl;
}
	cout<<endl<<endl<<endl;



cout<<endl<<"The new linked list"<<endl;
node* h = NULL;
	insertAtBeg(h,15);
	insertAtEnd(h,20);
	insertAtEnd(h,30);
	insertAtEnd(h,40);
	insertAtEnd(h,10);
	display(h);
	cout<<getTail(h)->data;
	getTail(h)->next = h;
	cout<<endl<<endl;
	if(checkLoop(h)){
	cout<<"the loop is present in the list "<<endl;
}
else{
	cout<<"the loop is not present in the list "<<endl;
}
	cout<<endl<<endl<<endl;
	cout<<endl<<"The new linked list"<<endl;
	node* h1 = NULL;
	insertAtBeg(h1,150);
	insertAtEnd(h1,200);
	insertAtEnd(h1,300);
	insertAtEnd(h1,400);
	insertAtEnd(h1,100);
	insertAtEnd(h1,500);
	display(h1);
	getTail(h1)->next= h1;
	if(checkLoopFrom_Floyad_cycle_det(h1))
	{
		cout<<"the loop is present in the list "<<endl;
	}
	else
	{
		cout<<"the loop is not present in the list "<<endl;
	}
	node* loop = getStartingPoint(h1);
	cout<<"Loop: "<<loop->data;
	
	
cout<<middle(h1)->data;
}