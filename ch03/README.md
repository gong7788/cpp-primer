Chapter 3
=======
Exercise 3.2: [part_a](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_2a.cpp) | [part_b](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_2b.cpp)
-----
Exercise 3.3:
-----
> Explain how whitespace characters are handled in the string input operator and in the getline function.
  + `cin >> word`, input is sperated by whitespace. 
  + `getline(cin, line)`, input is sperated by newline `\n`
 
Exercise 3.4: [part_a](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_4a.cpp) | [part_b](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_4b.cpp)
----
Exercise 3.5: [part_a](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_5a.cpp) | [part_b](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_5b.cpp)
----
[Exercise 3.6](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_6.cpp)
---
Exercise 3.7
---
> What would happen if you define the loop control variable in the previous exercise as type char? Predict the results and then change your program to use a char to see if you were right.

Using `char c`, result won't change since c is a copy of character in `s`. We should use `char &c`.
`string s("a string.");
for (char c : s) c = 'X';` 
