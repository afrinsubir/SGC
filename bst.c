#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

// create node
struct node* create(int x)
{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = x;
    n->left = n->right = NULL;
    return n;
}

// insert into BST
struct node* insert(struct node* root, int x)
{
    if(root == NULL)
        return create(x);

    if(x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);

    return root;
}

// search
int search(struct node* root, int key)
{
    if(root == NULL)
        return 0;

    if(root->data == key)
        return 1;

    if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main()
{
    struct node* root = NULL;
    int n, i, x, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        root = insert(root, x);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    if(search(root, key))
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
