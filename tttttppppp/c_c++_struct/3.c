#include <stdio.h>

// Enumérations pour le genre et le statut
typedef enum {
    MASCULIN,
    FEMININ
} Genre;

typedef enum {
    ETUDIANT,
    EMPLOYE
} Statut;

// Structure pour représenter une personne
typedef struct {
    char nom[50];
    char prenom[50];
    Genre genre;
    Statut statut;
    union {
        struct {
            int numeroApogee;
        } etudiant;
        struct {
            char nomEtablissement[100];
            int numeroSecu;
        } employe;
    } info;
} Personne;

// Fonction pour afficher les informations d'une personne
void afficherPersonne(Personne personne) {
    printf("Bonjour ");
    if (personne.genre == MASCULIN) {
        printf("Monsieur ");
    } else {
        printf("Madame ");
    }
    printf("%s %s,\n", personne.nom, personne.prenom);
    
    printf("Informations:\n");
    printf("Genre: %s\n", personne.genre == MASCULIN ? "Masculin" : "Féminin");
    printf("Statut: %s\n", personne.statut == ETUDIANT ? "Étudiant" : "Employé");
    
    if (personne.statut == ETUDIANT) {
        printf("Numéro Apogée: %d\n", personne.info.etudiant.numeroApogee);
    } else {
        printf("Nom de l'établissement: %s\n", personne.info.employe.nomEtablissement);
        printf("Numéro de sécurité sociale: %d\n", personne.info.employe.numeroSecu);
    }
}

int main() {
    // Création d'une instance de la structure Personne
    Personne personne1 = {"Alami", "Ahmed", MASCULIN, ETUDIANT, {15203}};
    
    // Affichage des informations de la personne
    afficherPersonne(personne1);
    
    return 0;
}
