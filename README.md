# Projet Bell

## Introduction
Les nombres de Bell B(n) forment une suite de nombres entiers correspondant au nombre de manières de partitionner un ensemble à n éléments distincts. 
Ce projet a pour but de calculer les nombres de Bell à l'aide de différents algorithmes. Les algorithmes implémentés dans ce projet sont :
- L'algorithme récursif
- L'algorithme de Stirling
- L'algorithme itératif

## Utilisation

Pour utiliser ce projet, vous aurez besoin d'un compilateur C. Les fichiers à compiler sont :
- `recursif.c` pour l'algorithme récursif
- `stirling.c` pour l'algorithme de Stirling
- `iteratif.c` pour l'algorithme itératif

Il suffit de compiler chacun des fichiers avec la commande `gcc nom_du_fichier.c -o nom_du_fichier` puis d'exécuter le programme avec `./nom_du_fichier`.
### Exemple d'éxécution du programme tableau
![alt text](https://github.com/SavainB/Bell/blob/master/image/tableau.png)

## Test de temps d'exécution

Nous avons également inclus un script de test de temps d'exécution pour mesurer les performances des différents algorithmes. Ce script se trouve dans le fichier `main.c` et peut être compilé et exécuté de la même manière que les autres fichiers.

## Conclusion

Ce projet a permis de mettre en évidence les avantages et les inconvénients de chaque algorithme pour le calcul des nombres de Bell. L'algorithme récursif est simple à comprendre et à implémenter, mais a des performances limitées pour des valeurs de n élevées. L'algorithme de Stirling est plus efficace en termes de temps d'exécution, mais nécessite une bonne compréhension des mathématiques pour être implémenté correctement. Enfin, l'algorithme itératif est une bonne solution pour des valeurs de n modérées, mais peut devenir inefficace pour des valeurs élevées de n.




