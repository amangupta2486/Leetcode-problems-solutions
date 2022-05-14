# Unique Subsets
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong><strong style="user-select: auto;"> </strong>of integers&nbsp;of size <strong style="user-select: auto;">N</strong> that might contain <strong style="user-select: auto;">duplicates</strong>, the task is to find all possible unique subsets.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> Each subset should be sorted.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 3, arr[] = {2,1,2}
<strong style="user-select: auto;">Output:</strong>(),(1),(1 2),(1 2 2),(2),(2 2)</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation: </strong>
All possible subsets = (),(2),(1),(1,2),(2),(2,2),(2,1),(2,1,2)
After Sorting each subset = (),(2),(1),(1,2),(2),(2,2),(1,2),(1,2,2) 
Unique Susbsets in Lexicographical order = (),(1),(1,2),(1,2,2),(2),(2,2)</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 4, arr[] = {1,2,3,3}
<strong style="user-select: auto;">Output: </strong>(),(1),(1 2),(1 2 3)
(1 2 3 3),(1 3),(1 3 3),(2),(2 3)
(2 3 3),(3),(3 3)</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Your task is to complete the function <strong style="user-select: auto;">AllSubsets()</strong>&nbsp;which takes the array <strong style="user-select: auto;">arr[]</strong> and <strong style="user-select: auto;">N</strong> as input parameters and returns list of&nbsp;all possible unique subsets in lexicographical order.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(2<sup style="user-select: auto;">N</sup>).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(2<sup style="user-select: auto;">N</sup>&nbsp;* X), X = Length of each subset.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 12</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ arr[i] ≤ 9</span></p>
 <p style="user-select: auto;"></p>
            </div>