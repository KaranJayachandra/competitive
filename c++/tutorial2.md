# Conditional Statement

[Full Code Link](tutorial2.cpp)

In many cases, we would like code to be executed only when certain conditions are satisfied. This is done using conditional statments in programming langauges. We consider the same case as in the [first example](tutorial1.md). We had performed addition, subtraction, multiplication and division. But in a real world example we would like only one math operation to be performed based on the user input. This is accomplished using the following piece of code. We have initially taken input from the user about the operation to be done using a character variable using the following code.
```
char op;
cout << "Enter Operation: " << endl;
cin >> op;
```
Once we have this information, we need to execute certain statements based on the value of 'op'. Here we look at two different ways of doing this. First we look at 'if' statements.
```
if (op == '+') {
    cout <<  "The sum is " << a + b << endl;
} 
else if (op == '-') {
    cout <<  "The difference is " << a - b << endl;
}
else if (op == '*') {
    cout <<  "The product is " << a * b << endl;
}
else if (op == '/') {
    cout <<  "The quotient is " << a / b << endl;
}
else {
    cout << "ERROR: Unrecognized operator" << endl;
}
```
The the control i.e., the execution reaches the 'if' line, it checks the condition within the bracket. In the first case, it checks if the value in 'op' is the same as '+'. The double equal to operator is just for this as a single equal to will just assign the value '+' to 'op'. If the condition is satisfied, the statements within the flower brackets after the 'if' statement is executed. If the condition is not satisfied, we look at the 'else' part of the code. In summary, when the execution reaches the 'if' statement and the condition is satisfied the first code block is executed and if not, the code block below the 'else' statement is executed. This is repeated for multiple conditions. In this example, this is for addition, subtraction, multiplication and division.

The second method to do this is using the 'switch' statement. Here we look at the value in 'op' and compare it to different cases.
```
switch (op) {
    case '+': 
        cout <<  "The sum is " << a + b << endl;
        break;
    case '-':
        cout <<  "The difference is " << a - b << endl;
        break;
    case '*':
        cout <<  "The product is " << a * b << endl;
        break;
    case '/':
        cout <<  "The quotient is " << a / b << endl;
        break;
    default:
        cout << "ERROR: Unrecognized operator" << endl;
        break;
}
```
When any of the cases are true, the code next to it is executed. For example, first, the program checks if 'op' matches '+', if yes, the addition operation is done and the 'break' statment exits the switch statement. This is again repeated for the different operations. The need for the 'break' statement is to stop checking the cases once a match is found. If not, all the statments under cases that match the input will be executed. This is a feature of few programming laguages and in other langauges, only those cases that match will be executed and then the execution automatically exits the switch statement. The basic code example and come googling would help most people understand the basics of conditional statements using any programming language. The commands can change but the princples remain the same.