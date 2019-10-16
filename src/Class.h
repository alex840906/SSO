#ifndef Class_h
#define Class_h

#include <iostream>
#include <vector>
#include <stdio.h>
#include "SSO_ARG.h"
#include "operator.h"

using namespace std;

class Spider
{
private:
    vec_1D loc;
    vec_1D solution;
    float vibb, vibc, vibf;
    float fitnessValue;
    float weight;

    class NearestSpider
    {
        friend class Spider;
        private:
            vec_1D loc;
            vec_1D solution;
            float vibb, vibc, vibf;
            float fitnessValue;
            float weight;
        public:
            NearestSpider();
    };
    NearestSpider nearestSpider;

public:
    void calculateWeight(float, float, float);
    void vibrationModel(Spider);
    void printSolution();
    void femaleCooperation();
    void maleCooperation();
    bool gender;
    Spider(bool); //建構子
    Spider();
};

inline vector<Spider> femaleSpiderList(femaleSpider, Spider(1)); //Use vector to construct Spider
inline vector<Spider> maleSpiderList(maleSpider, Spider(0));     //Use vector to construct Spider
inline Spider bestSpider;

#endif