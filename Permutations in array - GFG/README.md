# Permutations in array
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two arrays of equal size <strong style="user-select: auto;">N</strong> and an integer <strong style="user-select: auto;">K</strong>. The task is to check if after permuting both arrays, we get sum of their corresponding element greater than or equal to k i.e <strong style="user-select: auto;">A<sub style="user-select: auto;">i</sub> + B<sub style="user-select: auto;">i</sub> &gt;= K </strong>for all i (from <strong style="user-select: auto;">0</strong> to <strong style="user-select: auto;">N-1</strong>). Return <strong style="user-select: auto;">true</strong> if possible, else <strong style="user-select: auto;">false</strong>.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : 
</strong>a[] = {2, 1, 3}, 
b[] = { 7, 8, 9 }, 
k = 10. 
<strong style="user-select: auto;">Output : 
</strong>True
<strong style="user-select: auto;">Explanation:</strong>
Permutation  a[] = { 1, 2, 3 } 
and b[] = { 9, 8, 7 } 
satisfied the condition a[i] + b[i] &gt;= K.

</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>
a[] = {1, 2, 2, 1}, b[] = { 3, 3, 3, 4 }, k = 5.
<strong style="user-select: auto;">Output : </strong>
False</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">Since any permutation won't give the answer.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">isPossible()</strong>&nbsp;which takes the array <strong style="user-select: auto;">A[]</strong>, <strong style="user-select: auto;">B[]</strong>, its size <strong style="user-select: auto;">N </strong>and an integer <strong style="user-select: auto;">K </strong>as inputs and returns the answer.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N. Log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1&nbsp;≤ K ≤ 10<sup style="user-select: auto;">18 </sup><br style="user-select: auto;">
1&nbsp;≤ A<sub style="user-select: auto;">i</sub>, B<sub style="user-select: auto;">i</sub>&nbsp;≤ 10<sup style="user-select: auto;">17</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>