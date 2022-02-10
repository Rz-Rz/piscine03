/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:53:06 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/10 09:53:08 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find);

int compare(char *str, char *needle);

int compare(char *str, char *needle)
{
		while (*str && *needle)
		{
				if (*str != *needle)
						return (0);
				str++;
				needle++;
		}
		return (*needle == '\0');
}

char *ft_strstr(char *str, char *to_find)
{
		int i;
		
		i = 0;
		while (str[i] != '\0')
		{
				if (str[i] == to_find[0] && compare(str, to_find))
						return (str);
				i++;
		}
		return (0);

}
