# Print Matrix in snake Pattern
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a<strong style="user-select: auto;">&nbsp;matrix&nbsp;</strong>of size<strong style="user-select: auto;"> N x N</strong>. Print the elements of the matrix in the snake like pattern depicted below.<br style="user-select: auto;">
<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/snake-pattern.jpg" style="height: 375px; width: 500px; user-select: auto;" class="img-responsive"></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
N = 3 
matrix[][] = {{45, 48, 54},
&nbsp;            {21, 89, 87}
&nbsp;            {70, 78, 15}}
<strong style="user-select: auto;">Output</strong>: 45 48 54 87 89 21 70 78 15&nbsp;
<strong style="user-select: auto;">Explanation</strong>:
Matrix is as below:
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to 
the output as 45 48 54 87 89 21 70 78 15.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
N = 2
matrix[][] = {{1, 2},
&nbsp;             {3, 4}}
<strong style="user-select: auto;">Output</strong>: 1 2 4 3
<strong style="user-select: auto;">Explanation</strong>:
Matrix is as below:
1 2&nbsp;
3 4
Printing it in snake pattern will 
give output as 1 2 4 3.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You dont need to read input or print anything. Complete the function <strong style="user-select: auto;">snakePattern()</strong> that takes matrix as input parameter and returns a list of integers in order of the values visited in the snake pattern.&nbsp;</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N * N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N * N) for the resultant list only.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 100<br style="user-select: auto;">
1 &lt;= mat[i][j] &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>