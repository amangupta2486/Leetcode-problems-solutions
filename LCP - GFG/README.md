# LCP
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note: This&nbsp;<a href="http://practice.geeksforgeeks.org/problem-of-the-day" target="_blank" style="user-select: auto;">POTD</a>&nbsp;is a part of&nbsp;<a href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=potd&amp;utm_medium=problempage&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">Geek Summer Carnival</a>. Solve all POTD consecutively from 5th to 10th April and get a chance to win exclusive discount vouchers on our GfG courses.</strong></span></p>

<hr style="user-select: auto;">
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Geek is at the geek summer carnival. He is given an array of N strings. To unlock exclusive course discounts he needs to find the longest common prefix among all strings present in the array. Can you help him ?</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
N = 4
ar[] = {geeksforgeeks, geeks, geek, geezer}</span>

<span style="font-size: 18px; user-select: auto;">Output:
gee</span>

<span style="font-size: 18px; user-select: auto;">Explanation: 
Longest common prefix in all the given string is gee. </span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
N = 3
ar[] = {apple, ape, april}</span>

<span style="font-size: 18px; user-select: auto;">Output:
ap</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function LCP() that takes integer n and ar[] as input parameters and return the LCP (in case there is no common prefix return -1).&nbsp;</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected time complexity: </strong>O(NlogN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected space complexity:</strong> O(string length)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10^3<br style="user-select: auto;">
1 &lt;= String Length &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>