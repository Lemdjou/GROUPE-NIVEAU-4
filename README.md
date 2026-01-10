Système de Gestion des Étudiants en C
Description
Programme en C pour gérer les informations des étudiants avec des fonctionnalités de base (ajout, modification, recherche, suppression, tri).

Structure du Projet
├── etudiant.h        # Déclarations des structures et fonctions
├── etudiant.c        # Implémentation des fonctions
└── main.c            # Programme principal avec le menu

Structures de Données
Structure Date :
typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

Structure Etudiant :
typedef struct {
    char nom[50];
    char prenom[50];
    Date date_naissance;
    char departement[30];
    char filiere[30];
    char matricule[20];
    char region_origine[30];
} Etudiant;

Fonctionnalités Implémentées

Ajouter un étudiant - Enregistrement d'un nouvel étudiant
Modifier un étudiant - Modification des informations (utilise les pointeurs)
Rechercher un étudiant - Recherche par matricule (recherche linéaire)
Supprimer un étudiant - Suppression avec décalage des éléments
Trier par nom - Tri alphabétique (tri par sélection)
Recherche dichotomique - Recherche rapide sur tableau trié
Calculer l'âge - Calcul de l'âge à partir de la date de naissance
Trier par filière - Tri par filière d'étude
Afficher tous les étudiants - Liste complète des étudiants

Compilation et Exécution
Compiler :
bashgcc -o gestion main.c etudiant.c

Exécuter :
bash./gestion          # Linux/Mac
gestion.exe        # Windows

Utilisation
Le programme affiche un menu avec 10 options (0-9). L'utilisateur saisit le numéro de son choix pour effectuer l'opération correspondante.
Exemple :
===== MENU =====
1. Ajouter
2. Modifier
3. Rechercher
4. Supprimer
5. Trier par nom
6. Recherche dichotomique
7. Calculer age
8. Trier par filiere
9. Afficher tous
0. Abandon
Choix : 1
Concepts Utilisés

Structures imbriquées (Date dans Etudiant)
Tableaux de structures
Pointeurs (fonction modifier et passage par référence avec *nb)
Manipulation de chaînes (strcmp, scanf, printf)
Algorithmes de tri (tri par sélection - O(n²))
Recherche linéaire (O(n)) et dichotomique (O(log n))
Modularisation avec fichiers .h et .c

Notes Techniques

Capacité maximale : 100 étudiants (MAX_ETUDIANTS)
La fonction modifier() utilise un pointeur (Etudiant *p) pour accéder aux champs
getchar() après scanf du menu pour éviter les problèmes de buffer
Les fonctions de tri affichent automatiquement la liste triée






