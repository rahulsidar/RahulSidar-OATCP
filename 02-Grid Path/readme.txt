# Algorithm 
Read the input integer n representing the size of the grid.
Read the grid, represented as a vector of strings grid, where each string represents a row of the grid.
Initialize a dynamic programming (DP) array dp of size n to store the number of paths for each column.
Set the modulo value mod to 1e9 + 7.
Initialize dp[0] to 1, as there is one way to reach the first column (top-left corner).
(a)Iterate through each row i of the grid: (b)Iterate through each column j of the current row:
If the current cell contains an obstacle (grid[i][j] == '*'), set dp[j] to 0 and continue to the next column. Otherwise, update dp[j] by adding the number of paths from the cell to its left (dp[j - 1]) to the current number of paths (dp[j]). Ensure to take modulo mod for each addition operation. After the iteration, dp[n - 1] will contain the number of paths to reach the bottom-right corner of the grid. Output dp[n - 1].
