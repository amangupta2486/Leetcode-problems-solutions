# Prime factorization and geek number
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">As we know that every number &gt;=2 can be represented as natural powers of primes(prime factorization). Also <a href="https://en.wikipedia.org/wiki/Fundamental_theorem_of_arithmetic" target="_blank" style="user-select: auto;">prime factorization is unique for a number</a>.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Eg. 360 = 2<sup style="user-select: auto;">3</sup>3<sup style="user-select: auto;">2</sup>5<sup style="user-select: auto;">1</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Today we are interested in <strong style="user-select: auto;">geek</strong> numbers.&nbsp;A <strong style="user-select: auto;">geek</strong> number is a number whose prime factorization only contains powers of unity.Below are some geek numbers.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Eg. 2 = 2<sup style="user-select: auto;">1</sup><br style="user-select: auto;">
&nbsp; &nbsp; 22 = 2<sup style="user-select: auto;">1</sup>11<sup style="user-select: auto;">1</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 22
<strong style="user-select: auto;">Output:</strong> Yes
<strong style="user-select: auto;">Explaination:</strong> 22 = 2<sup style="user-select: auto;">1</sup>11<sup style="user-select: auto;">1</sup>. Where all the 
powers of prime numbers are one.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 4
<strong style="user-select: auto;">Output:</strong> No
<strong style="user-select: auto;">Explaination:</strong> 4 = 2<sup style="user-select: auto;">2</sup>. Where all the 
powers of all the prime are not one.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">geekNumber()</strong> which takes N as input parameter and returns 1 if it a geek number. Otherwise, returns 0.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(sqrt(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">6</sup>&nbsp;&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>