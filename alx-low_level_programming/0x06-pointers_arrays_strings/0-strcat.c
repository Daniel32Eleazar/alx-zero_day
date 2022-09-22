lude "main.h"
#include <stdio.h>

/**
 *  *_strcat - concatenate two strings
 *   * @dest: first string
 *    * @src: second string
 *     * Return: dest
 *      */

char *_strcat(char *dest, char *src)
{
		int a = 0, j = 0;

			while (dest[a] != '\0')
						a++;

				while (src[j] != '\0')
						{
								dest[a] = src[j];
									a++;
										j++;
											}
					dest[a] = '\0';

						return (dest);
}
cat 0-strcat.c
echo '0. strcat' > README.md
cd ..
echo 'Write a function that concatenates two strings.' > README.md
cd 0x06-pointers_arrays_strings
chmod u+x 0-strcat.c
git add .
git commit -m "my  commit"
git push

