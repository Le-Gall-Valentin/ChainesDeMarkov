#include "matrix.h"

int main() {
    intMatrix *P = createEmptyMatrix(3,3);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 0, 0, 0.5);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 0, 1, 0.2);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 0, 2, 0.3);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 1, 0, 0.1);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 1, 1, 0.6);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 1, 2, 0.3);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 2, 0, 0.1);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 2, 1, 0.2);
    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 2, 2, 0.7);
    printf("P =\n");
    displayIntMatrix(P);
    printf("X0 = \n");
    intMatrix *X0 = createEmptyMatrix(1,3);
    addValueInMatrixOfIntMatrixWithColumnAndLine(X0, 0, 0, 0.36);
    addValueInMatrixOfIntMatrixWithColumnAndLine(X0, 0, 1, 0.4);
    addValueInMatrixOfIntMatrixWithColumnAndLine(X0, 0, 2, 0.24);
    displayIntMatrix(X0);
    intMatrix *MatrixForMarkov = X0;
    printf("%d; %0.3f; %0.3f; %0.3f\n", 0, MatrixForMarkov->matrix[0][0], MatrixForMarkov->matrix[1][0], MatrixForMarkov->matrix[2][0]);
    for (int i = 1; i <= 20; ++i) {
        printf("X%d =\n", i);
        MatrixForMarkov = multiplicationOfTwoIntMatrix(P, MatrixForMarkov);
//        printf("%d; %0.3f; %0.3f; %0.3f\n", i, MatrixForMarkov->matrix[0][0], MatrixForMarkov->matrix[1][0], MatrixForMarkov->matrix[2][0]);
        displayIntMatrix(MatrixForMarkov);
    }
//    intMatrix *P = createEmptyMatrix(5,5);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 0,0,0.8);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 4,0,0.1);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 0,1,0.2);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 1,1,0.7);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 1,2,0.3);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 2,2,0.4);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 4,2,0.25);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 2,3,0.6);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 3,3,0.2);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 3,4,0.8);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(P, 4,4,0.65);
//    displayIntMatrix(P);
//    printf("\n");
//    intMatrix *X0 = createEmptyMatrix(1,5);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(X0, 0,0,0.2);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(X0, 0,1,0.2);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(X0, 0,2,0.2);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(X0, 0,3,0.2);
//    addValueInMatrixOfIntMatrixWithColumnAndLine(X0, 0,4,0.2);
//    printf("\n");
//    intMatrix *resultMatrix = X0;
//    for (int i = 0; i < 100; ++i) {
//        displayIntMatrix(resultMatrix);
//        resultMatrix = multiplicationOfTwoIntMatrix(P, resultMatrix);
//        printf("\n");
//    }
    return 0;
}
