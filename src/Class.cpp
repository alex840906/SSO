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
    if (currentSpider.gender == 1)
    {
        currentSpider.vibb = bestSpider.weight * exp(-pow((calDistance(currentSpider.loc, bestSpider.loc)), 2));
        currentSpider.vibc = nearestSpider.weight * exp(-pow((calDistance(currentSpider.loc, currentSpider.nearestSpider.loc)), 2));
    }

    else
    {
        currentSpider.vibf = currentSpider.vibc = currentSpider.nearestSpider.weight * exp(-pow((calDistance(currentSpider.loc, currentSpider.nearestSpider.loc)), 2));
    }
}
void Spider::printSolution()
{
    for (int i = 0; i < solutionSize; i++)
        cout << solution[i];
}

void Spider::rearrangeMaleSpiderList()
{
    for (int i = 0; i < maleSpider-1; i++)
    {
        for (int j = 0; j < maleSpider-1; j++)
        {
            if (maleSpiderList[j].weight > maleSpiderList[j + 1].weight)
            {
                Spider tmp = maleSpiderList[j];
                maleSpiderList[j] = maleSpiderList[j + 1];
                maleSpiderList[j + 1] = tmp;
            }
        }
    }
}

void Spider::femaleCooperation()
{
    float probibility = (double)rand() / (RAND_MAX + 1);
    float alpha, beta, gamma, r;
    alpha = (double)rand() / (RAND_MAX) + 1;
    beta = (double)rand() / (RAND_MAX) + 1;
    gamma = (double)rand() / (RAND_MAX) + 1;
    r = (double)rand() / (RAND_MAX) + 1;

    if (probibility < PF)
    {
        for (int i = 0; i <= 1; i++)
        {
            loc[i] = loc[i] + alpha * vibc * (nearestSpider.loc[i] - loc[i])\
             + beta * vibb * (bestSpider.loc[i] - loc[i])\
             + gamma * (r - 0.5);
        }            
    }
    else
    {
        for (int i = 0; i <= 1; i++)
        {
            loc[i] = loc[i] - alpha * vibc * (nearestSpider.loc[i] - loc[i])\
             - beta * vibb * (bestSpider.loc[i] - loc[i])\
             + gamma * (r - 0.5);
        }  
    }
}

void Spider::maleCooperation()
{
    int medianIndex = maleSpider/2;
    float alpha, gamma, r;
    alpha = (double)rand() / (RAND_MAX) + 1;
    gamma = (double)rand() / (RAND_MAX) + 1;
    r = (double)rand() / (RAND_MAX) + 1;

    if(weight > maleSpiderList[medianIndex].weight)
    {
        for (int i = 0; i <= 1; i++)
        {
            loc[i] = loc[i] + alpha * vibf * (nearestSpider.loc[i] - loc[i])\
             + gamma * (r - 0.5);
        }   
    }

    else
    {     
        for (int i = 0; i <= 1; i++)
        {
            float delta=0, numerator=0, denominator=0;

            for(int j = 0;j<maleSpider;j++)
            {
                numerator += maleSpiderList[j].loc[i] * maleSpiderList[j].weight;
                denominator += maleSpiderList[j].weight;
            }
            delta = alpha * (numerator / denominator - loc[i]);
            loc[i] += delta;
        }   
    }
    

}
