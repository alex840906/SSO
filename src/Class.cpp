#include "Class.h"

vector<Spider> SpiderList(spiderNum);//Use vector to construct Spider

Spider::Spider()
{
    vibration.resize(spiderNum);
    position.resize(solutionSize);

    for (int i = 0; i < solutionSize; i++)
    {
        position[i] = rand() % 2;
    }
    
}

void Spider::calculateWeight(float bestS, float worstS, float currentS)
{
    this->weight = (currentS - worstS) / (bestS - worstS);
}

void Spider::vibrationModel(vector<Spider> spiderList)
{
    // for(int i=0;i<spiderNum;i++)
    // {
    //     this->vibration[i] = 
    // }
}
void Spider::printSolution()
{
    for(int i=0;i<solutionSize;i++)
        cout<<position[i];
}