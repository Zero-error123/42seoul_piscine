/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 13:32:14 by seoh              #+#    #+#             */
/*   Updated: 2020/01/30 15:13:22 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int digit;
    int i;
    int j;

    digit = 0;
    while(dest[digit] != '\0')
    {
        digit++;
    }
    i = digit;
    j = 0;
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    return (dest);
}
