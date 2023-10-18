# Exception-Handling
THEORY

One of the advantages of C++ over C is Exception Handling. Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. There are two types of exceptions: a)Synchronous, b)Asynchronous (i.e., exceptions which are beyond the program’s control, such as disc failure, keyboard interrupts etc.). C++ provides the following specialized keywords for this purpose:
try: Represents a block of code that can throw an exception.
catch: Represents a block of code that is executed when a particular exception is thrown.
throw: Used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself.

Why Exception Handling? 
The following are the main advantages of exception handling over traditional error handling:

1) Separation of Error Handling code from Normal Code: In traditional error handling codes, there are always if-else conditions to handle errors. These conditions and the code to handle errors get mixed up with the normal flow. This makes the code less readable and maintainable. With try/catch blocks, the code for error handling becomes separate from the normal flow.

2) Functions/Methods can handle only the exceptions they choose: A function can throw many exceptions, but may choose to handle some of them. The other exceptions, which are thrown but not caught, can be handled by the caller. If the caller chooses not to catch them, then the exceptions are handled by the caller of the caller. 
In C++, a function can specify the exceptions that it throws using the throw keyword. The caller of this function must handle the exception in some way (either by specifying it again or catching it).

3) Grouping of Error Types: In C++, both basic types and objects can be thrown as exceptions. We can create a hierarchy of exception objects, group exceptions in namespaces or classes and categorize them according to their types.
 

C++ Exceptions:

When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (error).

C++ try and catch:

Exception handling in C++ consists of three keywords: try, throw and catch:

The try statement allows you to define a block of code to be tested for errors while it is being executed.

The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

The catch statement allows you to define a block of code to be executed if an error occurs in the try block.
The try and catch keywords come in pairs:

We use the try block to test some code: If the value of a variable “age” is less than 18, we will throw an exception, and handle it in our catch block.

In the catch block, we catch the error if it occurs and do something about it. The catch statement takes a single parameter. So, if the value of age is 15 and that’s why we are throwing an exception of type int in the try block (age), we can pass “int myNum” as the parameter to the catch statement, where the variable “myNum” is used to output the value of age.

ALGORITHM
Part-A

The code you provided is a C++ program that performs division of two numbers, a and b, and uses exception handling to catch and handle the case where b is equal to 0.

Here's a breakdown of how the code works:

1.It declares three integer variables: a, b, and c.

2.It prompts the user to enter two numbers using cout.

3.It reads the two numbers into a and b using cin.

4.It checks if b is not equal to 0 using an if statement.

5.If b is not equal to 0, it performs the division of a by b and stores the result in c. Then, it prints the result using cout.

6.If b is equal to 0, it throws an exception with the value of b.

7.It catches the exception using a catch block that specifies the exception type as int, meaning it will catch exceptions of type int.

8.Inside the catch block, it prints an error message indicating that division by the value of b (which is 0) is not allowed.

9.In your provided example, when the user enters "2" for a and "0" for b, the program correctly detects that b is equal to 0 and throws an exception. The exception is caught in the catch block, and the program prints the error message "Divide by 0 error."

10.So, the output you provided is expected and demonstrates the proper functioning of the exception handling mechanism in C++.

Part-B

The code you provided is a C++ program that takes a user's age as input and uses exception handling to determine whether the person is eligible based on their age. Here's the algorithm of how the code works:

1.Declare an integer variable a to store the age.

2.Display a message using cout to prompt the user to enter their age.

3.Read the user's input into the variable a using cin.

4.Use a try block to begin exception handling.

5.Inside the try block, check if the value of a is greater than or equal to 18 using an if statement.

6.If a is greater than or equal to 18, it means the person is eligible, so print a message using cout indicating eligibility along with their age.

7.If a is less than 18, it means the person is not eligible, so throw an exception with the value of a.

8.Use a catch block to catch the exception. In this case, the exception type specified is int, meaning it will catch exceptions of type int.

9.Inside the catch block, print an error message indicating that the person is not eligible, along with the word "error."

10.Finally, return 0 to indicate successful program execution.

The code's purpose is to check if the age entered by the user is 18 or older. If it is, the program informs the user that they are eligible. If the age is less than 18, an exception is thrown and caught to display an error message indicating that the person is not eligible.

OUTPUT

Part A

Enter 2 numbers:2/0

Divide by 0 error

Part B

Enter age 17

Not Eligible error

