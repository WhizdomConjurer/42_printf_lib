/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:48:53 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 16:49:04 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_print_nbr(t_count main_data, int n, t_flags flags)
{
    char *str;
    int len;
    int is_negative = n < 0;

    // Konvertiere Zahl zu String (handle negatives Vorzeichen)
    str = ft_itoa(n < 0 ? -n : n);
    len = ft_strlen(str);

    // Präzision berücksichtigen (auffüllen mit Nullen vor der Zahl)
    if (flags.precision > len)
        len = flags.precision;

    // Zusätzlicher Platz für Vorzeichen (+ oder -) oder Leerzeichen
    if (is_negative || flags.show_sign || flags.space)
        len++;

    int padding = flags.width > len ? flags.width - len : 0;

    // Rechtsbündig: Leerzeichen oder Nullen vor Vorzeichen und Zahl
    if (!flags.left_align && !flags.zero_fill)
    {
        int i = 0;
        while (i < padding)
        {
            write(1, " ", 1);
            i++;
        }
    }

    // Vorzeichen ausgeben
    if (is_negative)
        write(1, "-", 1);
    else if (flags.show_sign)
        write(1, "+", 1);
    else if (flags.space)
        write(1, " ", 1);

    // Null-Auffüllen (für Präzision oder `zero_fill`)
    if (flags.zero_fill && !flags.left_align)
    {
        int i = 0;
        while (i < padding)
        {
            write(1, "0", 1);
            i++;
        }
    }

    // Zusätzliche Nullen für Präzision
    int i = 0;
    while (i < flags.precision - ft_strlen(str))
    {
        write(1, "0", 1);
        i++;
    }

    // Zahl ausgeben
    write(1, str, ft_strlen(str));
    main_data.count += ft_strlen(str);

    // Linksbündig: Leerzeichen nach der Zahl
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
    free(str);
}
