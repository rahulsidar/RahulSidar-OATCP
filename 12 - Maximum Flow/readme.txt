# Algorithm 
The algorithm starts with an initial flow of 0.
Find an augmenting path from the source to the sink in the residual graph. An augmenting path is a path from the source to the sink in the residual graph where the capacity of the path is greater than 0.
Once an augmenting path is found, the flow along this path is increased by the minimum capacity of the edges in the path. This is done by adding the minimum capacity to the flow along the path in the original graph and subtracting it from the flow along the reverse edges in the residual graph.
Update Residual Graph: After augmenting the flow, the residual graph is updated to reflect the new flow.
Steps 2-4 are repeated until no more augmenting paths can be found in the residual graph.
The algorithm terminates when no more augmenting paths can be found, and the maximum flow is the sum of the flows along all the augmenting paths found.
