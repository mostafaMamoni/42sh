/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tesr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmostafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:00:44 by mmostafa          #+#    #+#             */
/*   Updated: 2020/01/12 22:05:40 by mmostafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <sys/fcntl.h>

int main(int ac, char **av)
{
	int fd = open(av[1], O_TRUNC);
	return (0);
}
