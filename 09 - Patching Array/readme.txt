# Algorithm 

The function int minPatches(vector &nums, int n) takes a sorted array nums of positive integers and an integer n.
It aims to find the minimum number of elements that need to be added to the array nums such that it can represent all integers in the range [1, n].
The algorithm initializes a variable count to keep track of the number of patches needed and a variable reach to keep track of the maximum integer that can be represented using the elements in nums and the added patches.
It initializes a variable i to traverse the array nums.
The algorithm iterates until reach is greater than or equal to n.
Inside the loop, it checks if the current element of nums is less than or equal to (reach + 1). If it is, it updates reach by adding the current element to it and increments i.
If the current element of nums is greater than (reach + 1) or i exceeds the size of nums, it means that the next integer in the range [1, n] cannot be represented using the existing elements in nums. In this case, the algorithm adds reach + 1 to reach (patching the array with the next integer) and increments count.
Finally, the function returns the value of count, which represents the minimum number of patches required to represent all integers in the range [1, n] using the elements in nums.
In the cases() function, it reads the value of n, initializes the array nums with [1, 3], calls the minPatches function with these inputs, and prints the result.
