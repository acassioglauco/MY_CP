constexpr int mod = 1e9 + 7;

int64_t exponenciacao_rapida(int64_t base, int64_t exp, int mod) {
        int64_t result = 1;
        while(exp > 0) {
            if(exp % 2 != 0) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp/= 2;
        }
        return result;
    }

