#include "main.h"
#include <stdio.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: the string
 *
 * Return: Always nothing.
 */
void print_rev(char *s)
{
    char str[1024]; /*Tampon temporaire de 1024 (taille du string)*/
    char *p = s; /*Pointeur pour parcourir 's' (copie de 's' vers 'p')*/
    int i = 0;

    while (*p != '\0') /*On parcourt jusqu'à sortir de la chaîne de caractère (0)*/
	{
		p++;
	}
    p--; /*On revient donc au caractère juste avant la sortie de la chaîne (avant '\0')*/

    while (p >= s)
    {
        str[i] = *p; /*Par exemple str[0] = character que donne '*p'*/
        i++;
        p--;
    }

	/*A ce moment de sortir de la boucle while au dessus, str[i] est une fois après le dernier character ajouté, puisqu'il y
	 * a eu une dernière incrémentation de 'i' dans la boucle avant que 'p' ne dépasse la condition pour la prochaine boucle
	 */
    str[i] = '\0'; /*Terminer la nouvelle chaîne (enlever le tampon de 1024 et préciser la nouvelle sortie de chaîne)*/

    printf("%s\n", str);
}
