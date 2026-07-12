class Solution {
public:
    double power(double x, long long n) {
        if (n == 0)
            return 1;

        double mid = power(x, n / 2);

        if (n % 2 == 0)
            return mid * mid;

        return mid*mid* x;
    }

    double myPow(double x, int n) {
        long long N = n;

        if (N < 0) {
            x = 1.0 / x;
            N = -N;
        }

        return power(x, N);
    }
};