#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * is_prime_number - returns 1 if is a prime number, else returns 0
 * @n: the number to test if is prime or not
 *
 * Return: 1 or 0
 */
int is_prime_number(int n, int i)
{
	if (n < 2)
		return (0);  // Si on test si 1 ou 0 est premier (ne le sont dans aucun cas donc return 0)
	if (n % i == 0)
		return (0);  // Diviseur trouvé pour ce nombre donc PAS premier (donc return 0)
	if (i * i > n)
		return (1);  // Si c'est un nombre permier (return 1)
	return (is_prime_number(n, i + 1)); // Teste le diviseur suivant
}

int main(void)
{
    int r;

    r = is_prime_number(1, 2);
    printf("%d\n", r);
    r = is_prime_number(1024, 2);
    printf("%d\n", r);
    r = is_prime_number(16, 2);
    printf("%d\n", r);
    r = is_prime_number(17, 2);
    printf("%d\n", r);
    r = is_prime_number(25, 2);
    printf("%d\n", r);
    r = is_prime_number(-1, 2);
    printf("%d\n", r);
    r = is_prime_number(113, 2);
    printf("%d\n", r);
    r = is_prime_number(7919, 2);
    printf("%d\n", r);
    return (0);
}
