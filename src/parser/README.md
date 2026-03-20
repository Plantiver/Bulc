Okkk, this would most probably be the easiest part, so let's begin here.

I'm trying, given a text and an architecture, to return a parsed tree that represent all of it.

The way I'll be handling it for now:
 - Detect all of key-word
 - Detect *delimiter* (a special type of key-words, that would help a lot)
 - Convert all left char to tokens
 - Proceed to convert all of them in one token that represent the whole programm (using LR)


A token is a C struct containing:
 - an id, for the token type
 - a pointer to the text that hold this token
 - the length of this substring
 - a list of sub-tokens
 - the length of this list (called the order of the token)


For the LR algorithm, I'll build a stack struct to hold tokens while going throught all chars.
I'll first transform everything I can to a token, stacking it on lStack.
Then I'll use LR algorithm from right to left, stacking to rStack and matching with patterns.
And I'll go back and forth, alternatively stacking on left or right stack, and matching patterns to make it smaller.
If I do nothing for a full period, then raise a syntax error.
If I eventually reach a size of one, I can end the programm and return the parsed tree.

For pattern matching, I'll use a tree to represent how I can transform an expression of token to a single token.
The tree hold as value the current token it could form (and its priority), and lead to a list of struct representating an id and a subtree (there's also the length of this list).
For matching, let's say (3,2,7,5,8,6,3,...) tokens, we look throught all of the tree as long as we can build something. We stack all of this and return. We then proceed to turn those tokens to a new token, the one with the highest priority and order.


Once all of this would have been done, I think we would have achieved this part.




