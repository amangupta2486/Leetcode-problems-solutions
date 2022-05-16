# Remove every k'th node
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a singly linked list, your task is to remove every k<sup style="user-select: auto;">th</sup>&nbsp;node from the linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
The first line of input contains number of test cases T. Then T test cases follow. Every test case contains 3&nbsp;lines.&nbsp;First line of every test case contains an integer N denoting the size of the linked list . The second line contains N space separated values of the linked list. The third line contains an integer K.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
Output for each test case will be space separated values of the&nbsp;nodes of the new transformed linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">User Task:</strong><br style="user-select: auto;">
The task is to complete the function&nbsp;<strong style="user-select: auto;">deleteK</strong>() which should delete every kth nodes from the linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= T &lt;= 50<br style="user-select: auto;">
1 &lt;= N &lt;= 100<br style="user-select: auto;">
1 &lt;= element of linked list &lt;= 1000<br style="user-select: auto;">
0 &lt;= k &lt;= 100</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:<br style="user-select: auto;">
Input:</strong><br style="user-select: auto;">
2<br style="user-select: auto;">
8<br style="user-select: auto;">
1 2 3 4 5 6 7 8<br style="user-select: auto;">
3<br style="user-select: auto;">
4<br style="user-select: auto;">
1 2 3 4<br style="user-select: auto;">
2</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
1 2 4 5 7 8<br style="user-select: auto;">
1 3</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:<br style="user-select: auto;">
Testcase 1</strong>: After removing every 3rd element from the linked list, we have updated list as 1, 2, 4, 5, 7 and 8, and the elements which are removed are 3 and 6.</span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>