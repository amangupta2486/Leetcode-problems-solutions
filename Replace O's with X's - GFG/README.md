# Replace O's with X's
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a matrix <strong style="user-select: auto;">mat</strong> of size <strong style="user-select: auto;">N x M</strong> where every element is either ‘O’ or ‘X’.<br style="user-select: auto;">
Replace all ‘O’ with ‘X’ that are surrounded by ‘X’.<br style="user-select: auto;">
A ‘O’ (or a set of ‘O’) is considered to be by surrounded by ‘X’ if there are ‘X’ at locations just below, just above, just left and just right of it.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, m = 4
mat = {{'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'O', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong style="user-select: auto;">Output:</strong> ans = {{'X', 'X', 'X', 'X'}, 
&nbsp;              {'X', 'X', 'X', 'X'}, 
&nbsp;              {'X', 'X', 'X', 'X'}, 
&nbsp;              {'X', 'X', 'X', 'X'}, 
&nbsp;              {'X', 'X', 'O', 'O'}}
<strong style="user-select: auto;">Explanation:</strong> Following the rule the above 
matrix is the resultant matrix. </span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">fill()</strong> which takes n, m and mat as input parameters ad returns a 2D array representing the resultant matrix.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n*m)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n, m ≤ 500</span></p>
 <p style="user-select: auto;"></p>
            </div>