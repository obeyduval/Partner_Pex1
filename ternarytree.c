//
// Created by C22Timothy.Jackson on 5/14/2020.
//

#include "ternarytree.h"
#include <stdlib.h>
#include <stdio.h>

//Function to create a new ternary search tree node
struct Node* newNode(char data)
{
    struct Node* temp = (struct Node*) malloc(sizeof( struct Node ));
    temp->data = data;
    temp->isEndOfString = 0;
    temp->left = NULL;
    temp->eq = NULL;
    temp->right = NULL;
    return temp;
}

// Function to insert a new word in a Ternary Search Tree
void insert(struct Node** root, char *word)
{
    // Base Case= Tree empty
    if (*root == NULL)

        *root = newNode(*word);

    // If current of word is smaller value than the root, insert word to left of root

    if ((*word) < (*root)->data)

        insert(&( (*root)->left ), word);

        // If current is greater than root, insert word to right of root
    else if ((*word) > (*root)->data)

        insert(&( (*root)->right ), word);

        // If current character of word is same as root's character,
    else
    {
        if (*(word+1))

            insert(&( (*root)->eq ), word+1);

            // the last character of the word
        else

            (*root)->isEndOfString = 1;
    }
}

// Recursive function to traverse TST

void traverseTSTUtil(struct Node* root, char* buffer, int depth)
{
    if (root)
    {
        // First traverse the left subtree
        traverseTSTUtil(root->left, buffer, depth);

        // Store the character of this node
        buffer[depth] = root->data;

        if (root->isEndOfString)
        {
            buffer[depth+1] = '\0';
            printf( "%s\n", buffer);
        }

        // Traverse the subtree using eq pointer (middle subtree)
        traverseTSTUtil(root->eq, buffer, depth + 1);

        // Finally Traverse the right subtree
        traverseTSTUtil(root->right, buffer, depth);
    }
}

// The main function to traverse a Ternary Search Tree.

void traverseTST(struct Node* root)
{
    char buffer[MAX];
    traverseTSTUtil(root, buffer, 0);
}

// Function to search for word in TST
int searchTST(struct Node *root, char *word)
{
    if (!root)
        return 0;

    if (*word < (root)->data)
        return searchTST(root->left, word);

    else if (*word > (root)->data)
        return searchTST(root->right, word);

    else
    {
        if (*(word+1) == '\0')
            return root->isEndOfString;

        return searchTST(root->eq, word+1);
    }
}

void freeMem(struct Node* temp){

    free(temp);

}