/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:26:00 by yismaili          #+#    #+#             */
/*   Updated: 2021/12/01 13:07:17 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdarg.h>
int     ft_printf(const char *str, ...);
int    ft_putchar(int c);
int   ft_putstr(char *str);
int 	ft_putnbr(int nu);
int 	ft_putpntr(unsigned long long ptr);
int 	ft_puthdmlup(unsigned int hdml);
int    ft_puthdmllow(unsigned int hdml);
int 	ft_putdcml(unsigned int num);

#endif