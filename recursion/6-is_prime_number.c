#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * helper - returns 1 if is a prime number, else returns 0
 * @n: the number to test if is prime or not
 * @i: the index
 *
 * Return: 1 or 0
 */
int helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);  // Si on test si 1 ou 0 est premier (ne le sont dans aucun cas donc return 0)
	}
	if (n % i == 0)
	{
		return (0);  // Diviseur trouvé pour ce nombre donc PAS premier (donc return 0)
	}
	if (i * i > n)
	{
		return (1);  // Si c'est un nombre permier (return 1)
	}
	return (helper(n, i + 1)); // Teste le diviseur suivant
}

/**
 * is_prime_number - returns 1 if is a prime number, else returns 0
 * @n: the number to test if is prime or not
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (helper(n, 2)); // On commence à 2 car rien ne sedivise par 0 et 1 divise tous les nombres connus.
						   //Donc on commence par vérifier si le nombre est divisible par 2 d'abord.
	return (0);
}
