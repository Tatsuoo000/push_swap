/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkano <tkano@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:14:32 by tkano             #+#    #+#             */
/*   Updated: 2021/12/06 20:14:32 by tkano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	info_init(t_ft_stack **a, t_ft_stack **b, t_info **info, int argc)
{
	*info = malloc(sizeof(t_info));
	if (!info)
		return (ERROR);
	(*info)->min_value = 0;
	if (init_stack(&(*info)->ans) == ERROR)
		return (ERROR);
	(*info)->size = argc - 1;
	(*info)->median = 0;
	(*info)->a = *a;
	(*info)->b = *b;
	return (SUCCESS);
}
