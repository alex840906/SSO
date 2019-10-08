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
    vec_1D position;
    vector<vector<float>> vibration;
    float fitnessValue;
    float weight;

public:
    int  a = 9;
    void calculateWeight(float,float,float);
    void vibrationModel(vector<Spider>);
    void printSolution();


    Spider(); //建構子
};

#endif