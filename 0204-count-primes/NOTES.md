```
class Solution {
public:
int SieveOfEratosthenes(int n){
bool prime[n + 1];
int count=0;
memset(prime, true, sizeof(prime));
for (int p = 2; p * p <= n; p++)
{
if (prime[p] == true)
{
for (int i = p * p; i <= n; i += p)
prime[i] = false;
}
}
for (int p = 2; p <= n; p++){
if (prime[p]){
count++;
}
}
return count;