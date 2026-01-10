//c'est ici que chacun colle son bout de code
#include <stdio.h>
#include <string.h>
#include "etudiant.h"

void viderBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

// FONCTION 1 : AJOUTER UN ÉTUDIANT


void ajouter(Etudiant etudiants[], int *nb) {
    if (*nb >= MAX_ETUDIANTS) {
        printf("Le tableau est plein !\n");
        return;
    }
    
    printf("\n AJOUT D'UN ETUDIANT \n");
    
    printf("Nom : ");
    scanf("%s", etudiants[*nb].nom);
    
    printf("Prenom : ");
    scanf("%s", etudiants[*nb].prenom);
    
    printf("Jour de naissance : ");
    scanf("%d", &etudiants[*nb].date_naissance.jour);
    
    printf("Mois de naissance : ");
    scanf("%d", &etudiants[*nb].date_naissance.mois);
    
    printf("Annee de naissance : ");
    scanf("%d", &etudiants[*nb].date_naissance.annee);
    
    printf("Departement : ");
    scanf("%s", etudiants[*nb].departement);
    
    printf("Filiere : ");
    scanf("%s", etudiants[*nb].filiere);
    
    printf("Matricule : ");
    scanf("%s", etudiants[*nb].matricule);
    
    printf("Region d'origine : ");
    scanf("%s", etudiants[*nb].region_origine);
    
    (*nb)++;
    printf("\nEtudiant ajoute avec succes !\n");
}
// FONCTION 2 : MODIFIER UN ÉTUDIANT


void modifier(Etudiant etudiants[], int nb) {
    char mat[20];
    Etudiant *p = NULL;  
    
    printf("\n MODIFICATION \n");
    printf("Matricule de l'etudiant : ");
    scanf("%s", mat);
    
    // Recherche de l'étudiant avec pointeur
    for (int i = 0; i < nb; i++) {
        if (strcmp(etudiants[i].matricule, mat) == 0) {
            p = &etudiants[i];  // Le pointeur pointe sur l'étudiant trouvé
            break;
        }
    }
    
    if (p == NULL) {
        printf("Etudiant non trouve !\n");
        return;
    }

// FONCTION 3 : RECHERCHER PAR MATRICULE



// FONCTION 4 : SUPPRIMER UN ÉTUDIANT



// FONCTION 5 : TRIER PAR NOM


// FONCTION 6 : RECHERCHE DICHOTOMIQUE


// FONCTION 7 : CALCULER L'ÂGE


// FONCTION 8 : TRIER PAR FILIÈRE

// FONCTION 9 : AFFICHER TOUS LES ÉTUDIANTS


// MENU
void menu() {
    printf("\n===== MENU =====\n");
    printf("1. Ajouter\n");
    printf("2. Modifier\n");
    printf("3. Rechercher\n");
    printf("4. Supprimer\n");
    printf("5. Trier par nom\n");
    printf("6. Recherche dichotomique\n");
    printf("7. Calculer age\n");
    printf("8. Trier par filiere\n");
    printf("9. Afficher tous\n");
    printf("0. Quitter\n");
    printf("Choix : ");
}
