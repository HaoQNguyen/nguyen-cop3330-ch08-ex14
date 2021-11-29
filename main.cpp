#include "function.h"

int main()
{
    cout << sum(2, 3) << endl; // expect output 6
    cout << sum2(5, 6); // expect output 11
}

/*
    - Can we declare a non-reference function argument? Yes
    - What might that mean? Just as in main(), where the developer wants a variable 
      to be unable to change within its scope, that variable is marked const, marking
      a function argument const prevents it to be changed while it is in that function
    - Why might we want to do that? When we want the program to have an error checking
      mechanism for the unchangable variable. Building an application is a long-term
      process. Assuming that when the developer wanted to design the function that will
      not be able to change its argument, they should put a const in the parameter.
      But after a long designing process, somewhere within the code, they try to change
      the argument to implement some feature, forgetting about the reason why they wanted
      the argument no being able to change on day one, then the const will kick in and
      prevent them from doing that
    - Why don’t people do that often? Because in reality, functions are usually short in
      length, so an error in changing the argument somewhere inside of it is unlikely
      to happen and managable. Also, functions that don't modify its argument is rare,
      so putting a const to an argument and having to copy its value to another local
      variable will take up more memory than modifing the argument itself.