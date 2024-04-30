# Algorithm

take input of number of test case.
Read the number of bitsets n.
Create an array of bitsets B of size n.
Loop through each index i from 0 to n-1:
Read the bitset at index i.
Initialize ans to 0. This variable will store the final result.
Loop through each pair of bitsets in the array B:
For each pair (i, j) where i is less than j:
Calculate the number of set bits in the bitwise AND of bitsets B[i] and B[j] using the count() method.
Increment the answer by x * (x - 1), where x is the count of set bits in the bitwise AND.
Since each pair is counted twice (once as (i, j) and once as (j, i)), divide the ans by 2.
Print the final answer.
