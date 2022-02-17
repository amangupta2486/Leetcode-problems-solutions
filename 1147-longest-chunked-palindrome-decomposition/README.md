<h2><a href="https://leetcode.com/problems/longest-chunked-palindrome-decomposition/">1147. Longest Chunked Palindrome Decomposition</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">text</code>. You should split it to k substrings <code style="user-select: auto;">(subtext<sub style="user-select: auto;">1</sub>, subtext<sub style="user-select: auto;">2</sub>, ..., subtext<sub style="user-select: auto;">k</sub>)</code> such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">subtext<sub style="user-select: auto;">i</sub></code> is a <strong style="user-select: auto;">non-empty</strong> string.</li>
	<li style="user-select: auto;">The concatenation of all the substrings is equal to <code style="user-select: auto;">text</code> (i.e., <code style="user-select: auto;">subtext<sub style="user-select: auto;">1</sub> + subtext<sub style="user-select: auto;">2</sub> + ... + subtext<sub style="user-select: auto;">k</sub> == text</code>).</li>
	<li style="user-select: auto;"><code style="user-select: auto;">subtext<sub style="user-select: auto;">i</sub> == subtext<sub style="user-select: auto;">k - i + 1</sub></code> for all valid values of <code style="user-select: auto;">i</code> (i.e., <code style="user-select: auto;">1 &lt;= i &lt;= k</code>).</li>
</ul>

<p style="user-select: auto;">Return the largest possible value of <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> text = "ghiabcdefhelloadamhelloabcdefghi"
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> We can split the string on "(ghi)(abcdef)(hello)(adam)(hello)(abcdef)(ghi)".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> text = "merchant"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> We can split the string on "(merchant)".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> text = "antaprezatepzapreanta"
<strong style="user-select: auto;">Output:</strong> 11
<strong style="user-select: auto;">Explanation:</strong> We can split the string on "(a)(nt)(a)(pre)(za)(tpe)(za)(pre)(a)(nt)(a)".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= text.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">text</code> consists only of lowercase English characters.</li>
</ul>
</div>