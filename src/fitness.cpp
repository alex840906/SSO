#include "fitness.h"

int fitness(vec_1D &solution)
{
    int fitnessValue = 0;
    fitnessValue = pow((solution[0] - 2), 2) + pow(solution[1] - 3, 4)\ 
        + pow(solution[2] - 1, 2) +
                   3;

    return fitnessValue;
}

void calculateScoreMatrix(vec_2D &HM, vec_1D &scroeMatrix, vec_1D &scoreIndex)
{
    scroeMatrix.resize(HMS);
    scoreIndex.resize(HMS);
    int score;
    for (int i = 0; i < HMS; i++)
    {
        score = fitness(HM[i]);
        scroeMatrix[i] = score;
        scoreIndex[i] = i;
    }

    for (int i = 0; i < HMS - 1; i++)
    {
        for (int j = 0; j < HMS - 1; j++)
        {
            if (scroeMatrix[scoreIndex[j]] > scroeMatrix[scoreIndex[j + 1]])
                swap(scoreIndex, j, j + 1);
        }
    }
}
