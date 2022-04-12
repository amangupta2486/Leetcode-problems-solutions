# Negative weight cycle
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a weighted directed graph with n nodes and m edges. Nodes are labeled from 0 to n-1, the task is to check if it contains a negative weight cycle or not.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>edges[i] is&nbsp;defined as u, v and weight.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>n = 3, edges = {{0,1,-1},{1,2,-2},
{2,0,-3}}
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation: </strong>The graph contains negative weight
cycle as 0-&gt;1-&gt;2-&gt;0 with weight -1,-2,-3.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>n = 3, edges = {{0,1,-1},{1,2,-2},
{2,0,3}}
<strong style="user-select: auto;">Output: </strong>0
<strong style="user-select: auto;">Explanation: </strong>The graph does not contain any
negative weight cycle.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong style="user-select: auto;">isNegativeWeightCycle()&nbsp;</strong>which takes n and edges as input paramater and returns 1 if graph contains negative weight cycle otherwise returns 0.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Compelxity:&nbsp;</strong>O(n)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 100<br style="user-select: auto;">
1 &lt;= m &lt;= n*(n-1)</span><span style="font-size: 18px; user-select: auto;">, where m is the total number of Edges in the directed graph.</span></p>
 <p style="user-select: auto;"></p>
            </div>