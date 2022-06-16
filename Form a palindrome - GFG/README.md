# Form a palindrome
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string, find the minimum number of characters to be inserted to convert it to palindrome.<br style="user-select: auto;">
For Example:<br style="user-select: auto;">
ab: Number of insertions required is 1.&nbsp;<strong style="user-select: auto;">b</strong>ab or aba<br style="user-select: auto;">
aa: Number of insertions required is 0. aa<br style="user-select: auto;">
abcd: Number of insertions required is 3.&nbsp;<strong style="user-select: auto;">dcb</strong>abcd</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> str = "abcd"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Inserted character marked
with bold characters in <strong style="user-select: auto;">dcb</strong>abcd
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> str = "aa"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>"aa" is already a palindrome.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">countMin()</strong>&nbsp;which takes the string <strong style="user-select: auto;">str&nbsp;</strong>as inputs and returns the answer.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N<sup style="user-select: auto;">2</sup>), N = |str|<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ |str|&nbsp;≤ 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
str contains only lower case alphabets.</span></p>
 <p style="user-select: auto;"></p>
            </div>