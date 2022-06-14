<h2><a href="https://leetcode.com/problems/find-unique-binary-string/">1980. Find Unique Binary String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of strings <code style="user-select: auto;">nums</code> containing <code style="user-select: auto;">n</code> <strong style="user-select: auto;">unique</strong> binary strings each of length <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">a binary string of length </em><code style="user-select: auto;">n</code><em style="user-select: auto;"> that <strong style="user-select: auto;">does not appear</strong> in </em><code style="user-select: auto;">nums</code><em style="user-select: auto;">. If there are multiple answers, you may return <strong style="user-select: auto;">any</strong> of them</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = ["01","10"]
<strong style="user-select: auto;">Output:</strong> "11"
<strong style="user-select: auto;">Explanation:</strong> "11" does not appear in nums. "00" would also be correct.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = ["00","01"]
<strong style="user-select: auto;">Output:</strong> "11"
<strong style="user-select: auto;">Explanation:</strong> "11" does not appear in nums. "10" would also be correct.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = ["111","011","001"]
<strong style="user-select: auto;">Output:</strong> "101"
<strong style="user-select: auto;">Explanation:</strong> "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 16</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i].length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i] </code>is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
	<li style="user-select: auto;">All the strings of <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>