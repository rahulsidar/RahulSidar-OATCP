# Algorithm 
Read the input integer n which represents the target sum.
Initialize a dynamic programming (DP) array dp of size n + 1 to store the number of ways to obtain each sum from 0 to n.
Set the modulo value mod to 1e9 + 7.
Set the number of dice dices to 6.
Initialize dp[0] to 1, as there is one way to obtain a sum of 0 (by not rolling any dice).
Iterate from i = 1 to n:
a. For each i, iterate over the possible outcomes of a single dice roll from 1 to dices.
b. For each outcome dice, if dice > i, skip as it's impossible to obtain a sum greater than i with a single dice roll.
c. Update dp[i] by adding the number of ways to obtain a sum of i - dice to dp[i]. The number of ways to obtain a sum of i - dice is stored in dp[i - dice].
After the iteration, dp[n] will contain the number of ways to obtain the target sum n using the given number of dice rolls.
Output dp[n].
