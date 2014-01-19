//The following code evaluates the Modulo Multiplicative Inverse using the Extended Euclidean Algorithm
//For more details on modulo multiplicative inverse http://en.wikipedia.org/wiki/Modular_multiplicative_inverse
pair<long long, pair<long long, long long> > extendedEuclid(long long a, long long b) {
    long long x = 1, y = 0;
    long long xLast = 0, yLast = 1;
    long long q, r, m, n;
    while(a != 0) {
        q = b / a;
        r = b % a;
        m = xLast - q * x;
        n = yLast - q * y;
        xLast = x, yLast = y;
        x = m, y = n;
        b = a, a = r;
    }
    return make_pair(b, make_pair(xLast, yLast));
}

long long modInverse(long long a, long long m) {
    return (extendedEuclid(a,m).second.first + m) % m;
}
