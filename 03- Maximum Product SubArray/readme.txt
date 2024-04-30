# Algorithm
Read an integer n representing the number of elements in the array.
Initialize an empty vector nums and populate it by reading n integers from the input.
Set an integer maxi to INT_MIN to track the maximum product encountered.
Set a long long prd to 1 which will store the current product of elements as the subarray is extended.
Iterate through the array nums.
For each element at index i, update prd to be the product of prd and nums[i], taken modulo 1e9+7.
Compare prd with maxi and update maxi if prd is greater.
After processing all elements, print the value of maxi.
