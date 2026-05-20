/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:23:29 by pledieu           #+#    #+#             */
/*   Updated: 2025/11/06 15:58:09 by pledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_H
# define VEC2_H

typedef struct s_v2
{
	double	x;
	double	y;
}	t_v2;

t_v2	v2(double x, double y);
t_v2	v2_add(t_v2 a, t_v2 b);
t_v2	v2_sub(t_v2 a, t_v2 b);
t_v2	v2_scale(t_v2 a, double k);

#endif
