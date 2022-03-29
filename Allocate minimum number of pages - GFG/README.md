# Allocate minimum number of pages
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given <strong style="user-select: auto;">N </strong>number of books. Every <strong style="user-select: auto;">ith</strong> book has<strong style="user-select: auto;"> Ai</strong> number of pages.<br style="user-select: auto;">
<br style="user-select: auto;">
You have to allocate contiguous&nbsp;</span><span style="font-size: 18px; user-select: auto;">books to <strong style="user-select: auto;">M </strong>number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is the minimum of those in all the other permutations and print this minimum value.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Each book will be allocated to exactly one student. Each student has to be allocated at least one book.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: Return <strong style="user-select: auto;">-1</strong> if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
A[] = {12,34,67,90}
M = 2
<strong style="user-select: auto;">Output:</strong>113
<strong style="user-select: auto;">Explanation:</strong>Allocation can be done in 
following ways:{12} and {34, 67, 90} 
Maximum Pages = 191{12, 34} and {67, 90} 
Maximum Pages = 157{12, 34, 67} and {90} 
Maximum Pages =113. Therefore, the minimum 
of these cases is 113, which is selected 
as the output.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3
A[] = {15,17,20}
M = 2
<strong style="user-select: auto;">Output:</strong>32
<strong style="user-select: auto;">Explanation: </strong>Allocation is done as
{15,17} and {20}</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function findPages() which takes 2 Integers <strong style="user-select: auto;">N</strong>, and m and an array <strong style="user-select: auto;">A[]</strong> of length <strong style="user-select: auto;">N</strong> as input and returns the expected answer.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(NlogN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= A [ i ] &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= M &lt;= 10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>