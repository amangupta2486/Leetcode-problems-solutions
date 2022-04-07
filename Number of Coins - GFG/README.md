# Number of Coins
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a value <strong style="user-select: auto;">V</strong> and array <strong style="user-select: auto;">coins[]</strong> of size <strong style="user-select: auto;">M</strong>, the task is to make the change for <strong style="user-select: auto;">V</strong> cents, given that you have an infinite supply of each of coins{coins<sub style="user-select: auto;">1</sub>, coins<sub style="user-select: auto;">2</sub>, ..., coins<sub style="user-select: auto;">m</sub>} valued coins. Find the minimum number of coins to make the change. If not possible to make change then return -1.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: V = 30, M = 3, coins[] = {25, 10, 5}
<strong style="user-select: auto;">Output:</strong> 2</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation</strong>: Use one 25 cent coin
and one 5 cent coin</span></pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: V = 11, M = 4,coins[] = {9, 6, 5, 1} 
<strong style="user-select: auto;">Output:</strong> 2</span> 
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation</strong>: Use one 6 cent coin
and one 5 cent coin</span></pre>

<div style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;"><code style="user-select: auto;">minCoins</code>()&nbsp;</strong>which takes <strong style="user-select: auto;">V, M</strong> and array <strong style="user-select: auto;">coins </strong>as input parameters and returns the answer.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(V*M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(V)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ <strong style="user-select: auto;">V*M</strong> ≤ 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
All array elements are distinct</span></div>
 <p style="user-select: auto;"></p>
            </div>