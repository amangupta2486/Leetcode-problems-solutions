# Winner of an election
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of names (consisting of lowercase characters) of candidates in an election. A candidate name in array represents a vote casted to the candidate. Print the name of candidate that received Max votes. If there is tie, print lexicographically smaller name.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 13
Votes[] = {john,johnny,jackie,johnny,john 
jackie,jamie,jamie,john,johnny,jamie,
johnny,john}
<strong style="user-select: auto;">Output: </strong>john 4<strong style="user-select: auto;">
Explanation: </strong>john has 4 votes casted for 
him, but so does johny. john is 
lexicographically smaller, so we print 
john and the votes he received.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 3
Votes[] = {andy,blake,clark}
<strong style="user-select: auto;">Output: </strong>andy 1<strong style="user-select: auto;">
Explanation: </strong>All the candidates get 1 
votes each. We print andy as it is 
lexicographically smaller.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You only need to complete the function&nbsp;<strong style="user-select: auto;">winner()</strong>&nbsp;that takes an array of strings&nbsp;arr, and n as parameters&nbsp;and&nbsp;returns&nbsp;the name of the&nbsp;candiate with maximum votes and the number of votes the candidate got as an array&nbsp;of size 2.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>