# Functions

[Full Code Link](tutorial3.cpp)

We look at an important concept in coding, 'functions' in this tutorial. Consider a piece of code that needs to be executed mulitple times. It would a wasted effort to rewrite it repeatedly. To solve this problem, we add all this into a small block that takes some input and returns some output. To other users, whatever is inside the function could just as well be a black box as it's irrelevant to them. As long as the function is working, it can be used as many times as required. This also helps collaborative efforts, each person can develop one function and everything can come together to form the main program. A basic function to calculate simple interest is shown here.
```
float simpleInterest(int principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
```
The function takes three variables as input and returns the calculated simple interest as output. It is important to note that each variable's data type needs to be defined. The functions takes whatever values are provided to it and assigns them to the variables, 'principal', 'rate' and 'time'. We can perform whatever operations are required and then return a value. Here the type of the return value is float and this is given back to wherever the function is used. Another important thing to note is that even though the function is defined here, we have to 'declare' it. This means telling the compiler that "I have written a function that looks like this and don't get confused when you see this function being used". This is done when the function is used before it's definition and can be avoided if you ensure that all the functions are defined before they are used. But usually, we added all our function to an external file and hence this is a useful way of making sure the compilter understand the user defined functions. The declaration is basically only the first line of the function added before it is used.
```
float simpleInterest(int principal, float rate, float time);
```
The basic code example and come googling would help most people understand the basics of functions using any programming language. The commands can change but the princples remain the same.