#algorithm
Read the number of test cases.
For each test case:
Read an integer n which is the number of elements in the first array.
Populate the first array a with n integers.
Read an integer m which is the number of elements in the second array.
Populate the second array b with m integers.
Initialize a map mp that will count the occurrences of each element in array b.
Use the map to count the frequency of each element in array b.
Sort both arrays a and b to facilitate the matching process.
Initialize cnt to 0 to keep track of the number of compatible pairs.
Use two nested loops to compare each element of sorted array a with each element of sorted array b.
For each pair (a[i], b[j]), check if the absolute difference |a[i] - b[j]| is at most 1.
If such a pair is found:
Increment the count cnt.
Decrement the count of b[j] in the map to ensure that each element from b is used at most once for pairing.
Break the inner loop to move to the next element in a since b[j] has been used up.
Since the problem might be concerned with large outputs, return the count cnt modulo 1e9 + 7 (stored in MOD).
