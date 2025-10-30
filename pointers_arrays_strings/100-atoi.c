#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _atoi - that convert a string to an integer
 * @s: the char
 *
 * Return: Always nothing.
 */
int _atoi(char *s)
{
	int i = 0, x = 0, n = 0, stop = 0;

	if (s[0] == '\0') // Si chaîne vide alors retourner 0
	{
		return (n);
	}
	else              // Sinon on calculera n et on le retournera
	{
		while (s[i] != '\0' && stop == 0) // Tant que*'on est pas à la fin de la chaîne et que j'ai décidé qu'on arrêtait de compter alors
		{
			if (s[i] >= '0' && s[i] <= '9') // Si le character est comprit entre 0 et 9 alors
			{
				n = n * 10 - (s[i] - 48); // (n = n + (n*10)) decale la virgule à droite ce qui grandi tout (n*10), et on ajoute l'unité en enlevant le decalage ascii (- (s[i]-48)) et on décrémentente avec '-' pour stocké en négatif (éviter l'overflow)
				if (s[i + 1] < '0' || s[i + 1] > '9') // Dans le seul cas où (une fois qu'on sait qu'on a déjà compté au moins un chiffre) le prochain n'est pas un chiffre, alors je stop tout.
				{
					stop = 1;
				}
			}
			if (s[i] == '-' && n == 0) // On prend en compte les moins uniquement si on a toujours pas compter un seul chiffre
			{
				x++;
			}
			i++;
		}
		if (x % 2 == 1) // Calcul si il y a un nombre IMPAIRE de '-' (on s'en fiche des '+')
		{
			return (n); // n et pas '-n' car on a stocké en négatif depuis le début pour éviter l'overflow
		}
		else
		{
			return (-n); // '-n' et pas 'n' car on a stocké en négatif depuis le début pour éviter l'overflow
		}
	}
}
