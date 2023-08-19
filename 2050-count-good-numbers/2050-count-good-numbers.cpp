class Solution {
public:
const int mod = 1e9+7;
long long modPow(long long a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        n /= 2;
    }
    return res;
}
    int countGoodNumbers(long long n) {
        long long x =1;
    if (n & 1) {
        x = (x * modPow(5, (n / 2 + 1))) % mod;
        x = (x * modPow(4, n / 2)) % mod;
    } else {
        x = (x * modPow(5, n / 2)) % mod;
        x = (x * modPow(4, n / 2)) % mod;
    }
    
    return static_cast<int>(x);
    }
};