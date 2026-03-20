#ifndef CONSTRUCTION_TREE_H
#define CONSTRUCTION_TREE_H

#include "tokenStack.h"
/*
Here's the tree i'll be using for pattern matching in the parser part
It contains as values the id of a token it could form, and the priority to give it
There's also the matchToken, which represent what token have to be matched when looking throught the tree
*/


typedef struct conTree {
    int constructedTokenId;            // should be 0 if no token can be formed
    int priority;
    int matchToken;
    int length;
    conTree**sub;
    int*constructionPattern;           // Represents which tokens should be kept and which should be forgotten when building the new token
} conTree;

conTree*newConTree(void);
void freeConTree(conTree*);
int* patternMatch(conTree*, tokenStack*);

#endif