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
}
word.pop_back();
if (word.compare("") == 0)
{
found = true;
return;
}
board.at(i).at(j) = '.';
if (i + 1 < board.size() && board.at(i + 1).at(j) != '.')
{
backtrack(board, word, found, i + 1, j);
}
if (i - 1 >= 0 && board.at(i - 1).at(j) != '.')