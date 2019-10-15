#ifndef Class_h
#define Class_h

#include <iostream>
#include <vector>
#include <stdio.h>
#include "SSO_ARG.h"

using namespace std;



class Spider
{
private:
    vec_1D loc;
    vec_1D solution;
    vector<float> vibration;
    float fitnessValue;
    float weight;

public:
    void calculateWeight(float, float, float);
    void vibrationModel(vector<Spider>);
    void printSolution();
    void femaleCooperation();
    void maleCooperation();

    Spider(); //建構子
};

inline vector<Spider> femaleSpiderList(femaleSpider); //Use vector to construct Spider
inline vector<Spider> maleSpiderList(maleSpider);     //Use vector to construct Spider
inline Spider bestSpider;

#endif