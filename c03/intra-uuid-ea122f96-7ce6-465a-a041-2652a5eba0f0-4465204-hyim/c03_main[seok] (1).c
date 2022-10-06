#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

#include <stdio.h>
#include <string.h>

int	main()
{
	printf("|==============C03==============|\n");

	char	dest[100] = "abcd";
	char	src[100] = "abCd";
	char	dest1[100] = "abc";
	char	src1[100] = "abc";

	printf("------ex00-------\n");
	printf("strcmp\t\t:  %d\n", strcmp(dest, src));
	printf("ft_strcmp\t:  %d\n\n", ft_strcmp(dest, src));
	printf("strcmp\t\t:  %d\n", strcmp(dest1, src1));
	printf("ft_strcmp\t:  %d\n", ft_strcmp(dest1, src1));
	printf("\n------ex01-------\n");
	printf("strncmp\t\t:  %d\n", strncmp(dest, src, 2));
	printf("ft_strncmp \t:  %d\n\n", ft_strncmp(dest, src, 2));
	printf("strcmp\t\t:  %d\n", strncmp(dest, src, 3));
	printf("ft_strncmp\t:  %d\n\n", ft_strncmp(dest, src, 3));
	printf("------ex02-------\n");
	char	h[100] = "happy ";
	char	h1[100] = "happy ";
	char	c[100] = "coding";
	char	c1[100] = "coding";
	printf("strcat\t\t:  %s\n", strcat(h, c));
	printf("ft_strcat\t:  %s\n\n", ft_strcat(h1, c1));
	printf("------ex03-------\n");
	char	hi[100] = "happy ";
	char	hi1[100] = "happy ";
	char	ci[100] = "coding";
	char	ci1[100] = "coding";
	printf("strncat\t\t:  %s\n", strncat(hi, ci, 4));
	printf("ft_strncat\t:  %s\n\n", ft_strncat(hi1, ci1, 4));

	printf("------ex04-------");
	char	a[100] = "abccdefg";
	char	b[100] = "cd";
	char	d[100] = "ag";
	char	e[100] = "";
	printf("\n     문자열 일치할때\nstrstr\t\t:  %s\nft_strstr\t:  %s\n", strstr(a, b), ft_strstr(a, b));
	printf("\n   문자열 일치하지 않을 때\nstrstr\t\t:  %s\nft_strstr\t:  %s\n", strstr(a, d), ft_strstr(a, d));
	printf("\n   to_find길이가 0일때\nstrstr\t\t:  %s\nft_strstr\t:  %s\n", strstr(a, e), ft_strstr(a, e));
	printf("\n------ex05-------\n");
	char	f_dest[9] = "swimming";
	char	f_dest1[9] = "swimming";
	char	f_src[6] = "pool!";
	printf("\t복사여부 확인\n");
	printf("strlcat\t\t:  %lu\nft_strlcat\t:  %u\n", strlcat(f_dest, f_src, 5), ft_strlcat(f_dest1, f_src, 5));
	printf("원형함수\t: %s\n만든함수\t: %s\n", f_dest, f_dest1);
	char	f_dest2[16] = "swimming ";
	char	f_dest3[16] = "swimming ";
	printf("\n\t복사여부 확인\n");
	printf("strlcat\t\t:  %lu\nft_strlcat\t:  %u\n",
			strlcat(f_dest2, f_src, 15), ft_strlcat(f_dest3, f_src, 15));
	;
	printf("원형함수\t: %s\n만든함수\t: %s\n", f_dest2, f_dest3);
	printf("===============END==============[seok]\n\n");
}
