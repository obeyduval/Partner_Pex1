//
// Created by C22Timothy.Jackson on 5/16/2020.
//

#include "readFile.h"
#include "SpellChecker.h"
#include "ternarytree.h"

void readFIle(char filename[], struct Node **root){

    FILE *fptr;

    if ((fptr = fopen(filename,"r+")) == NULL){
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    char temp[50];
    memset(temp, ' ',50);
//    char reset;
    char c;
    int i = 0;
    while((c != EOF))
    {

        c = fgetc(fptr);
        if(c != '\r')
        {
            if(c != '\n') {
                temp[i] = c;
                i++;
            }
        }
        else
        {
            insert(root, temp);
            i = 0;
            memset(temp, ' ',49);
        }
    }

    fclose(fptr);



}
