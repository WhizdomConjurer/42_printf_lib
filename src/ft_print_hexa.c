/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:49:19 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 16:50:56 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_print_hexa(t_count main_data, unsigned int n, char specifier, t_flags flags)
{
    char *str;
    int len;
    char *prefix = (flags.alt_form && n != 0) ? (specifier == 'x' ? "0x" : "0X") : "";

    // Konvertiere Zahl zu Hexadezimalstring
    str = ft_itoa_base(n, specifier == 'x' ? "0123456789abcdef" : "0123456789ABCDEF");
    len = ft_strlen(str);

    // Präzision berücksichtigen (auffüllen mit Nullen)
    if (flags.precision > len)
        len = flags.precision;

    len += ft_strlen(prefix); // Berücksichtige Prefix bei Länge

    int padding = flags.width > len ? flags.width - len : 0;

    // Rechtsbündig: Leerzeichen vor Prefix und Zahl
    if (!flags.left_align && !flags.zero_fill)
    {
        int i = 0;
        while (i < padding)
        {
            write(1, " ", 1);
            i++;
        }
    }

    // Prefix ausgeben (z. B. "0x" oder "0X")
    write(1, prefix, ft_strlen(prefix));

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

    int i = 0;
    while (i < flags.precision - ft_strlen(str))
    {
        write(1, "0", 1);
        i++;
    }

    // Hexadezimalzahl ausgeben
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
