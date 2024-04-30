# Algorithm :
1 . Taking input of n (number of ice bars) , coins that a boy has initially.
2 . declaring a vector as costs of n ice bars in which  nth element represent thier costs.
3 . sort the array.
4. intialize a varible ans with intial value 0.
4. loop over the array 
5 . if costs[i] > coins then simply return the ans because there is no sufficient coins to purchase ice bars.
6 . if(costs[i] < coins) then decrease coins with costs[i] and increase the varible ans by 1 by every time if this condition satisfy.
7. return the ans which contain maximum number of chocolate the boy can purchase.
8. end
