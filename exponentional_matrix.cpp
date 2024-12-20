const int MOD = 1000000007;

// Função para multiplicar duas matrizes 2x2 (mod MOD)
vector<vector<int64_t> > multiply(const vector<vector<int64_t> > &A, const vector<vector<int64_t> > &B) {
    vector<vector<int64_t> > result(2, vector<int64_t>(2, 0));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return result;
}

// Função para realizar a exponenciação de matriz
vector<vector<int64_t> > matrix_exponentiation(vector<vector<int64_t> > matrix, long long power) {
    vector<vector<int64_t> > result = {{1, 0}, {0, 1}}; // Matriz identidade
    while (power) {
        if (power % 2 == 1) {
            result = multiply(result, matrix);
        }
        matrix = multiply(matrix, matrix);
        power /= 2;
    }
    return result;
}
