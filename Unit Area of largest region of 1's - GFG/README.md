# Unit Area of largest region of 1's
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a grid of dimension <strong style="user-select: auto;">n</strong>x<strong style="user-select: auto;">m&nbsp;</strong>containing 0s and 1s. Find the unit area of the largest region of 1s.<br style="user-select: auto;">
Region of 1's is a group of 1's connected 8-directionally (horizontally, vertically, diagonally).</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{1,1,1,0},{0,0,1,0},{0,0,0,1}}
<strong style="user-select: auto;">Output: </strong>5
<strong style="user-select: auto;">Explanation: </strong>The grid is-
<span style="color: rgb(255, 0, 0); user-select: auto;">1 1 1</span> 0
0 0 <span style="color: rgb(255, 0, 0); user-select: auto;">1 </span>0
0 0 0 <span style="color: rgb(255, 0, 0); user-select: auto;">1
</span>The largest region of 1's is colored
in orange.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{0,1}}
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation: </strong>The grid is-
0 <span style="color: rgb(255, 0, 0); user-select: auto;">1
</span>The largest region of 1's is colored in 
orange.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findMaxArea()&nbsp;</strong>which takes grid as input parameter and returns the area of the largest region of 1's.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n*m)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n, m ≤ 500</span></p>
 <p style="user-select: auto;"></p>
            </div>