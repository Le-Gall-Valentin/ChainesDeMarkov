//
// Created by Le Gall on 31/10/2023.
//

#ifndef CHAINESDEMARKOV_MATRIX_H
#define CHAINESDEMARKOV_MATRIX_H
#include "stdlib.h"
#include "stdio.h"

typedef struct intMatrix{
    double** matrix;
    int columns;
    int lines;
}intMatrix;

intMatrix *createEmptyMatrix(int columns, int lines);
void addValueInMatrixOfIntMatrixWithColumnAndLine(intMatrix* intMatrix, int column, int line, double value);
double getValueInMatrixOfIntMatrixWithColumnAndLine(intMatrix* intMatrix, int column, int line);
void displayIntMatrix(intMatrix* intMatrix);
void deleteIntMatrix(intMatrix* intMatrix);
intMatrix *multiplicationOfTwoIntMatrix(intMatrix* firstMatrix, intMatrix* secondMatrix);

#endif //CHAINESDEMARKOV_MATRIX_H
