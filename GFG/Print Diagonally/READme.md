### [Print Diagonally]( https://practice.geeksforgeeks.org/problems/print-diagonally4331/1#)
***
Give a N * N square matrix, return all the elements of its anti-diagonals from top to bottom.
> N = 3
> 
> A = [[1, 2, 3],
>      [4, 5, 6],
>      [7, 8, 9]]
>      
> Output: 
> 1 2 4 3 5 7 6 8 9

#### Intuition:
* Iterate the upper triangle matrix, then
* iterate the lower triangle matrix
* keeping index valid of row and column iterator.
