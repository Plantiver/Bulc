# Bulc

Bulc stand for *Bulc Universal Language compiler*.
It's a little project I'm working on.

The objective is -just as it says- to build a universal compiler.

I'm considering that, given enough information about a language's architecture, i can build LLVM-IR out of a proper code, written in this language.

I'm most probably organising everything like this:
- [ ] Parse the language's architecture
- [ ] Parse a given code, and produce an abstract syntax tree
- [ ] Convert it to LLVM-IR

And then everything will be good.

For now, I still have to learn more about LLVM-IR (how *real* programming language compile to it), and to think about a language should be represented.
I need to be universal, so every kind of paradygm that could ever be used has to be here.

