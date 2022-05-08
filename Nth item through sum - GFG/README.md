# Nth item through sum
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two sorted arrays <strong style="user-select: auto;">A</strong> and <strong style="user-select: auto;">B</strong> of length <strong style="user-select: auto;">L1</strong>&nbsp;and <strong style="user-select: auto;">L2</strong>, we can get a set of sums(add one element from the first and one from second). Find the <strong style="user-select: auto;">N</strong>th element in the set considered in sorted order.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>Set of sums should have unique elements.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> L1 = 2, L2 = 2
A = {1, 2}
B = {3, 4}
N = 3
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explaination:</strong> The set of sums are in 
the order 4, 5, 6.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> L1 = 5, L2 = 4
A = {1, 3, 4, 8, 10}
B = {20, 22, 30, 40}
N = 4
<strong style="user-select: auto;">Output:</strong> 25
<strong style="user-select: auto;">Explaination:</strong> The numbers before it 
are 21, 23 and 24.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">nthItem() </strong>which takes L1, L2, A, B, and the value N as input parameters and returns the Nth value of the set. If N is greater than the size of the set then it returns <strong style="user-select: auto;">-1</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(L1*L2)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(L1*L2)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ L1, L2 ≤ 500<br style="user-select: auto;">
1 ≤ A[i], B[i] ≤ 10000<br style="user-select: auto;">
1 ≤ N ≤ L1*L2</span></p>
 <p style="user-select: auto;"></p>
            </div>