# Expression-Evaluator-
Convert expressions in reverse Polish notation (RPN), also known as postfix notation, into the conventional infix notation

The program must read in an expression, print its value in conventional infix notation, recognize the following commands:
• set var num:
     set the variable var to value num. 
• unset var: 
     reverts the variable var to the unassigned state.
• print: 
     prettyprints the expression. Details in the example below.
• eval: 
     evaluates the expression. This is only possible if all variables in the expression have values (even if the expression is x x -, which is known to be 0, the expression cannot be evaluated). 
     If the expression cannot be evaluated, there will be an error message printed out. 
     
For example (output in italics):
INPUT: 1 2 + 3 x - * ABS NEG done
-|((1 + 2) * (3 - x))|

INPUT: eval
x has no value.

INPUT: set x 4
INPUT: print
-|((1 + 2) * (3 - 4))| 

INPUT: eval
-3

INPUT: set x 3
INPUT: print
-|((1 + 2) * (3 - 3))| 

INPUT: eval
0

INPUT: unset x
INPUT: print
-|((1 + 2) * (3 - x))|

INPUT: eval
x has no value.


PS: Numeric input shall be integers only. If any invalid input is supplied to the program, its behaviour is undefined. 
    Note that a single run of this program manipulates one expression only.
    If you want to use a different expression, you need to restart the program.
