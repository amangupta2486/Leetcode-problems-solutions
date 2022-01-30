# Word Search
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a 2D board of letters and a word. Check if the word exists in the board. The word can be constructed from letters of adjacent cells only. ie - horizontal or vertical neighbors. The same letter cell can not be used more than once.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>board = {{a,g,b,c},{q,e,e,l},{g,b,k,s}},
word = "geeks"
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation: </strong>The board is-
a <span style="color: rgb(255, 0, 0); user-select: auto;">g</span> b c
q <span style="color: rgb(255, 0, 0); user-select: auto;">e</span> <span style="color: rgb(255, 0, 0); user-select: auto;">e</span> l
g b <span style="color: rgb(255, 0, 0); user-select: auto;">k s
</span></span><span style="font-size: 18px; user-select: auto;">The letters which are used to make the
"geeks" are colored.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>board = {{a,b,c,e},{s,f,c,s},{a,d,e,e}},
word = "sabfs"
<strong style="user-select: auto;">Output: </strong>0
<strong style="user-select: auto;">Explanation: </strong>The board is-
a b c e
s f c s
a d e e
Same letter can not be used twice hence ans is 0</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">isWordExist()&nbsp;</strong>which takes board and word as input parameter and returns boolean value true if word can be found otherwise returns false.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N * M * 4<sup style="user-select: auto;">L</sup>) where N = No. of rows in board, M = No. of columns in board, L = Length of word<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Compelxity:&nbsp;</strong>O(L), L is length of word.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N, M ≤ 100<br style="user-select: auto;">
1 ≤ L ≤ N*M</span></p>
 <p style="user-select: auto;"></p>
            </div>