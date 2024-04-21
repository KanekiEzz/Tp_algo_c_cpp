#include <stdio.h>
#include <math.h>

// Structure pour représenter un point dans un plan
typedef struct Point {
    double x;
    double y;
} Point;

// Structure pour représenter un triangle
typedef struct Triangle {
    Point A;
    Point B;
    Point C;
} Triangle;

// Fonction pour calculer la distance entre deux points
double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Fonction pour calculer le périmètre d'un triangle
double perimeter(Triangle triangle) {
    double AB = distance(triangle.A, triangle.B);
    double BC = distance(triangle.B, triangle.C);
    double AC = distance(triangle.A, triangle.C);
    return AB + BC + AC;
}

int main() {
    // Déclaration et initialisation des points A, B et C
    Point A = {1, 2};
    Point B = {3, 4};
    Point C = {3, 4};

    // Création du triangle ABC
    Triangle triangle = {A, B, C};

    // Calcul du périmètre du triangle ABC
    double peri = perimeter(triangle);

    // Affichage du périmètre
    printf("Le perimetre du triangle ABC est : %.2f\n", peri);

    return 0;
}
