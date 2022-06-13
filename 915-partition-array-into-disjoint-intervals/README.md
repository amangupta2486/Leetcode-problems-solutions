<h2><a href="https://leetcode.com/problems/partition-array-into-disjoint-intervals/">915. Partition Array into Disjoint Intervals</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code>, partition it into two (contiguous) subarrays <code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code> so that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Every element in <code style="user-select: auto;">left</code> is less than or equal to every element in <code style="user-select: auto;">right</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code> are non-empty.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">left</code> has the smallest possible size.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of </em><code style="user-select: auto;">left</code><em style="user-select: auto;"> after such a partitioning</em>.</p>

<p style="user-select: auto;">Test cases are generated such that partitioning exists.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,0,3,8,6]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> left = [5,0,3], right = [8,6]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1,0,6,12]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> left = [1,1,1,0], right = [6,12]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">There is at least one valid answer for the given input.</li>
</ul>
</div>