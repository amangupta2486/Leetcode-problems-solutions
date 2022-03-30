# Counts Zeros Xor Pairs
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array A[] of size N. Find the number of pairs (i, j) such that<br style="user-select: auto;">
A<sub style="user-select: auto;">i&nbsp;</sub>XOR A<sub style="user-select: auto;">j</sub>&nbsp;= 0, and 1 ≤ i &lt; j ≤ N.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">â€‹Input :</strong> arr[ ] = {1, 3, 4, 1, 4}
<strong style="user-select: auto;">Output :</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
Index( 0, 3 ) and (2 ,&nbsp;4 ) are&nbsp;only&nbsp;pairs 
whose xors is zero so&nbsp;count&nbsp;is 2.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">â€‹Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[ ] = {2, 2, 2} <strong style="user-select: auto;">
Output :</strong>  3

</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">calculate()</strong> that takes an array <strong style="user-select: auto;">(arr)</strong>, sizeOfArray <strong style="user-select: auto;">(n)</strong>, and return the count&nbsp;of Zeros Xor's Pairs. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
For each test case, output a single integer i.e counts of Zeros Xors Pairs</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints</strong><br style="user-select: auto;">
2 ≤ N ≤ 10^5<br style="user-select: auto;">
1 ≤ A[i] ≤ 10^5</span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>