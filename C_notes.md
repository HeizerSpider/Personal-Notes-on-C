# C Notes

### Simple data types and declarations
short x, y, z; /* Declare three 16-bit integers  
long a, b = 13; /* Declare two 32-bit integers  

long a, *b, **c;

/* declared with a type corresponding to the return */
long add1(a)
 long a;
 {
 return a+1;
 }
 
### Expressions

|Expression|Value|
|----------|-----|
|a + b| Addition|
|a - b |Subtraction|
|-a |2's complement (negative)|
|a * b |Multiplication|
|a / b |Division|
|a % b |Modulus|
|(a)|Value of a; parenthesis used for grouping|
|a < b |True (nonzero) if a is less than b, else false|
|a > b |True (nonzero) if a is greater than b, else false|
|a <= b |Less-than-or-equal-to comparison|
|a >= b |Greater-than-or-equal-to comparison|
|a == b |Equal-to comparison (don't confuse with assignment =)|
|a != b |Not-Equal-to comparison|
|!a True |(nonzero) if a is false (zero); Boolean not|
|a && b |Wordwise AND: false (zero) if either a or b is false|
|<code>a &#124;&#124; b</code> |Wordwise OR: true (nonzero) if either a or b is true|
|~a |Bitwise complement of a|
|a & b |Bitwise AND|
|<code>a &#124; b</code> |Bitwise OR|
|a >> b |Integer a shifted right b bit positions|
|a << b |Integer a shifted left b bit positions|
|x = a |Assignment: has value a, but sets the current value of x to the value of a (don't confuse
with equal-to comparison ==)|
|&x |Address of the variable x|
|*p |Contents of the location whose address is p|
|f(a,b,...) |Procedure call|
|p[a] |Array reference: element a of array p|
|x.c |Component c of structure x|
|p->c |Component c of structure pointed to by p|
|sizeof x |Size, in bytes, of the representation of x|


### Statements and Programs

a=b+3;

Compound Statements
```
{ temp=a; a=b; b=temp;
}

{ int temp;
 temp = a;
 a = b;
 b = temp;
}
```


Conditional Execution
```
if (a < b) biggest = b;
else biggest = a;
```

We shall use two C constructs for program loops:
```
while (cond) statement;
```
and
```
for (init; test; increment) statement;
```

Switch statements
```
long qfib(n)
long n;
{ switch (n)
 { case 0:
 case 1: return n;
 case 2: return 1;
 case 3: return 2;
 case 4: return 3;
 case 5: return 5;
 case 6: return 8;
 default: return ifib(n);
 }
}
```

Summary of useful C statement types

|Statement type| Use|
|--------------|----|
|expr;| Evaluate expression expr|
|if (test) statement;| Conditional test|
|else statement;| Optionally follows if statement|
|switch(expr) {
 case C1: ...
 case C2: ...
 ...
}|
N-way branch (dispatch)|
|while (test) statement;| Iteration|
|for (init; test; incr) statement;||
|return expr;| Procedure return; expr is optional|
|break;| Break out of loop or switch|
|continue;| Continue to next loop iteration|
|tag:| Define a label for goto|
|goto tag;| Transfer control|

### Arrays and Pointers
Declaration of arrays
```/* 100-employee payroll record ie 100 elemetns in an array */
long Salary[100];
char *Name[100];
```
C treats arrays as pointers

### Structures
Fixed size records of heterogeneous data
```
struct Employee {
 char *Name; /* Employee's name. */
 long Salary; /* Employee's salary. */
};
```
