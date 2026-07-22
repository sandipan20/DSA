<h2><a href="https://leetcode.com/problems/power-of-two">Power of Two</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given an integer <code>n</code>, return <em><code>true</code> if it is a power of two. Otherwise, return <code>false</code></em>.</p>

<p>An integer <code>n</code> is a power of two, if there exists an integer <code>x</code> such that <code>n == 2<sup>x</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> true
<strong>Explanation: </strong>2<sup>0</sup> = 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 16
<strong>Output:</strong> true
<strong>Explanation: </strong>2<sup>4</sup> = 16
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup> &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it without loops/recursion?

<p>&nbsp;</p>

| Operation             | Formula                          |
| --------------------- | -------------------------------- |
| Odd/Even              | `n & 1`                          |
| Multiply by 2         | `n << 1`                         |
| Divide by 2           | `n >> 1`                         |
| Check ith bit         | `n & (1 << i)`                   |
| Set ith bit           | `n \|= (1 << i)`                 |
| Clear ith bit         | `n &= ~(1 << i)`                 |
| Toggle ith bit        | `n ^= (1 << i)`                  |
| Remove lowest set bit | `n &= (n - 1)`                   |
| Lowest set bit        | `n & (-n)`                       |
| Count set bits        | `while(n){ n &= (n-1); cnt++; }` |
| Power of Two          | `n > 0 && (n & (n - 1)) == 0`    |
| Single Number         | XOR all elements                 |
| Missing Number        | XOR indices and array            |
| Swap                  | `a ^= b; b ^= a; a ^= b;`        |
