Input
[["A","B","C","E"],["S","F","E","S"],["A","D","E","E"]]
"ABCESEEEFS"
Output
false
Expected
true
​
[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
"ABCCED"
[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
"SEE"
[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
"ABCB"
[["a","a"]]
"aaa"
[["A","A","A","A","A","A"],["A","A","A","A","A","A"],["A","A","A","A","A","A"],["A","A","A","A","A","A"],["A","A","A","A","A","A"],["A","A","A","A","A","A"]]
"AAAAAAAAAAAAAAB"
[["A","B","C","E"],["S","F","E","S"],["A","D","E","E"]]
"ABCESEEEFS"
​
​
class Solution {
public:
void backtrack(vector<vector<char>> &board,string &word, bool &found, int i, int j){
if (found)
{
return;
}
char letter = word.back();
if (board.at(i).at(j) != letter)
{
return;