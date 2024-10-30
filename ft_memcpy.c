/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:56:20 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/30 19:56:20 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src,size_t n)
{
	size_t	i;
	unsigned char *destination;
	unsigned char *source;

	i= 0;
	destination = (unsigned char *) dest;
	source = (unsigned char *) src;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		destination[i] = source [i];
		i++;
	}
	return (dest);
}
int main() {
    // Test 1: Basic Functionality
    char src1[] = "Hello, World!";
    char dest1[20];
    ft_memcpy(dest1, src1, 14);
    printf("Test 1: %s\n", dest1);  // Expected: "Hello, World!"

    // Test 2: Partial Copy
    char src2[] = "Short";
    char dest2[20];
    ft_memcpy(dest2, src2, 5);
    dest2[5] = '\0';  // Null-terminate the string
    printf("Test 2: %s\n", dest2);  // Expected: "Short"

    // Test 3: Copy to Existing Data
    char src3[] = "Overwrite";
    char dest3[] = "Old Data";
    ft_memcpy(dest3, src3, 9);
    printf("Test 3: %s\n", dest3);  // Expected: "Overwrite"

    // Test 4: Zero Bytes
    char src4[] = "No Change";
    char dest4[20];
    ft_memcpy(dest4, src4, 0);
    printf("Test 4: %s\n", dest4);  // Expected: (dest4 should be unchanged)

    // Test 5: NULL Source
    char dest5[20];
    void *result5 = ft_memcpy(dest5, NULL, 5);
    printf("Test 5: %s\n", result5 == NULL ? "NULL" : "Not NULL");  // Expected: "NULL"

    // Test 6: NULL Destination
    const char src6[] = "Test";
    void *result6 = ft_memcpy(NULL, src6, 4);
    printf("Test 6: %s\n", result6 == NULL ? "NULL" : "Not NULL");  // Expected: "NULL"

    // Test 7: Overlapping Regions
    char overlap[] = "Overlap Test";
    ft_memcpy(overlap + 5, overlap, 10);
    printf("Test 7: %s\n", overlap);  // Expected: "Overlap Overlap"

    // Test 8: Large Buffer
    char src8[1000];
    char dest8[1000];
    for (int i = 0; i < 999; i++) {
        src8[i] = 'A' + (i % 26); // Fill with repeating letters A-Z
    }
    src8[999] = '\0';  // Null-terminate
    ft_memcpy(dest8, src8, 1000);
    printf("Test 8: %s\n", dest8);  // Expected: Same as src8

    return 0;
}