//
// Created by C22Timothy.Jackson on 5/11/2020.
//

#include "SpellChecker.h"
#include "ternarytree.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){

    struct Node *root = NULL;

    insert(&root, "dog");
    insert(&root, "dogs");
    insert(&root, "danger");
    insert(&root, "angle");

    printf("Traversal of ternary search tree\n");

    traverseTST(root);

    printf("\nSearch results for dogs, and, and angel\n");

    searchTST(root, "dogs")? printf("Found\n"): printf("Not Found\n");
    searchTST(root, "and")?   printf("Found\n"): printf("Not Found\n");
    searchTST(root, "angel")?  printf("Found\n"): printf("Not Found\n");

    return 0;
}