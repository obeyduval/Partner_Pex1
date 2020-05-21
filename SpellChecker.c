//
// Created by C22MasonUtt and C22Timothy.Jackson on 5/11/2020.
// Documentation https://www.geeksforgeeks.org/ternary-search-tree/
//

#include "SpellChecker.h"
#include "ternarytree.h"
#include "readFile.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){

    struct Node *root = NULL;

//    char filename[50] = " cmake-build-debug/test1.txt"
    char filename[50] = "../cmake-build-debug/dictionary.txt";
    readFIle(filename, &root);


    printf("Traversal of ternary search tree\n");

    traverseTST(root);

    printf("\nSearch results for NACHO, DUVAL, AARDVARKS, and SIDEPIECE\n");

    //Test Cases For Search TST
    //should find NACHO, AARDVARKS, and SIDEPIECE, should not find DUVAL
    searchTST(root, "NACHO")? printf("Found\n"): printf("Not Found\n");
    searchTST(root, "DUVAL")?  printf("Found\n"): printf("Not Found\n");
    searchTST(root, "AARDVARKS")?   printf("Found\n"): printf("Not Found\n");
    searchTST(root, "SIDEPIECE")?  printf("Found\n"): printf("Not Found\n");


    return 0;
}