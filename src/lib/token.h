#ifndef TOKEN_H
#define TOKEN_H


// TO DO : Look how I should orgnaize this sht in order to save memory
typedef struct token {
    int id;
    char*text;
    int length;
    struct token*tokens;
    int order;
} token;

token*newToken();
void freeToken(token*); // Recursive


#endif