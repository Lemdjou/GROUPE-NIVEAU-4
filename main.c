#include <stdio.h>
#include "etudiant.h"

int main() {
    Etudiant etudiants[MAX_ETUDIANTS];
    int nb = 0;
    int choix;
    
    printf("====================================\n");
    printf("  Bienvenue sur la plateforme!\n");
    printf("  GESTION DES ETUDIANTS \n");
    printf("====================================\n");
    
    do {
        menu();
        scanf("%d", &choix);
        
        switch(choix) {
            case 1:
                ajouter(etudiants, &nb);
                break;
            case 2:
                modifier(etudiants, nb);
                break;
            case 3:
                rechercher(etudiants, nb);
                break;
            case 4:
                supprimer(etudiants, &nb);
                break;
            case 5:
                trierNom(etudiants, nb);
                break;
            case 6:
                rechercheDicho(etudiants, nb);
                break;
            case 7:
                calculerAge(etudiants, nb);
                break;
            case 8:
                trierFiliere(etudiants, nb);
                break;
            case 9:
                afficher(etudiants, nb);
                break;
            case 0:
                printf("\nAu revoir !\n");
                break;
            default:
                printf("\nChoix invalide !\n");
        }
    } while(choix != 0);
    
    return 0;
}
