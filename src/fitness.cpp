#include "fitness.h"

int fitness(vec_1D &solution)
{
    int fitnessValue = 0;
    for (int i = 0; i < solution.size(); i++)
    {
        if (solution[i] == 1)
            fitnessValue++;
    }

    return fitnessValue;
}

// void calculateScoreMatrix(vec_2D &HM, vec_1D &scroeMatrix, vec_1D &scoreIndex)
// {
//     scroeMatrix.resize(HMS);
//     scoreIndex.resize(HMS);
//     int score;
//     for (int i = 0; i < HMS; i++)
//     {
//         score = fitness(HM[i]);
//         scroeMatrix[i] = score;
//         scoreIndex[i] = i;
//     }

//     for (int i = 0; i < HMS - 1; i++)
//     {
//         for (int j = 0; j < HMS - 1; j++)
//         {
//             if (scroeMatrix[scoreIndex[j]] > scroeMatrix[scoreIndex[j + 1]])
//                 swap(scoreIndex, j, j + 1);
//         }
//     }
// }
