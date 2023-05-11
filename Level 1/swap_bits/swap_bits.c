/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:36:21 by danielga          #+#    #+#             */
/*   Updated: 2023/05/10 20:01:52 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char 	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}