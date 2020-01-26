#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define maximum size 
#define MAX 2600

// Create the memory node
struct memory {
    char *proID;
    int start;
    int size;
    int isFree;
    struct memory *next;
};

// Starting node 

struct memory *START = NULL;
