/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:56:14 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 16:56:40 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_print_ptr_v2(t_count *main_data, unsigned long long ptr)
{
    if (ptr >= 16)
    {
        ft_print_ptr_v2(main_data, ptr / 16);
        ft_print_ptr_v2(main_data, ptr % 16); // Modulo für die richtige Zahl
    }
    else
    {
        if (ptr <= 9)
            ft_put_char(*main_data, ptr + '0');
        else
            ft_put_char(*main_data, ptr - 10 + 'a');
    }
}

void ft_print_ptr(t_count *main_data, unsigned long long ptr, t_flags flags)
{
    char buffer[20]; // Buffer für die gesamte Ausgabe
    int len = 0;     // Länge der Ausgabe
    unsigned long long temp = ptr;

    // Schritt 1: Konvertiere die Zahl in Hexadezimal
    if (ptr == 0)
    {
        buffer[len++] = '0';
    }
    else
    {
        while (temp > 0)
        {
            unsigned long long digit = temp % 16;
            buffer[len++] = (digit < 10) ? digit + '0' : digit - 10 + 'a';
            temp /= 16;
        }
    }

    // Schritt 2: Breite und Präzision verarbeiten
    int total_len = len + 2; // "0x" wird zur Ausgabe hinzugefügt
    if (flags.precision > len)
        total_len += (flags.precision - len);
    int padding = flags.width > total_len ? flags.width - total_len : 0;

    // Schritt 3: Ausgabe (Berücksichtige Links-/Rechtsbündigkeit)
    if (!flags.left_align && padding > 0)
    {
        while (padding--)
            ft_put_char(*main_data, ' '); // Fülle mit Leerzeichen auf
    }

    // Schritt 4: "0x" ausgeben
    write(1, "0x", 2);
    main_data->count += 2;

    // Schritt 5: Präzision (fülle mit Nullen auf)
    int zero_padding = flags.precision > len ? flags.precision - len : 0;
    while (zero_padding--)
        ft_put_char(*main_data, '0');

    // Schritt 6: Hexadezimalzahl rückwärts aus dem Buffer ausgeben
    while (len > 0)
        ft_put_char(*main_data, buffer[--len]);

    // Schritt 7: Linksauffüllen, falls Links-Bündigkeit aktiviert ist
    if (flags.left_align && padding > 0)
    {
        while (padding--)
            ft_put_char(*main_data, ' ');
    }
}
