#include <stdio.h>

/* Fonction Exo1 qui donne l'entier le plus grand parmis 2 entiers choisi.
 * Paramètres :
 * - IN : entier1 et entier2, les deux entiers que l'on veut comparer.
 * - OUT : la valeur de l'entier le plus grand entre entier1 et entier2. (entier)
 */
int getMax (int entier1, int entier2) {
    return (entier1 > entier2) ? entier1 : entier2;
}


/* Fonction Exo2 qui demande un entier et le renvoie.
 * Paramètres :
 * - IN : Aucun.
 * - OUT : la valeur de l'entier saisie. (entier)
 */
int saisirEntier (void) {
    int entier = 0;
    printf("Saisissez un entier :\n>");
    scanf("%d", &entier);
    return entier;
}


/* Fonction Exo3 qui calcule l'aire d'un rectangle.
 * Paramètres :
 * - IN : longueur et largeur, la longueur et la largeur du rectangle que l'on étudie. (entiers)
 * - OUT : l'air du rectangle étudié. (entier)
 */
int calculAire (int longueur, int largeur) {
    return longueur * largeur;
}


/* Fonction Exo3 qui calcule le périmètre d'un rectangle.
 * Paramètres :
 * - IN : longueur et largeur, la longueur et la largeur du rectangle que l'on étudie. (entiers)
 * - OUT : le périmètre du rectangle étudié. (entier)
 */
int calculPerimetre (int longueur, int largeur) {
    return 2 * (longueur + largeur);
}


/* Fonction Exo4 qui renvoie si oui ou non le premier entier est multiple du second.
 * Paramètres :
 * - IN : entier1 et entier2, où l'on vérifie si entier1 est multiple de entier2. (entiers)
 * - OUT : 1 (entier) si c'est le cas, 0 (entier) sinon.
 */
int multiple (int entier1, int entier2) {
    return (entier1 % entier2 == 0) ? 1 : 0;
}


/* Fonction Exo5 qui renvoie la moyenne de 3 notes sur 20.
 * Paramètres :
 * - IN : entier1, entier2 et entier3 dont on veut calculer la moyenne (entiers)
 * - OUT : -1 (entier) si les notes saisies sont entre 0 et 20, la moyenne des 3 notes sinon (float).
 */
float moyenne (int entier1, int entier2, int entier3) {
    if ((0 <= entier1 && entier1 <= 20) && (0 <= entier2 && entier2 <= 20) && (0 <= entier3 && entier3 <= 20))
    {
        return (float) (entier1 + entier2 + entier3) / 3;
    }
    else
    {
        return -1;
    }
}


/* Fonction qui renvoie la somme des n premiers entiers au carré.
 * Paramètres :
 * - IN : n, on calcule donc la somme des n premiers carrés. (entier)
 * - OUT : La valeur de la somme des n premiers entier naturels. (entier)
 */
int sommeCarre (int n) {
    return n * (n+1) * (2 * n + 1) / 6;
}


/* Fonction Exo7 qui renvoie la somme d'un nombre choisi d'entier.
 * Paramètres :
 * - IN : limite, c'est le nombre d'entier que la fonction va demander et sommer. (entier)
 * - OUT : La valeur de la somme de ces entiers. (entier)
 */
int sommeEntier (int limite) {
    int somme = 0;
    for(int i = 0; i < limite; i++)
    {
        somme += saisirEntier();
    }
    return somme;
}


/* Fonction Exo10 qui renvoie la moyenne d'une somme d'entier.
 * Paramètres :
 * - IN : Aucun
 * - OUT : on calcule la somme de tous les entiers que l'utilisateur saisie jusqu'a ce qu'il saisisse un entier negatif
 *         et on renvoie la moyenne de ces entiers positifs (float)
 */
float MoyenneSommeFini () {
    int somme = 0, entier = 0, nombreEntier = 0;
    do
    {
        scanf("%d", &entier);
        somme += entier;
        nombreEntier += 1;
    } while (entier >= 0);
    somme -= entier;            // On retire l'entier négatif de fin du calcule.
    nombreEntier -= 1;          // On divise par le nombre total d'entier pour obtenir une moyenne.
    return somme / nombreEntier ;
}


