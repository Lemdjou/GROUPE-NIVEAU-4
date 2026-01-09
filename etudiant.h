#ifndef ETUDIANT_H
#define ETUDIANT_H

#define MAX_ETUDIANTS 100

// Structure pour la date
typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

// Structure pour un étudiant
typedef struct {
    char nom[50];
    char prenom[50];
    Date date_naissance;
    char departement[30];
    char filiere[30];
    char matricule[20];
    char region_origine[30];
} Etudiant;

// Déclarations des fonctions
void viderBuffer();
void ajouter(Etudiant etudiants[], int *nb);
void modifier(Etudiant etudiants[], int nb);
void rechercher(Etudiant etudiants[], int nb);
void supprimer(Etudiant etudiants[], int *nb);
void trierNom(Etudiant etudiants[], int nb);
void rechercheDicho(Etudiant etudiants[], int nb);
void calculerAge(Etudiant etudiants[], int nb);
void trierFiliere(Etudiant etudiants[], int nb);
void afficher(Etudiant etudiants[], int nb);
void menu();

#endif
