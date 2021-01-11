# Loops

[Full Code Link](tutorial3.cpp)

There are many instances in programming where we would like to execute the same piece of code multiple times. Loops help us acheive this functionality. Here I am discussing two types of loops, the 'for' loop and the 'while' loop. Usually the 'for' loop is used when we clearly know how many times we need the code to execute and the 'while' loop when we don't have an idea about the termination condition.

In the below code, we use a variable 'i' to basically count the number of times, we run the loop. We initially store a value of 0 in 'i' and then check if it is less than 10, if it is, the code block is executed, if not, the loop stops repeating. Once the loop has run, the value of 'i' is incremented using the 'i++' command. Thus the loop runs for a total of 10 times before exiting. Two other important commands are 'continue' and 'break'. The 'continue' command is used when we would like to cancel the current iteration of the loop. ONLY the current iteration. As soon as a continue statement is hit, the loop moves to the next iteration. The 'break' statment is used when we would like to stop the execution of the loop completely. In this case, none of the left over iterations are executed.

In short, the values of i and if the loop executes is shown in the following table.

|i|i<10|Loop Statements|
|:-:|:-:|:-:|
|0|TRUE|Execute|
|1|TRUE|Execute|
|2|TRUE|Execute|
|3|TRUE|Execute|
|4|TRUE|Execute|
|5|TRUE|Execute|
|6|TRUE|Execute|
|7|TRUE|Execute|
|8|TRUE|Execute|
|9|TRUE|Execute|
|10|FALSE|Doesn't Execute|
After 'i' reaches 10 the loops stops executing.
```
for (int i = 0; i < 10; i++) {
    if (i == 0) continue;
    else if ( i == 8 ) break;
    cout << i << endl;
}
```
In the case of a 'while' loop, a classic example would be to find the most significant bit in a number. Here, we keep dividing the number 'n' by 10 which removes the least significant bit in the number. Please refer to my [first tutorial](tutorial1.md) to understand why we don't get a decimal value. This process of removing the least significant number is done until only the last digit remains. Notice that in this case, depending on the number of digits in the number, the number of executions of the loop changes.
```
int n = 40926376985;
while (n > 9 ) {
    n = n / 10;
}
```
The basic code example and come googling would help most people understand the basics of loops using any programming language. The commands can change but the princples remain the same.