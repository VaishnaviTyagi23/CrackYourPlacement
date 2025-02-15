//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
         if(head==NULL||head->next==NULL){
            return head;
        }
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* temp=curr->next;
            while(temp!=NULL&&temp->data<=curr->data){
                temp=temp->next;
            }
            if(temp==NULL){
                prev=curr;
                curr=curr->next;
            }
            else if(temp!=NULL&&curr==head) {
                curr=curr->next;
                head=curr;
            }
            else if(temp!=NULL&&curr!=head){
                prev->next=curr->next;
                curr=prev->next;
            }
                    

        }
        return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends