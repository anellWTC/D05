/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anell <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:58:15 by anell             #+#    #+#             */
/*   Updated: 2020/07/15 15:14:56 by anell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned n)
{
	int i;
	i = 0;

	while(src[i] != '\0' && (i < n))
	{
		dest[i] =  src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

