//
// Created by C22Timothy.Jackson on 5/11/2020.
//

#include "SpellChecker.h"
#include "ternarytree.h"
#include "readFile.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){

    struct Node *root = NULL;

    char filename[50] = "../cmake-build-debug/CMakeFiles/test1.txt";

    readFIle(filename, &root);
//
//    insert(&root, "dog");
    insert(&root, "dogs");
//    insert(&root, "danger");
//    insert(&root, "angle");

    printf("Traversal of ternary search tree\n");

    traverseTST(root);

    printf("\nSearch results for dogs, PUNDITRIES, and FANYON\n");

    searchTST(root, "dogs")? printf("Found\n"): printf("Not Found\n");
    searchTST(root, "PUNDITRIES")?   printf("Found\n"): printf("Not Found\n");
    searchTST(root, "FANYON")?  printf("Found\n"): printf("Not Found\n");


    return 0;
}