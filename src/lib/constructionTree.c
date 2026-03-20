#include "constructionTree.h"




/*
So, this funtion work recursively, and should, given a
contree and a tokenStack, return the id, of the new token to
build. It should also send back how many tokens would be consumed
and, among those, which would have to be include in the final
token order.

So, i would have to create another struct just for this return type
And I kinda won't.
So, i'm doing it, but using an auxiliary function, and creating a
struct just for now

(conTree*, tokenStack*) -> (int, int n, n*int)

*/
struct resultat {
    int id;
    int priority;
    int length;
    int* pattern;
};
struct resultat aux(conTree*t, tokenStack*x) {
    struct resultat r;
    
    // Here, I have to write everything



    return r;
}


int* patternMatch(conTree*t, tokenStack*s) {
    int* result = malloc(3*sizeof(int));

    

    return result;
}