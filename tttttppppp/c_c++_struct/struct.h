#ifndef STRUCT_H
# define STRUCT_H

#include <stdio.h>
#include <math.h>

struct Point 
{
    float x;
    float y;
};

float distance(struct Point p1, struct Point p2);

#endif