#Algorithm :-
Read the number of pairs n.
Initialize the pairs in vector of vector .
Call validArrangement(pairs).
validArrangement() Function:
Input: A vector of vectors pairs representing pairs of integers.
Output: A vector of vectors representing the valid arrangement of pairs.
Steps:
Initialize an empty unordered_map adj to store adjacency lists.
Initialize empty unordered_maps in and out to count in-degrees and out-degrees of nodes.
For each pair [u, v] in pairs:
i. Increment in[v].
ii. Increment out[u].
iii. Push v onto the stack of adj[u].
d. Find the starting node start for the Eulerian path:
i. If there exists a node with outdegree - indegree = 1, set it as start.
ii. Otherwise, set start to any node.
Call euler(adj, ans, start).
Reverse the ans vector.
Return ans.
euler() Function:
Input:
An unordered_map adj representing adjacency lists of nodes.
A vector of vectors ans to store the Eulerian path.
An integer curr representing the current node.
Output: None
Steps:
a. Retrieve the stack of neighbors for curr from adj.
b. While the stack is not empty:
i. Pop a neighbor nei from the stack.
ii. Recursively call euler(adj, ans, nei).
iii. Push the edge (curr, nei) to ans.
If the size of the returned arrangement is not equal to n, print "No Valid Arrangement possible" and return.
Print each pair in the arrangement.
