#include "Class.h"



Spider::Spider()
{
    vibration.resize(spiderNum);
    solution.resize(solutionSize);

    for (int i = 0; i < solutionSize; i++)
    {
        solution[i] = rand() % 2;
    }
}

void Spider::calculateWeight(float bestS, float worstS, float currentS)
{
    this->weight = (currentS - worstS) / (bestS - worstS);
}

void Spider::vibrationModel(vector<Spider> spiderList)
{
    for (int i = 0; i < femaleSpider; i++)
    {
        this->vibration[i] = femaleSpiderList[i].weight;
    }
}
void Spider::printSolution()
{
    for (int i = 0; i < solutionSize; i++)
        cout << solution[i];
}

void Spider::femaleCooperation()
{
    float probibility = (double)rand() / (RAND_MAX + 1);
    float alpha, beta, gamma;
    alpha = (double)rand() / (RAND_MAX + 1);
    beta = (double)rand() / (RAND_MAX + 1);
    gamma = (double)rand() / (RAND_MAX + 1);

    if (probibility < PF)
    {
    }
    else
    {
        /* code */
    }
}

void Spider::maleCooperation()
{
}
