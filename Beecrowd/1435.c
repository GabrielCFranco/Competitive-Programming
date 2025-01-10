#include <stdio.h>

int main() {

    int matrixLen, digit, startLen, finalLen;

    while (scanf("%d", &matrixLen) && matrixLen != 0) {
        int matrix[matrixLen][matrixLen];
        
        digit = 1;
        startLen = 0;
        finalLen = matrixLen;
        
        while (startLen < finalLen) {
            for (int r = startLen; r < finalLen; r++) {
                for (int c = startLen; c < finalLen; c++) {
                    matrix[r][c] = digit;
                }
            }
            digit++;
            startLen++;
            finalLen--;
        }
        
        for (int r = 0; r < matrixLen; r++) {
            for (int c = 0; c < matrixLen; c++) {
                if (c == 0) printf("%3d", matrix[r][c]);
                else printf(" %3d", matrix[r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}