# Basic Input/Output Operations

[Full Code Link](tutorial1.cpp)

Any coding language on needs the user's input and provides the user with output for it to be useful. Of course there are programs that do neither but they are ultimately used by other programs to fullfill the aforementioned goal. Here I explain the simple code written in C++ where I perform the basic mathematical operations. The first line:
```
#include <iostream>
```
Here we load the most basic library used by C++ for input/output operations. Almost all C++ code would start with this line.
```
using namespace std;
```
Here we are simplfying our code to use one 'folder' called 'std' from the loaded library. This would reduce the length of code. For example, instead of writing, 'std::cout' we can simply write 'cout'.
```
int main() { 
```
This line is the entry point for the C++ program. When the C++ Compiler sees this line. It starts the execution of the code from here.
```
int a, b;
```
Since we are working with numbers to do the basic math operations. We need to store these numbers in the computer. This is accomplished using variables. Here we simply declare (let the computer know that it needs to allocate space for) two variables 'a' and 'b'. These numbers will be used to perform the basic operations. 
```
cout << "Enter a number" << endl;
cin >> a;
cout << "Enter a number" << endl;
cin >> b;
```
Now we look to the user to supply these two numbers. The first line prints 'Enter a number' onto the screen so that the user enters the first number and then the command 'cin' takes this number as user input and stores it in the previously declared variable 'a'. The process is repeated for the second variable 'b' as well.
```
cout <<  "The sum is " << a + b << endl;
cout <<  "The difference is " << a - b << endl;
cout <<  "The product is " << a * b << endl;
cout <<  "The quotient is " << a / b << endl;
cout <<  "The quotient is " << (float) a / b << endl;
cout <<  "The remainder is " << a % b << endl;
```
The above lines provide the output of the basic operations. This math operations are done using the operators '+', '-', 'x' and '/'. An operator takes input and returns an output based on how the operator is defined. The first three are quite self-explanatory. The program prints 'The sum is ' followed by the addition of the two numbers supplied and the same is repeated for the difference and the product. But the division operator in C++ is unique. Since we declared our variables to be integers, when we divide the two numbers, C++ provides us with only the quotient after division when using the '/' operator. To obtain the remainder we use the '%' operator and if we would like the decimal answer for the division, we would have to convert the answer to a floating point variable which is a fancy way of telling the C++ program to provide us the decimal value and not just the quotient.
```
}
```
Using the below line, we just end the main block and the program terminates when it reaches this point.