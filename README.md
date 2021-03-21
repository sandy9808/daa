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
A quick and simplified answer is that Lorem Ipsum refers to text that the DTP (Desktop Publishing) industry use as replacement text when the real text is not available. ... Lorem Ipsum is dummy text which has no meaning however looks very similar to real text.
```
#Download project
git clone https://github.com/merazlab/daa 
```
Project Initialize 
```
cd daa
#create assignment-1 folder
mkdir assignment_01

#go to assignment-1
cd assignment_01

#Create file
touch readme.md
touch main.py
.
.
```
---

Run the code
```
python main.py
```
Output
```
Curve fitting using Least squares Approximation
```
---

**Test case**

Find max
```
Test Case-1
Input:
1
5 4 5
2 3 6 7 9
1 4 8 10
Output:
6
#--------------------------#
Test Case-2
Input:
1                                                                                                                                               
5 7 4                                                                                                                                           
100 256 150 889 770                                                                                                                             
272 486 363 119 565 445 892                                                                                                                     
Output:
272
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

</br>Approach 1:
</br>In this recursive divide and conquer approach, the function kthis called a total of logm+logn times. Thus the time complexityof this approach would beO(logk). The best case complexitywill be when either of m and n is zero or k is invalid or k isequal to 1. Thus, the best case time complexity isΩ(1)
</br>Approach 2:
</br>In  this  recursive  divide  and  conquer  approach,  the  functionkth  is  called  log  k  times.  Thus  the  time  complexity  of  thisapproach would beO(logm+ logn).The  best  case  complexity  will  be  when  either  of  m  and  n  iszero or k is invalid or k is equal to 1. Thus, the best case timecomplexity isΩ(1)

**Space Complexity**

</br>
Approach 1:
</br>
This algorithm has a space complexity of O(log k)
</br>
Approach 2:
</br>
This algorithm has a space complexity of O(log m+log n)

---

### References

</br>https://www.geeksforgeeks.org/k-th-element-two-sorted-arrays/
</br>https://tutorialspoint.dev/algorithm/divide-and-conquer/k-th-element-two-sorted-arrays
