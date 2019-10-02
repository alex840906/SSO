#include "Class.h"
#include "Class.h"

Spider::Spider()
{
    position.resize(solutionSize);
    for (int i = 0; i < solutionSize; i++)
    {
        position[i] = rand() % 2;
    }
}