constexpr int MOD = 1e9 + 7;

int64_t fexp(int64_t base, int64_t exp, int MOD) {
    if (exp == 0) {
      return 1;
    }
    if (exp & 1) {
      return base * fexp(base, exp - 1, MOD) % MOD;
    }
    int64_t half = fexp(base, exp / 2, MOD);
    return half * half % MOD;
}


