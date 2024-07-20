//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
    if (!head) return nullptr;

    // Dummy nodes to point to the beginning of 0s, 1s and 2s lists
    Node zeroDummy(0), oneDummy(0), twoDummy(0);
    Node* zeroTail = &zeroDummy;
    Node* oneTail = &oneDummy;
    Node* twoTail = &twoDummy;

    // Traverse and link nodes to respective lists
    Node* current = head;
    while (current) {
        if (current->data == 0) {
            zeroTail->next = current;
            zeroTail = zeroTail->next;
        } else if (current->data == 1) {
            oneTail->next = current;
            oneTail = oneTail->next;
        } else {
            twoTail->next = current;
            twoTail = twoTail->next;
        }
        current = current->next;
    }

    // Combine the three lists
    zeroTail->next = (oneDummy.next) ? oneDummy.next : twoDummy.next;
    oneTail->next = twoDummy.next;
    twoTail->next = nullptr;

    // Head is the beginning of the 0s list
    return zeroDummy.next;
        
        // Add code here
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends