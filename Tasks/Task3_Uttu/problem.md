Problem Statement: 

Uttu likes everything neat and tidy. He has an array of n positive integers that is unsorted.
Since Uttu likes everything neat and tidy, he wants the array to be sorted.
However, he is too lazy to do this himself, so he asks his friend Aaryan to sort the array for him.
As a good friend, Uttu makes Aaryan's task more challenging by giving a positive value x and allowing only one operation to sort the array:
> Choose two different indices i and j such that 1 <= i,  j <= n, and | i - j | >= x. Then, swap ith element of the array with jth element.
Aaryan can do this operation infinite number of times.
Note : |a-b| is absolute difference between a and b.

Input : 
First line contains n (size of array) and x (given by Uttu).
Second line contains n elements of the array.

Output : 
Print "YES" (without quotes) if Aaryan can sort the array otherwise print "NO" (without quotes).

Sample Test1:

Input: 
5 2
5 1 2 3 4

Output: 
YES

Explanation:
[5,1,2,3,4] - swap(a1,a3)
[2,1,5,3,4] - swap(a2,a5)
[2,4,5,3,1] - swap(a2,a4)
[2,3,5,4,1] - swap(a1,a5)
[1,3,5,4,2] - swap(a2,a5)
[1,2,5,4,3] - swap(a3,a5)
[1,2,3,4,5]


Sample Test2:

Input: 
3 3
3 2 1

Output: 
NO




