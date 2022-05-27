<h2><a href="https://leetcode.com/problems/flip-equivalent-binary-trees/">951. Flip Equivalent Binary Trees</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">For a binary tree <strong style="user-select: auto;">T</strong>, we can define a <strong style="user-select: auto;">flip operation</strong> as follows: choose any node, and swap the left and right child subtrees.</p>

<p style="user-select: auto;">A binary tree <strong style="user-select: auto;">X</strong>&nbsp;is <em style="user-select: auto;">flip equivalent</em> to a binary tree <strong style="user-select: auto;">Y</strong> if and only if we can make <strong style="user-select: auto;">X</strong> equal to <strong style="user-select: auto;">Y</strong> after some number of flip operations.</p>

<p style="user-select: auto;">Given the roots of two binary trees <code style="user-select: auto;">root1</code> and <code style="user-select: auto;">root2</code>, return <code style="user-select: auto;">true</code> if the two trees are flip equivalent or <code style="user-select: auto;">false</code> otherwise.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="Flipped Trees Diagram" src="https://assets.leetcode.com/uploads/2018/11/29/tree_ex.png" style="width: 500px; height: 220px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root1 = [1,2,3,4,5,6,null,null,null,7,8], root2 = [1,3,2,null,6,4,5,null,null,null,null,8,7]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation: </strong>We flipped at nodes with values 1, 3, and 5.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root1 = [], root2 = []
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root1 = [], root2 = [1]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in each tree is in the range <code style="user-select: auto;">[0, 100]</code>.</li>
	<li style="user-select: auto;">Each tree will have <strong style="user-select: auto;">unique node values</strong> in the range <code style="user-select: auto;">[0, 99]</code>.</li>
</ul>
</div>