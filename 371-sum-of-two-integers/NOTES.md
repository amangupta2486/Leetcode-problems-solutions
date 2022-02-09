function decrementer(num, sum) {
for (let i = num; i < 0; i++) {
sum--;
debugger;
}
return sum;
}
```
​
```
class Solution {
public:
//but it not works for negative constraints.
int sum(int a,int b){
while(b!=0){
int carry = a & b;
a = a^b;
b = carry << 1;
}
return a;
}
int getSum(int a, int b) {
int sum = a;
//for hadling negative numbers to work left sift.
long mask = 0xFFFFFFFF;
while(b!=0){
sum = (a^b);
b = ((a&b) & mask)<<1;
a = sum;
}
return sum;
}
};
```
​
```
class Solution {
public:
int getSum(int a, int b) {
int sum = a;
while (b != 0)
{
sum = a ^ b;//calculate sum of a and b without thinking the carry
b = (a & b) << 1;//calculate the carry
a = sum;//add sum(without carry) and carry
}
return sum;
}
};
```