#include "mesfonctions.h"
#include <stdio.h>

void exercice1 (void) {
    int entier1 = 0, entier2 = 0;
    printf("Saisissez deux entiers :\n");
    scanf(" %d\n%d", &entier1, &entier2);
    printf("L'entier le plus grand est %d.\n", getMax(entier1, entier2));
}

void exercice3 (void) {
    int longueur = 0, largeur = 0;
    longueur = saisirEntier();
    largeur = saisirEntier();
    printf("L'aire de ce rectangle est %d.\n", calculAire(longueur, largeur));
    printf("Le perimetre de ce rectangle est %d.\n", calculPerimetre(longueur, largeur));
}

#define ENTIER_EXO4 10

void exercice4 (void) {
    int entier = 0;
    entier = saisirEntier();
    if ( multiple(entier,3) )      // On regarde si notre entier est multiple de 3 avec notre sous programme.
    {
        printf("%d est un multiple de 3.\n", entier);
    }
    else
    {
        printf("%d n'est pas un multiple de 3.\n", entier);
    }

    if (entier >= ENTIER_EXO4)
    {
        printf("%d est superieur ou egale a 10.\n", entier);
    }
    else
    {
        printf("%d n'est pas superieur ou egale a 10.\n", entier);
    }
}

void exercice5 (void) {
    int entier1 = 0, entier2 = 0, entier3 = 0;
    entier1 = saisirEntier();
    entier2 = saisirEntier();
    entier3 = saisirEntier();
    printf("La moyenne de ces 3 notes est %f.\n", moyenne(entier1, entier2, entier3));
}


void exercice7 (void) {
    int nombreClasse = 0, nombreEleve = 0, totalEleve = 0;
    printf("Saisissez le nombre de classes ouvertes.\n");
    nombreClasse = saisirEntier();
    printf("Saisissez le nombre d'eleves qu'il y a dans chaque classe.\n");
    totalEleve = sommeEntier( nombreClasse );            // On utilise une fonction qui somme un nombre voulu d'entier.
    printf("Il y a %d eleve(s) dans l'ecole.\n", totalEleve);
}


void exercice8 (void) {
    int entier = 0;
    do
    {
        entier = saisirEntier();
        if ( !(multiple(entier,14)) )       //Etre multiple de 2 et de 7 c'est être multiple de 14.
        {
            printf("Cet entier n'est pas un multiple de 2 et de 7.\n");
        }
    } while ( !(multiple(entier,14)) );
    printf("%d est un multiple de 2 et de 7.\n", entier);
}


void exercice9 (void) {
    int nombreEtage = 0, nombrePierre = 0;
    printf("Saisissez votre nombre de pierre :\n");
    scanf("%d", &nombrePierre);
    while ( sommeCarre(nombreEtage) <= nombrePierre )     //On compare la somme des n premier carré avec le nombre de pierre en utilisant un sous programme pour la calculer.
    {
        nombreEtage += 1;
    }
    printf("Vous pourrez construire %d etage(s) avec %d pierre(s).\n", nombreEtage-1, nombrePierre);
}


void exercice10 (void) {
    printf("Saisissez des nombres entier pour en calculer la moyenne et saisissez un nombre negatif pour terminer la saisie:\n");
    printf("La moyenne vaut %f\n", MoyenneSommeFini() );
}

