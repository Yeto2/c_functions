/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:14 by yessemna          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:15 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    while(s[i])
    {
        if(s[i] == c)
            return ((char *)s + i);
        i++;
    }
    if(s[i] == c)
        return ((char *)s + i);
    return (0);
}