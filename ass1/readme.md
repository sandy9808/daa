# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019003  |   Vasu Gupta | Cipher-vasu |
|    IIB2019004  |   Saloni Singla | Saloni50 | 
|    IIB2019005  |   Sandeep kumar | sandy9808  |

**Group No-**"2"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem statement
Given two sorted arrays of size m and n respectively, you are tasked with finding the element that would be at the k’th position of the final sorted array. Solve using divide and conquer algorithm.
---
## How to use code
Download project
git clone https://github.com/sandy9808/daa 
Project Initialize 
```
cd daa
mkdir ass1

#go to ass1
cd ass1

#Create file
touch readme.md
touch code1.cpp
touch code2.cpp
.
.
```
---

Run the code
```
g++ code1.cpp -o code1
g++ code2.cpp -o code2
./code1
./code2
```
Output
```
The element at the k'th position of the two sorted arrays.
```
---

**Test case**

```

Test Case-1
Input:
1
5 4 5
12 17 18 23 49
11 14 28 31
Output:
18
#--------------------------#
Test Case-2
Input:
1                                                                                               
5 7 4
100 150 256 770 889                                          
119 272 363 445 486 565 892                       
Output:
256
```

---

### Theory
The Divide and conquer strategy solves a problem by:
1)  Divide:  Breaking  the  problem  into  sub  problems  thatare  themselves  smaller  instances  of  the  same  type  ofproblem.
2)  Recursion: Recursively solving these sub-problems.
3)  Conquer: Appropriately combining their answers.
---

### Analysis

**Time Complexity**

<br />Approach 1:
In this recursive divide and conquer approach, the function kthis called a total of logm+logn times. Thus the time complexityof this approach would beO(logk). The best case complexitywill be when either of m and n is zero or k is invalid or k isequal to 1. Thus, the best case time complexity isΩ(1)
<br />Approach 2:
In  this  recursive  divide  and  conquer  approach,  the  function kth  is  called  log  k  times.  Thus  the  time  complexity  of  thisapproach would beO(logm+ logn).The  best  case  complexity  will  be  when  either  of  m  and  n  iszero or k is invalid or k is equal to 1. Thus, the best case timecomplexity isΩ(1)

**Space Complexity**

<br />Approach 1:
<br />This algorithm has a space complexity of O(log k)
<br />Approach 2:
<br />This algorithm has a space complexity of O(log m+log n)

---

### Conclusion

<br />Above two methods have different time complexity and space complexity and meet to fulfill the problem statement. The order in which they are good can be listed as:
<br />I. Approach 1
<br />II. Approach 2
<br />Based on the time complexity and space complexity.

### References

<br />https://www.geeksforgeeks.org/k-th-element-two-sorted-arrays/
<br />https://tutorialspoint.dev/algorithm/divide-and-conquer/k-th-element-two-sorted-arrays
