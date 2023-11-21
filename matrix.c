//
// Created by Le Gall on 31/10/2023.
//

#include "matrix.h"

intMatrix *createEmptyMatrix(int columns, int lines) {
    intMatrix *newIntMatrix = (intMatrix *) malloc(sizeof(intMatrix));
    newIntMatrix->columns = columns;
    newIntMatrix->lines = lines;
    newIntMatrix->matrix = (double **) malloc(lines * sizeof(double *));
    for (int i = 0; i < lines; ++i) {
        newIntMatrix->matrix[i] = (double *) malloc(columns * sizeof(double));
        for (int j = 0; j < columns; ++j) {
            newIntMatrix->matrix[i][j] = 0;
        }
    }
    return newIntMatrix;
}

void addValueInMatrixOfIntMatrixWithColumnAndLine(intMatrix *intMatrix, int column, int line, double value) {
    if (column <= intMatrix->columns && line <= intMatrix->lines) {
        intMatrix->matrix[line][column] = value;
    }
}

double getValueInMatrixOfIntMatrixWithColumnAndLine(intMatrix *intMatrix, int column, int line) {
    if (column <= intMatrix->columns && line <= intMatrix->lines) {
        return intMatrix->matrix[line][column];
    }
    return -1;
}

void displayIntMatrix(intMatrix *intMatrix) {
    for (int i = 0; i < intMatrix->lines; ++i) {
        printf("| ");
        for (int j = 0; j < intMatrix->columns; ++j) {
            printf("%0.3f ", intMatrix->matrix[i][j]);
        }
        printf("|\n");
    }
}

void deleteIntMatrix(intMatrix *intMatrix) {
    for (int i = 0; i < intMatrix->columns; ++i) {
        free(intMatrix->matrix[i]);
    }
    free(intMatrix->matrix);
    free(intMatrix);
}

intMatrix *multiplicationOfTwoIntMatrix(intMatrix *firstMatrix, intMatrix *secondMatrix){
    if (firstMatrix->columns != secondMatrix->lines) {
        return NULL;
    }
    intMatrix *resultMatrix = createEmptyMatrix(secondMatrix->columns, firstMatrix->lines);
    for (int i = 0; i < firstMatrix->lines; i++) {
        for (int j = 0; j < secondMatrix->columns; j++) {
            for (int k = 0; k < firstMatrix->columns; k++) {
                resultMatrix->matrix[i][j] += firstMatrix->matrix[i][k] * secondMatrix->matrix[k][j];
            }
        }
    }
    return resultMatrix;
}
