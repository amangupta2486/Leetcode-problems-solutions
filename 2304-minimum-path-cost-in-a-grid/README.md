<h2><a href="https://leetcode.com/problems/minimum-path-cost-in-a-grid/">2304. Minimum Path Cost in a Grid</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">m x n</code> integer matrix <code style="user-select: auto;">grid</code> consisting of <strong style="user-select: auto;">distinct</strong> integers from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">m * n - 1</code>. You can move in this matrix from a cell to any other cell in the <strong style="user-select: auto;">next</strong> row. That is, if you are in cell <code style="user-select: auto;">(x, y)</code> such that <code style="user-select: auto;">x &lt; m - 1</code>, you can move to any of the cells <code style="user-select: auto;">(x + 1, 0)</code>, <code style="user-select: auto;">(x + 1, 1)</code>, ..., <code style="user-select: auto;">(x + 1, n - 1)</code>. <strong style="user-select: auto;">Note</strong> that it is not possible to move from cells in the last row.</p>

<p style="user-select: auto;">Each possible move has a cost given by a <strong style="user-select: auto;">0-indexed</strong> 2D array <code style="user-select: auto;">moveCost</code> of size <code style="user-select: auto;">(m * n) x n</code>, where <code style="user-select: auto;">moveCost[i][j]</code> is the cost of moving from a cell with value <code style="user-select: auto;">i</code> to a cell in column <code style="user-select: auto;">j</code> of the next row. The cost of moving from cells in the last row of <code style="user-select: auto;">grid</code> can be ignored.</p>

<p style="user-select: auto;">The cost of a path in <code style="user-select: auto;">grid</code> is the <strong style="user-select: auto;">sum</strong> of all values of cells visited plus the <strong style="user-select: auto;">sum</strong> of costs of all the moves made. Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> cost of a path that starts from any cell in the <strong style="user-select: auto;">first</strong> row and ends at any cell in the <strong style="user-select: auto;">last</strong> row.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/28/griddrawio-2.png" style="width: 301px; height: 281px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[5,3],[4,0],[2,1]], moveCost = [[9,8],[1,5],[10,12],[18,6],[2,4],[14,3]]
<strong style="user-select: auto;">Output:</strong> 17
<strong style="user-select: auto;">Explanation: </strong>The path with the minimum possible cost is the path 5 -&gt; 0 -&gt; 1.
- The sum of the values of cells visited is 5 + 0 + 1 = 6.
- The cost of moving from 5 to 0 is 3.
- The cost of moving from 0 to 1 is 8.
So the total cost of the path is 6 + 3 + 8 = 17.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[5,1,2],[4,0,3]], moveCost = [[12,10,15],[20,23,8],[21,7,1],[8,1,13],[9,10,25],[5,3,2]]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The path with the minimum possible cost is the path 2 -&gt; 3.
- The sum of the values of cells visited is 2 + 3 = 5.
- The cost of moving from 2 to 3 is 1.
So the total cost of this path is 5 + 1 = 6.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= m, n &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid</code> consists of distinct integers from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">m * n - 1</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">moveCost.length == m * n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">moveCost[i].length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= moveCost[i][j] &lt;= 100</code></li>
</ul>
</div>