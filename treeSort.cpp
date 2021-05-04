#include <iostream>

class Node
{
public:
    int key;
    Node *left, *right;
};
Node* newNode(int item)
{
    Node* temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Store the tree in an array in sorted order i.e. inOrder
void storeSorted(Node *root, int arr[], int &i)
{
    if(root != NULL)
    {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}

// Store a new node with a given key ib BST
Node* insert(Node* node, int key)
{
    if(node == NULL) return newNode(key);

    if(key < node->key)
        node->left = insert(node->left, key);
    else if(key > node->key)
        node->right = insert(node->right, key);

    return node;
}

void treeSort(int arr[], int n)
{
    Node* root = NULL;

    // Construct the BST
    root = insert(root, arr[0]);
    for(int i = 1; i < n; i++)
        root = insert(root, arr[i]);

    // Store in-order traversal of the BST in arr[]
    int i = 0;
    storeSorted(root, arr, i);
}


int main()
{
    // Input array
    int arr[] = {5, 10, 8, 2, 3, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    treeSort(arr, n);    

    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

