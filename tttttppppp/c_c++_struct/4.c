#include <stdio.h>
#include <stdlib.h>

// Enumeration des codes d'erreur
enum CodeErreur {
    SUCCES,
    INDEX_ERROR,
    MEMORY_ERROR,
    OTHER_ERROR
};

// Structure de la liste d'entiers
struct Liste {
    int *tableau;
    int taille;
};

// Fonction pour récupérer un élément de la liste selon son indice
enum CodeErreur obtenirElement(struct Liste *liste, int indice, int *resultat) {
    // Vérification de l'indice
    if (indice < 0 || indice >= liste->taille) {
        return INDEX_ERROR;
    }
    
    // Vérification de la mémoire allouée pour le tableau
    if (liste->tableau == NULL) {
        return MEMORY_ERROR;
    }

    // Récupération de la valeur
    *resultat = liste->tableau[indice];
    return SUCCES;
}

int main() {
    // Création d'une liste d'entiers
    struct Liste maListe;
    maListe.taille = 5;
    maListe.tableau = (int *)malloc(maListe.taille * sizeof(int));
    
    // Remplissage de la liste avec des valeurs de test
    for (int i = 0; i < maListe.taille; i++) {
        maListe.tableau[i] = i * 2;
    }

    // Test de la fonction obtenirElement
    int resultat;
    enum CodeErreur code = obtenirElement(&maListe, 2, &resultat);

    // Affichage du résultat en fonction du code d'erreur
    switch (code) {
        case SUCCES:
            printf("La valeur de l'élément est : %d\n", resultat);
            break;
        case INDEX_ERROR:
            printf("Erreur : l'indice est hors de la liste.\n");
            break;
        case MEMORY_ERROR:
            printf("Erreur : mémoire non allouée pour le tableau.\n");
            break;
        case OTHER_ERROR:
            printf("Erreur inconnue.\n");
            break;
    }

    // Libération de la mémoire allouée pour le tableau
    free(maListe.tableau);

    return 0;
}
