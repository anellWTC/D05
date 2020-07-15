/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anell <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:27:16 by anell             #+#    #+#             */
/*   Updated: 2020/07/15 14:51:12 by anell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while(src[i] != '\0')
	{
		dest[i] =  src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

/*int main()
{
	char str1[] = "Hello";
	char str2[] = "";
	ft_strcpy(str2,str1);
	printf("%s\n", str2);
	return(0);
}*/
