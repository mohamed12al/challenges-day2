
#include <stdio.h>
#include <string.h>

int main() {
    char nom[50];
    int notes[5];
    int total = 0;
    int max, min;
    int reussies = 0, pas_reussies = 0;
    int has100 = 0;
    float moyenne;

    printf("   Gestion des notes\n");

    printf("Nom de l'étudiant : ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = '\0';

    printf("\n");
    for (int i = 0; i < 5; i++) {
        do {
            printf(" la note %d : ", i + 1);
            scanf("%d", &notes[i]);
            if (notes[i] < 0 || notes[i] > 100) {
                printf(" La note 0 et 100.\n");
            }
        } while (notes[i] < 0 || notes[i] > 100);

      if (notes[i] == 100) {
            has100 = 1;
        }

        if (notes[i] >= 50) {
            reussies++;
        } else {
            Pas_reussies++
        }
        total += notes[i];
    }
    moyenne = (float)total / 5;

    max = min = notes[0];
    for (int i = 1; i < 5; i++) {
        if (notes[i] > max) max = notes[i];
        if (notes[i] < min) min = notes[i];
    }

    char mention[20];
    char lettre_mention;
    if (moyenne >= 90) {
        strcpy(mention, "A (Excellent)");
        lettre_mention = 'A';
    } else if (moyenne >= 80) {
        strcpy(mention, "B (TRES BIEN)");
        lettre_mention = 'B';
    } else if (moyenne >= 70) {
        strcpy(mention, "C (Bien)");
        lettre_mention = 'C';
    } else if (moyenne >= 60) {
        strcpy(mention, "D (Satisfaisant)");
        lettre_mention = 'D';
    } else {
        strcpy(mention, "F (Échec)");
        lettre_mention = 'F';
    }
    int resultat_final = (moyenne >= 50 && echouees <= 2);
    printf("\n\n");
    printf("RAPPORT FINAL\n");
    printf("Nom : %s\n\n", nom);
    printf("Notes saises :\n");
    for (int i = 0; i < 5; i++) {
        printf("- Matière %d : %d\n", i + 1, notes[i]);
