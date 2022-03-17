#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  // Déclaration des variables
  int nombre_1 = 2, nombre_2 = 3, resultat = 0, operateur_valide = 0;
  char operateur = 'X';

  // Récupération des saisies utilisateur
  printf("Bonjour et bienvenue dans Express Calculator\n\n");
  printf("Choisissez une opération mathématique à résoudre (sans espace): \n");
  printf("\t - Sous la forme [nombre1 opérateur nombre2] par exemple (2+3)\n");
  printf("\t - Opérateurs possibles [+, -, *, /]\n\n");
  printf("Insérez votre opération ici: ");

  scanf("%d %c %d", &nombre_1, &operateur, &nombre_2);

  if(operateur == '/' && nombre_2 == 0){
    printf("La division par 0 est impossible !\n");
  }
  else{
    switch(operateur){
      
      case '+':
          resultat = nombre_1 + nombre_2;
          operateur_valide = 1;
      break;
  
      case '-':
          resultat = nombre_1 - nombre_2;
          operateur_valide = 1;
      break;
      
      case '*':
          resultat = nombre_1 * nombre_2;
          operateur_valide = 1;
      break;
  
      case '/':
          resultat = nombre_1 / nombre_2;
          operateur_valide = 1;
      break;
  
      default:
          printf("Opérateur invalide !\n");
          operateur_valide = 0;
      break;
  }
    
  // Affichage de l'opération avec son résultat
  if(operateur_valide)
  printf("Le résultat est: %d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
  }
  
  return 0;
}
