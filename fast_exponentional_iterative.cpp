constexpr int MOD = 1e9 + 7;

int64_t fexp(int64_t base, int64_t exp, int MOD) {
    int64_t result = 1;
    while (exp > 0) {
        if (exp & 1) {
          result = result * base % MOD;
        }
        base = base * base % MOD;
        exp >>= 1;
    }
    return result;
}

