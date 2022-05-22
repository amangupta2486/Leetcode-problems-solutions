<h2><a href="https://leetcode.com/problems/minimum-lines-to-represent-a-line-chart/">2280. Minimum Lines to Represent a Line Chart</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a 2D integer array <code style="user-select: auto;">stockPrices</code> where <code style="user-select: auto;">stockPrices[i] = [day<sub style="user-select: auto;">i</sub>, price<sub style="user-select: auto;">i</sub>]</code> indicates the price of the stock on day <code style="user-select: auto;">day<sub style="user-select: auto;">i</sub></code> is <code style="user-select: auto;">price<sub style="user-select: auto;">i</sub></code>. A <strong style="user-select: auto;">line chart</strong> is created from the array by plotting the points on an XY plane with the X-axis representing the day and the Y-axis representing the price and connecting adjacent points. One such example is shown below:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/30/1920px-pushkin_population_historysvg.png" style="width: 500px; height: 313px; user-select: auto;">
<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum number of lines</strong> needed to represent the line chart</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/30/ex0.png" style="width: 400px; height: 400px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> stockPrices = [[1,7],[2,6],[3,5],[4,4],[5,4],[6,3],[7,2],[8,1]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
The diagram above represents the input, with the X-axis representing the day and Y-axis representing the price.
The following 3 lines can be drawn to represent the line chart:
- Line 1 (in red) from (1,7) to (4,4) passing through (1,7), (2,6), (3,5), and (4,4).
- Line 2 (in blue) from (4,4) to (5,4).
- Line 3 (in green) from (5,4) to (8,1) passing through (5,4), (6,3), (7,2), and (8,1).
It can be shown that it is not possible to represent the line chart using less than 3 lines.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/30/ex1.png" style="width: 325px; height: 325px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> stockPrices = [[3,4],[1,2],[7,8],[2,3]]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>
As shown in the diagram above, the line chart can be represented with a single line.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= stockPrices.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">stockPrices[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= day<sub style="user-select: auto;">i</sub>, price<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">All <code style="user-select: auto;">day<sub style="user-select: auto;">i</sub></code> are <strong style="user-select: auto;">distinct</strong>.</li>
</ul>
</div>