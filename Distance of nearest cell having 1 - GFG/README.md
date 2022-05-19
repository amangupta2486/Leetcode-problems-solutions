# Distance of nearest cell having 1
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary grid. Find the distance of nearest 1 in the grid&nbsp;for each cell.<br style="user-select: auto;">
The distance is calculated as&nbsp;<strong style="user-select: auto;">|i<sub style="user-select: auto;">1</sub>&nbsp;– i<sub style="user-select: auto;">2</sub>| + |j<sub style="user-select: auto;">1</sub>&nbsp;– j<sub style="user-select: auto;">2</sub>|</strong>, where i<sub style="user-select: auto;">1</sub>, j<sub style="user-select: auto;">1</sub>&nbsp;are the row number and column number of the current cell and i<sub style="user-select: auto;">2</sub>, j<sub style="user-select: auto;">2</sub>&nbsp;are the row number and column number of the nearest cell having value 1.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{0,1,1,0},{1,1,0,0},{0,0,1,1}}
<strong style="user-select: auto;">Output: </strong>{{1,0,0,1},{0,0,1,1},{1,1,0,0}}
<strong style="user-select: auto;">Explanation: </strong>The grid is-
0 1 1 0&nbsp;
1 1 0 0&nbsp;
0 0 1 1&nbsp;
0's at (0,0), (0,3), (1,2), (1,3), (2,0) and
(2,1) are at a distance of 1 from 1's at (0,1),
(0,2), (0,2), (2,3), (1,0) and (1,1)
respectively.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{1,0,1},{1,1,0},{1,0,0}}
<strong style="user-select: auto;">Output: </strong>{{0,1,0},{0,0,1},{0,1,2}}
<strong style="user-select: auto;">Explanation:</strong></span><span style="font-size: 18px; user-select: auto;">&nbsp;The grid is-
1 0 1
1 1 0
1 0 0
0's at (0,1), (1,2), (2,1) and (2,2) are at a 
distance of 1, 1, 1 and 2 from 1's at (0,0),
(0,2), (2,0) and (1,1) respectively.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Yout Task:</strong><br style="user-select: auto;">
You don't need to read or print anything, Your task is to complete the function&nbsp;<strong style="user-select: auto;">nearest()&nbsp;</strong>which takes grid as input parameter and returns&nbsp;a matrix of same dimensions where the value at index (i, j) in the resultant matrix signifies the minimum distance of 1 in the matrix from grid[i][j].</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n*m)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n, m ≤ 500</span></p>
 <p style="user-select: auto;"></p>
            </div>