#include "struct.h"


// F. calculer la distance entre deux points
float distance(struct Point p1, struct Point p2)
{
    float dx = p2.x - p1.x;  // 3 - 1 = 2;
    float dy = p2.y - p1.y; //  4 - 2 = 2;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    struct Point p1 = {1, 2};
    struct Point p2 = {3, 4};

    // distance p1 , p2
    float dist = distance(p1, p2);

    printf("La distance entre les points p1 et p2 est : %.2f\n", dist);

    return 0;
}
