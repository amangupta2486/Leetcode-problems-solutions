[[100,200],[200,1300],[1000,1250],[2000,3200]]
[[1,2]]
[[3,2],[4,3]]
[[5,5],[4,6],[2,6]]
[[2,5],[2,19],[1,8],[1,3]]
[[7,16],[2,3],[3,12],[3,14],[10,19],[10,16],[6,8],[6,11],[3,13],[6,16]]
[[7,17],[3,12],[10,20],[9,10],[5,20],[10,19],[4,18]]
​
Input
[[5,5],[4,6],[2,6]]
Output
1
Expected
2
​
```
class Solution {
public:
int scheduleCourse(vector<vector<int>>& courses) {
sort(courses.begin(), courses.end(), [](auto& lhs, auto& rhs) { return lhs[1] < rhs[1]; });
int prefix = 0;
priority_queue<int> pq;
for (auto& course : courses) {
prefix += course[0];
pq.push(course[0]);
while (prefix > course[1]) {