#include "Class.h"

Spider::Spider(bool gender)
{
    this->gender = gender;
    //vibration.resize(spiderNum);
    solution.resize(solutionSize);

    for (int i = 0; i < solutionSize; i++)
    {
        solution[i] = rand() % 2;
    }
}

Spider::Spider()
{
    //this->gender = gender;
    //vibration.resize(spiderNum);
    solution.resize(solutionSize);

    for (int i = 0; i < solutionSize; i++)
    {
        solution[i] = rand() % 2;
    }
}

Spider::NearestSpider::NearestSpider()
{

}

void Spider::calculateWeight(float bestS, float worstS, float currentS)
{
    this->weight = (currentS - worstS) / (bestS - worstS);
}

void Spider::vibrationModel(Spider currentSpider)
{
    if(currentSpider.gender == 1)
    {
        currentSpider.vibb = bestSpider.weight\
         * exp(-pow((calDistance(currentSpider.loc, bestSpider.loc)),2));
        
        currentSpider.vibc = nearestSpider.weight\
         * exp(-pow((calDistance(currentSpider.loc, currentSpider.nearestSpider.loc)),2));
    }

    else
    {
        currentSpider.vibf = currentSpider.vibc = currentSpider.nearestSpider.weight\
         * exp(-pow((calDistance(currentSpider.loc, currentSpider.nearestSpider.loc)),2));
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

