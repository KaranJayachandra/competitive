You are given an array A of size N that contains integers. Here,  is an even number. You are required to perform the following operations:

- Divide the array of numbers in two equal halves. Note: Here, two equal parts of a test case are   treated by dividing the array into two equal parts.
- Take the first digit of the numbers that are available in the first half of the array (first 50% of the test case)
- Take the last digit of the numbers that are available in the second half of the array (second 50% of the test case)
- Generate a number by using the digits that have been selected in the above steps
Your task is to determine whether the newly-generated number is divisible by 11.

KARAN NOTES:

Brute force methods won't work for large inputs. Consider the divisibility rule where we check if the difference between the odd digits (digits of a number at odd powers of ten) and even digits (digits of a number at even powers of ten) of a number is divisible by 11 for the whole number to be divisible by 11.