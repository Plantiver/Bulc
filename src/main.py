"""
Ces commentaires seront enlevés, et remplacés au moment opportun par des commentaires en anglais dans le code,
et des annotations dans le ReadMe. Merci de s'y référer.

Ici, je ne tiens que l'implémentation en python de mon projet, afin de pouvoir en donner une version d'essai beaucoup plus
rapidement (il s'agit aussi d'un projet scolaire, sur lequel je dois me tenir à des deadlines).



Je rappelle l'objectif, qui est de fournir un *compilateur universel*, capable, étant donné une description syntaxique
et logique d'un langage, i.e. ses paradigmes de fonctionnement, de compiler un programme dans ce langage.

Dans la suite, on désignera par L le langage fourni par l'utilisateur et dont on souhaite implémenter un compilateur.
On parlera de Code pour désigner le programme en L à compiler.

Au niveau des étapes qui me semblent être nécessaire, je considère:
- La tokenization du Code
- Le parsing des tokens en Ast
- La transformation de l'Ast en langage compilé.

Pour les deux premières étapes, c'est essentiellement reconstruire Lex et Yacc, ce qui, de ce que j'ai regardé,
n'est pas trop compliqué. Je prendrais des syntaxes symilaire au leur, mais je me garde la liberté d'implémenter le tout
à ma manière.

Quand à la 3ième, je n'ai pas trouvé d'exemple de ce que je veux réaliser sur internet pour l'instant (j'ai peut-être
mal cherché, mais je ne vois rien), donc j'attacherais une grande importance à dévellopper cette partie, et à la rendre
tout à fait compréhensible. Egalement, je réfléchirais à la manière dont on peut l'implémenter sans se cantonner à un
unique langage.






"""



