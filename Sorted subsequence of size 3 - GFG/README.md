# Sorted subsequence of size 3
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A</strong> of <strong style="user-select: auto;">N</strong> integers, find any 3 elements in it such that A[i] &lt; A[j] &lt; A[k] and i &lt; j &lt; k. </span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 5
A[] = {1,2,1,1,3}
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>a sub-sequence 1 2 3 exist<strong style="user-select: auto;">.</strong></span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 3
A[] = {1,1,3}
<strong style="user-select: auto;">Output: </strong>0<strong style="user-select: auto;">
Explanation: </strong>no such sub-sequence exist.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Your task is to complete the function <strong style="user-select: auto;">find3Numbers</strong>&nbsp;which&nbsp;finds any 3 elements in it such that A[i] &lt; A[j] &lt; A[k] and i &lt; j &lt; k. You need to return them as a vector/ArrayList/array (depending on the language cpp/Java/Python), if no such element is present then&nbsp;return the empty vector of size 0.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note</strong>: The output will be 1 if the sub-sequence returned by the function is&nbsp;present in array A else 0. If the sub-sequence returned by the function is not in the format as mentioned then the output will be -1.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= A[i] &lt;= 10<sup style="user-select: auto;">6</sup>, for each valid i</span></p>

<p style="user-select: auto;"><span style="font-size: 14px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>The <strong style="user-select: auto;">Input/Output</strong> format and <strong style="user-select: auto;">Examples</strong> given are used for the system's internal purpose, and should be used by a user for <strong style="user-select: auto;">Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p style="user-select: auto;"></p>
            </div>