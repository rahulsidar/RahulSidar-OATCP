# algorithm 
1.input t number of tese case Or example
2.input number of integers n.
3.Create a vector v of integers of size n.
4.Loop through the input array v and store the integers.
5.Create a vector bitCount of size 32 initialized with zeros. This vector will store the count of set bits at each position from 0 to 31.
6.Loop through each integer in the array v:
7.For each integer, loop through its binary representation from bit 0 to bit 31.
8.If the jth bit of the current integer is set (i.e., v[i] & (1 << j) is not zero), increment the count of that bit position in the bitCount vector.
9.Initialize ans to 0. This variable will store the final result.
10.Loop through each bit position from 0 to 31:
11.For each bit position, add the product of the count of set bits at that position and the count of unset bits (n - count of set bits) to the ans.
12.Print the ans value.
