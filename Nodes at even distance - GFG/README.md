# Nodes at even distance
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a connected acyclic graph with n&nbsp;nodes and n-1 edges, count the pair&nbsp;of nodes that are at even distance(number of edges) from each other.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
n = 3
graph = {{}, {2}, {1, 3}, {2}}
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explaination:</strong> Here there are three pairs {1,2},{1,3}
and {2,3} and only {1,3} has even distance between them.
</span><span style="font-size: 18px; user-select: auto;">i.e</span> <span style="font-size: 18px; user-select: auto;">          1
             /
            2
           /
          3</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
n = 5
graph = {{}, {2,4}, {1,3}, {2}, {1,5}, {4}}
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explaination:</strong> There are four pairs {1,3},{1,5},{2,4}
and {3,5} which has even distance.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">countOfNodes()</strong>&nbsp;which takes the array <strong style="user-select: auto;">graph[]</strong>&nbsp;(given as <a href="https://en.wikipedia.org/wiki/Adjacency_list#:~:text=In%20graph%20theory%20and%20computer,particular%20vertex%20in%20the%20graph." target="_blank" style="user-select: auto;">Adjacency list</a>)&nbsp;</span><span style="font-size: 18px; user-select: auto;">and its size <strong style="user-select: auto;">n&nbsp;</strong>as input parameters&nbsp;and returns the count&nbsp;of&nbsp;pair of nodes that are at even distance from each other</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(V+E)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(V)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n&nbsp;≤ 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>