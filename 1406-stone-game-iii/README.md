<h2><a href="https://leetcode.com/problems/stone-game-iii/">1406. Stone Game III</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Alice and Bob continue their games with piles of stones. There are several stones <strong style="user-select: auto;">arranged in a row</strong>, and each stone has an associated value which is an integer given in the array <code style="user-select: auto;">stoneValue</code>.</p>

<p style="user-select: auto;">Alice and Bob take turns, with Alice starting first. On each player's turn, that player can take <code style="user-select: auto;">1</code>, <code style="user-select: auto;">2</code>, or <code style="user-select: auto;">3</code> stones from the <strong style="user-select: auto;">first</strong> remaining stones in the row.</p>

<p style="user-select: auto;">The score of each player is the sum of the values of the stones taken. The score of each player is <code style="user-select: auto;">0</code> initially.</p>

<p style="user-select: auto;">The objective of the game is to end with the highest score, and the winner is the player with the highest score and there could be a tie. The game continues until all the stones have been taken.</p>

<p style="user-select: auto;">Assume Alice and Bob <strong style="user-select: auto;">play optimally</strong>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">"Alice"</code><em style="user-select: auto;"> if Alice will win, </em><code style="user-select: auto;">"Bob"</code><em style="user-select: auto;"> if Bob will win, or </em><code style="user-select: auto;">"Tie"</code><em style="user-select: auto;"> if they will end the game with the same score</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> values = [1,2,3,7]
<strong style="user-select: auto;">Output:</strong> "Bob"
<strong style="user-select: auto;">Explanation:</strong> Alice will always lose. Her best move will be to take three piles and the score become 6. Now the score of Bob is 7 and Bob wins.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> values = [1,2,3,-9]
<strong style="user-select: auto;">Output:</strong> "Alice"
<strong style="user-select: auto;">Explanation:</strong> Alice must choose all the three piles at the first move to win and leave Bob with negative score.
If Alice chooses one pile her score will be 1 and the next move Bob's score becomes 5. In the next move, Alice will take the pile with value = -9 and lose.
If Alice chooses two piles her score will be 3 and the next move Bob's score becomes 3. In the next move, Alice will take the pile with value = -9 and also lose.
Remember that both play optimally so here Alice will choose the scenario that makes her win.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> values = [1,2,3,6]
<strong style="user-select: auto;">Output:</strong> "Tie"
<strong style="user-select: auto;">Explanation:</strong> Alice cannot win this game. She can end the game in a draw if she decided to choose all the first three piles, otherwise she will lose.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= stoneValue.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= stoneValue[i] &lt;= 1000</code></li>
</ul>
</div>