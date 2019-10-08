#include "Class.h"

vector<Spider> femaleSpiderList(femaleSpider); //Use vector to construct Spider
vector<Spider> maleSpiderList(maleSpider); //Use vector to construct Spider


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

void Spider::vibrationModel(vector<Spider> femaleSpiderList, vector<Spider> maleSpiderList)
{
    for(int i=0;i<femaleSpider;i++)
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
    float probibility = (double) rand() / (RAND_MAX + 1);

    if(probibility < PF)
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