#include <stdio.h>

/*EXERCICE 1 TP 3
int main() {
    int a = 0,
            b = 0;
    printf("Choisissez un entier : \n>");
    scanf("%d", &a);
    printf("Choisissez un deuxieme entier : \n>");
    scanf(" %d", &b);
    if ( a==b ) {
        printf ("Les deux entiers sont egaux. \n");
    }
    if (a < b) {
        printf("L'entier le plus grand est %d: \n>",b);
    }
    else {
        printf("L'entier le plus grand est %d : \n>", a);
    }
    return 0;
}*/

/*Exercice 2 TP 3

int main(){
    int largeur = 0,
        longueur = 0,
        perimetre =0,
        aire =0;
    printf("Entrez la longueur du rectangle : %d\n", longueur);
    scanf("%d",&longueur);
    printf("Entrez la largeur du rectangle : %d\n", largeur);
    scanf("%d",&largeur);
    aire = largeur*longueur;
    perimetre = (largeur+longueur)*2;
    printf("Le perimetre du rectangle est :%d\n",perimetre);
    printf("L'air du rectangle est : %d\n", aire);
    return 0;
}*/

/*Exercice 3 : TP 3

int main() {
    int n = 0;
    printf("Saisissez un entier : \n>");
    scanf("%d", &n);
    if (n == 10) {
        printf("L'entier %d n'est pas un multiple de 3 car il est egal a 10", n);
    }
    if (n < 10) {
        if (n % 3 == 0) {
            printf("L'entier %d est un mutiple de 3 et est inferieur a 10",n);
        } else {
            printf("L'entier %d n'est pas un multiple de 3 et est inferieur a 10", n);
        }
    }
    if (n > 10) {
        if (n % 3 == 0) {
            printf("L'entier %d est un mutiple de 3 et est superieur a 10",n);
        } else {
            printf("L'entier %d n'est pas un multiple de 3 et est superieur a 10", n);
        }
    }
    return 0;
}*/

/*Exercice 4 TP 3

int main(){
    int age=0;
    int i=0;
    printf("Veuillez entrer votre age : \n");
    scanf("%d",&age);
    if ( age <= 27 && age > 17 ) {
        printf("Etes vous etudiant ?\n Si oui tapez 1, sinon tapez 0.\n");
        scanf(" %d", &i);
        if (i == 1) {
            printf("Vous benificiez du tarif etudiant : 6 euros.\n");
        } else if (i==0) {
            printf("Vous ne beneficiez pas de reduction : 9 euros.\n");
        }
    }
    else if (age >= 0 && age < 12) {
            printf("Vous benificiez du tarif enfant : 4 euros.\n ");
        }
    else if (age >= 65) {
            printf("Vous beneficiez du tarif senior : 6 euros.\n");
        }
    else if (age >= 12 && age <= 17) {
            printf("Vous beneficier du tarif jeune :6 euros. \n");
        }
    else {
            printf("Vous ne beneficiez pas de reduction : 9 euros. \n");
        }

    return 0;
}*/

/*Exercie 5 TP 3

int main(){
    int i =0;
    printf("Veuillez choisir le numero de la boisson :\n");
    scanf("%d",&i);
    if ( i!= 1 && i!=2 && i!=3 && i!=9 && i!=10){
        printf("Erreur");
    }
    switch(i){
        case 1 : {
            printf("Fanta\n");
            break;
        }
        case 2 : {
            printf("Oasis\n");
            break;
        }
        case 3 : {
            printf("Coca\n");
            break;
        }
        case 9 : {
            printf("Cafe\n");
            break;
        }
        case 10 : {
            printf("The\n");
            break;
        }
    }
    return 0;
}*/

/*Exercice 6 : TP3

int main (){
    float a=0,
          b=0,
          c=0,
          moyenne=0;
    printf("Veuillez rentrer la premiere note :\n");  //printf("Veuillez rentrer 3 notes :\n")
    scanf("%f",&a);                                    //scanf("%f\n %f\n %f\n",&a,&b,&c); (idee pour aller plus vite mais ne fonctionne pas)
    printf("Veuillez rentrer la deuxieme note :\n");
    scanf("%f",&b);
    printf("Veuillez rentrer la troisieme note :\n");
    scanf("%f",&c);
    if (a<0 || a>20) {
        printf("Veuillez modifier la première note:\n");
        scanf("%f", &a);
    }
    else if (b<0 || b>20) {
        printf("Veuillez modifier la deuxieme note:\n");
        scanf("%f", &b);
    }
    else if (c<0 || c>20) {
        printf("Veuillez modifier la troisieme note:\n");
        scanf("%f", &c);
    }
    moyenne = ((a+b+c)/3);
    printf("La moyenne vaut %f",moyenne);
    return 0;
}*/

/*Exercice 7 : TP3

int main(){
    int i = 0,
        classe = 0,
        nbrEleve = 0,
        nbrEleveTotal=0;
    printf("Quelle est le nombre de classe: \n");
    scanf("%d",&classe);
    for (i=1;i<=classe;i++){
        printf("Combien la classe n %d a-t-elle d'eleve ?\n",i);
        scanf("%d",&nbrEleve);
        nbrEleveTotal = nbrEleveTotal + nbrEleve;
    }
    printf("Le nombre d'eleves totale est : %d\n",nbrEleveTotal);
    return 0;
}*/

/*Exercice 8 : TP3

int main(){
    int i = 0;
    printf("Rentrer un entier :\n");
    scanf("%d",&i);
    while ( !(i % 2 ==0 && i % 7 ==0)){
        printf("Rentrer un nouvel entier:\n");
        scanf("%d",&i);
    }
    printf("L'entier selectionne est un multiple de 2 et de 7\n");
    return 0;
}*/

/* Exercice 9 : TP3

int main(){
    int somme = 0,
        etage=0,
        pierresInitiales = 0;
    printf("Combien de pierre avez vous ?\n");
    scanf("%d",&pierresInitiales);
    while(pierresInitiales>=somme){
        etage=etage+1;
        somme=(etage*(etage+1)*(2*etage+1))/6;
    }
    printf("Le nombre d'etage est :%d",etage-1);
    return 0;
}*/



/* Exercice 10 : TP3 

int main(){
  int entier = 0,
      i = 0;
  float moyenne = 0,
        somme = 0;
  while(entier >= 0 ){
      printf("Saisissez un nombre :\n (Pour arreter la saisie rentrer un nombre negatif)\n");
      scanf("%d",&entier);
      if (entier>=0){
          somme=somme+entier;
          i++;
      }
  }
  moyenne=somme/i;
  printf("La moyenne est %f.\n",moyenne);
  return 0;
}
*/