# Chapter 3

String
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
```
string s("a string.");    
for (char c : s) c = 'X';
```

[Exercise 3.8](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_8.cpp)
---
Exercise 3.9
---
> What does the following program do? Is it valid? If not, why not?
```
string s;
cout << s[0] << endl;
```

No, since `s` can be empty. 

[Exercise 3.10](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_10.cpp)
---
Exercise 3.11
---
> Is the following range for legal? If so, what is the type of c?
```
const string s = "Keep out!";
for (auto &c : s){ /*... */ }
```
`c` is a reference of a constant string. So `c` should be a constant char reference. 
The type of `c` is `const char&`.

Vector 
===
Exercise 3.12
---
> Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.
```
vector<vector<int>> ivec;         // legal, vector of vector
vector<string> svec = ivec;       // illegal, types are different
vector<string> svec(10, "null");  // legal. svec has 10 string "null". 
```

Exercise 3.13
---
```
vector<int> v1;         // size:0,  no values.
vector<int> v2(10);     // size:10, value:0
vector<int> v3(10, 42); // size:10, value:42
vector<int> v4{ 10 };     // size:1,  value:10
vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
vector<string> v6{ 10 };  // size:10, value:""
vector<string> v7{ 10, "hi" };  // size:10, value:"hi"
```

[Exercise 3.14](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_14.cpp)
---
[Exercise 3.15](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_15.cpp)
---
Exercise 3.16
---
Skip 


[Exercise 3.17](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_17.cpp)
---

[Exercise 3.20](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_20.cpp)
---

Iterator
===

[Exercise 3.22](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_22.cpp)
---

[Exercise 3.24](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_24.cpp)
---

[Exercise 3.25](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_25.cpp)
---

Exercise 3.26
---
> In the binary search program on page 112, why did we write mid=beg+(end-beg)/2; instead of mid=(beg+end) /2;?

Because iterator doesn't have `iter1 + iter2` function

# Arrays

Exercise 3.28
---
> What are the values in the following arrays?

```
string sa[10];      //null
int ia[10];         //0

int main() 
{
    string sa2[10]; //null
    int ia2[10];    //undefined
}
```

Exercise 3.34
---
> Given that p1 and p2 point to elements in the same array, what does the following code do? Are there values of p1 or p2 that make this code illegal?    

```
p1 += p2 - p1;
```
- `p1` moves `p2 - p1` distance. 
- It is valid when both `p1` and `p2` are valid. 

Exercise 3.37
---
> What does the following program do?

```
const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}
```

It will output all character in array `ca` but `ca` doesn't end with `\0`, it will also print unknow charracter after that memory. 

Exercise 3.38
---
> In this section, we noted that it was not only illegal but meaningless to try to add two pointers. Why would adding two pointers be meaningless?

Points store address in the memory, so they are ordinary data which can't be added. 

[Exercise 3.39](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_39.cpp)
---
[Exercise 3.40](https://github.com/gong7788/cpp-primer/blob/master/ch03/ex3_40.cpp)
---

