#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * helper - helps _sqrt_recursion to find square root of 'n'
 * @n: the number to find the square root
 * @i: the index
 *
 * Return: The square root of 'n' or -1
 */
int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);  // Si i est la racine carrée parfaite
	}
	if (i * i > n)
	{
		return (-1); // Si i n'est pas une racine carrée parfaite
	}
	return (helper(n, i + 1)); // Teste le nombre suivant
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root
 *
 * Return: The square root of 'n' or -1
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 0)); // Appel helper qui calcule la racine du nombre, en partant de 0 jusqu'à 'n', si 'n' = 9 alors
	                       // pour vérifier si chaque i * i == n, au début 0 * 0 = n ?, non ... 3 * 3 == n ? OUI 
}
