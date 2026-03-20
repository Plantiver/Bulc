# Bulc

Bulc stand for *Bulc Universal Language compiler*.
It's a little project I'm working on.

The objective is -just as it says- to build a universal compiler.

I'm considering that given enough information about a language's architecture, I can build LLVM-IR out of a proper code, written in this language.

I'm most probably organising everything like this:
- [ ] Parse the language's architecture
- [ ] Parse a given code, and produce an abstract syntax tree
- [ ] Convert it to LLVM-IR

And then everything will be good.

For now, I still have to learn more about LLVM-IR (how *real* programming language compile to it), and to think about how a language should be represented.
I need to be universal, so every kind of paradygm that could ever be used has to be here.

I'll be working on C, 'cause with python it seems too easy and i'll most probly do some random shitty code.
And, woow, C is sooo crazily fast, I need to optimize this little thing as much as I can, so it won't take 0.3 seconds to run, but 0.03.
(For real, I'm using C cause it's actually using some interesting 'properties' -such as memory management- and I need to get better at working with those.)
