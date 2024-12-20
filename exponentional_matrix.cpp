const int MOD = 1000000007;

// Função para multiplicar duas matrizes 2x2 (mod MOD)
vector<vector<long long>> multiply(const vector<vector<long long>> &A, const vector<vector<long long>> &B) {
    vector<vector<long long>> result(2, vector<long long>(2, 0));
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
vector<vector<long long>> matrix_exponentiation(vector<vector<long long>> matrix, long long power) {
    vector<vector<long long>> result = {{1, 0}, {0, 1}}; // Matriz identidade
    while (power) {
        if (power % 2 == 1) {
            result = multiply(result, matrix);
        }
        matrix = multiply(matrix, matrix);
        power /= 2;
    }
    return result;
}
