<h2><a href="https://leetcode.com/problems/number-of-boomerangs/">447. Number of Boomerangs</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given <code style="user-select: auto;">n</code> <code style="user-select: auto;">points</code> in the plane that are all <strong style="user-select: auto;">distinct</strong>, where <code style="user-select: auto;">points[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code>. A <strong style="user-select: auto;">boomerang</strong> is a tuple of points <code style="user-select: auto;">(i, j, k)</code> such that the distance between <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> equals the distance between <code style="user-select: auto;">i</code> and <code style="user-select: auto;">k</code> <strong style="user-select: auto;">(the order of the tuple matters)</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of boomerangs</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[0,0],[1,0],[2,0]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The two boomerangs are [[1,0],[0,0],[2,0]] and [[1,0],[2,0],[0,0]].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,1],[2,2],[3,3]]
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,1]]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == points.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">points[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">All the points are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>