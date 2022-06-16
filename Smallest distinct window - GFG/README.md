# Smallest distinct window
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string '<strong style="user-select: auto;">s</strong>'. The task is to find the <strong style="user-select: auto;">smallest </strong>window length&nbsp;that contains all the characters of the given string at least one time.<br style="user-select: auto;">
For eg. A = <strong style="user-select: auto;">aabcbcdbca</strong>, then the result would be 4 as of the smallest window will be <strong style="user-select: auto;">dbca</strong>.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<div style="user-select: auto;">
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input : "AABBBCBBAC"
Output : 3
Explanation : Sub-string -&gt; "BAC"
</span></pre>
</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input : "aaab"
Output : 2
Explanation : Sub-string -&gt; "ab"</span></pre>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input : "GEEKSGEEKSFOR"
Output : 8
Explanation : Sub-string -&gt; "GEEKSFOR"</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findSubString()</strong>&nbsp;which takes the string&nbsp; <strong style="user-select: auto;">S</strong><strong style="user-select: auto;"> </strong>as input&nbsp;and returns the length of the smallest such window of the string.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(256.N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(256)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ |S| ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
String may contain both type of English Alphabets.</span></p>
 <p style="user-select: auto;"></p>
            </div>