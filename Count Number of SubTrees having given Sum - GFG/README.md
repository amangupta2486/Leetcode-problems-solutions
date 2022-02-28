# Count Number of SubTrees having given Sum
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary tree&nbsp;and an integer <strong style="user-select: auto;">X</strong>. Your task is to complete the function <strong style="user-select: auto;">countSubtreesWithSumX()</strong> that returns the count of the number of subtress having total node’s data sum equal to the&nbsp;value <strong style="user-select: auto;">X</strong>.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:</strong> For the tree given below: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 5<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; -10&nbsp;&nbsp;&nbsp;&nbsp; 3<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \ &nbsp;&nbsp; /&nbsp; \<br style="user-select: auto;">
&nbsp; &nbsp; &nbsp; 9 &nbsp;&nbsp;&nbsp; 8&nbsp; -4 7</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Subtree with sum 7:<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; -10<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 9&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 8</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">and one node 7.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>       5
&nbsp;   /    \
&nbsp; -10     3
&nbsp;/   \   /  \
&nbsp;9   8 -4    7
X = 7
<strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation: </strong>Subtrees with sum 7 are
[9, 8, -10] and [7] (refer the example
in the problem description).</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>    1
&nbsp; /  \
&nbsp;2    3
X = 5
<strong style="user-select: auto;">Output: </strong>0<strong style="user-select: auto;">
Explanation: </strong>No subtree has sum equal
to 5.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your&nbsp;task is to complete the function&nbsp;<strong style="user-select: auto;">countSubtreesWithSumX</strong>() which takes the root node and an integer X as inputs and returns the number of subtrees of the given Binary Tree having sum exactly equal to X.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(Height of the Tree).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10</span><sup style="user-select: auto;">3</sup><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">-10</span><sup style="user-select: auto;">3</sup><span style="font-size: 18px; user-select: auto;"> &lt;= Node Value &lt;= 10</span><sup style="user-select: auto;">3</sup><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 14px; user-select: auto;"><strong style="user-select: auto;">Note</strong>:The <strong style="user-select: auto;">Input/Ouput</strong> format and <strong style="user-select: auto;">Example</strong> given are used for system's internal purpose, and should be used by a user for <strong style="user-select: auto;">Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p style="user-select: auto;"></p>
            </div>