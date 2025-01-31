/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:46:38 by whi               #+#    #+#             */
/*   Updated: 2025/01/30 20:26:30 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_printstr(t_count main_data, char *str, t_flags flags)
{
    int len = str ? ft_strlen(str) : 6; // Falls str NULL ist, verwende "(null)"
    if (!str)
        str = "(null)";

    // Beschränke Länge auf Präzision, falls angegeben
    if (flags.precision >= 0 && flags.precision < len)
        len = flags.precision;

    int padding = flags.width > len ? flags.width - len : 0;

    // Rechtsbündig: Leerzeichen vor der Zeichenkette
    if (!flags.left_align)
    {
        int i = 0;
        while (i < padding)
        {
            write(1, " ", 1);
            i++;
        }
    }

    // String ausgeben
    write(1, str, len);
    main_data.count += len;

    // Linksbündig: Leerzeichen nach der Zeichenkette
    if (flags.left_align)
    {
        int i = 0;
        while (i < padding)
        {
            write(1, " ", 1);
            i++;
        }
    }

    main_data.count += padding;
}
