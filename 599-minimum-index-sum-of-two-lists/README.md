<h2><a href="https://leetcode.com/problems/minimum-index-sum-of-two-lists/">599. Minimum Index Sum of Two Lists</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of favorite restaurants represented by strings.</p>

<p style="user-select: auto;">You need to help them find out their <b style="user-select: auto;">common interest</b> with the <b style="user-select: auto;">least list index sum</b>. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]
<strong style="user-select: auto;">Output:</strong> ["Shogun"]
<strong style="user-select: auto;">Explanation:</strong> The only restaurant they both like is "Shogun".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["KFC","Shogun","Burger King"]
<strong style="user-select: auto;">Output:</strong> ["Shogun"]
<strong style="user-select: auto;">Explanation:</strong> The restaurant they both like and have the least index sum is "Shogun" with index sum 1 (0+1).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= list1.length, list2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= list1[i].length, list2[i].length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">list1[i]</code> and <code style="user-select: auto;">list2[i]</code> consist of spaces <code style="user-select: auto;">' '</code> and English letters.</li>
	<li style="user-select: auto;">All the stings of <code style="user-select: auto;">list1</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">All the stings of <code style="user-select: auto;">list2</code>&nbsp;are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>