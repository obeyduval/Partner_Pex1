//
// Created by C22Timothy.Jackson on 5/14/2020.
//

#ifndef MYEXE_TERNARYTREE_H
#define MYEXE_TERNARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 50

//A node of ternary search tree
struct Node
{
    char data;

    // True if this character is last character of one of the words
    unsigned isEndOfString: 1;

    struct Node *left, *eq, *right;
};


void insert(struct Node** root, char *word);
void traverseTSTUtil(struct Node* root, char* buffer, int depth);
int searchTST(struct Node *root, char *word);
void traverseTST(struct Node* root);


#endif //MYEXE_TERNARYTREE_H
