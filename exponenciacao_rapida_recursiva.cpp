constexpr int modulo = 1e9 + 7;

int64_t exponenciacao_rapida(int64_t base, int64_t expoente, int modulo) {
        int64_t resultado = 1;
        while(expoente > 0) {
            if(expoente % 2 != 0) {
                resultado = (resultado * base) % modulo;
            }
            base = (base * base) % modulo;
            expoente/= 2;
        }
        return resultado;
    }

