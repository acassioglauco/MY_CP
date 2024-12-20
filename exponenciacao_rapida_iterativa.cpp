int64_t exponenciacao_rapida(int64_t base, int64_t expoente, int modulo) {
    int64_t resultado = 1;
    while (expoente > 0) {
        if (expoente % 2 == 1) { // Verifica se o expoente é ímpar
            resultado = (resultado * base) % modulo;
        }
        base = (base * base) % modulo; // Eleva a base ao quadrado
        expoente /= 2;                 // Divide o expoente por 2
    }
    return resultado;
}
