
#include <string.h>
#include <stdio.h>
#include "RENDU-libft/libft.h"
#include <ctype.h>

char	for_mapi(unsigned int n, char c)
{
	printf("hello");
	n = 2;
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

void			lstdelone_f(void *d) {
	free(d);
}

void			lstiter_f(void *content) {
	char *s = content;
	int i = 0;

	while (s[i])
	{
		s[i] = s[i] - 32;
		i++;
	}
}

void *		lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}

int	main(void)
{
	printf("\n------------------");
	printf("\n-------PART 1------");
	printf("\n------------------\n\n");


	printf("\n---------MEMSET---------\n");
	printf(" - TEST 1 - \n");
	char memset1[50] = "test";
	char memset2[50] = "test";
	printf("vraie: %s\n", memset(memset1, 'A', 6));
	printf("moi  : %s\n", ft_memset(memset2, 'A', 6));

	printf(" - TEST 2 - \n");
	char memset3[50] = "test";
	char memset4[50] = "test";
	printf("vraie: %s\n", memset(memset3, '\t', 1));
	printf("moi  : %s\n", ft_memset(memset4, '\t', 1));

	printf(" - TEST 3 - \n");
	char memset5[50] = "test";
	char memset6[50] = "test";
	printf("vraie: %s\n", memset(memset5, '.', 20));
	printf("moi  : %s\n", ft_memset(memset6, '.', 20));



	printf("\n---------BZERO---------\n");
	printf(" - TEST 1 - \n");
	char bzero1[50] = "test";
	char bzero2[50] = "test";
	bzero(bzero1, 6);
	ft_bzero(bzero2, 6);
	printf("vraie: %s\n", bzero1);
	printf("moi  : %s\n", bzero2);

	printf(" - TEST 2 - \n");
	char bzero3[50] = "test";
	char bzero4[50] = "test";
	bzero(bzero3, 1);
	ft_bzero(bzero4, 1);
	printf("vraie: %s\n", bzero3);
	printf("moi  : %s\n", bzero4);

	printf(" - TEST 3 - \n");
	char bzero5[50] = "";
	char bzero6[50] = "";
	bzero(bzero5, 49);
	ft_bzero(bzero6, 49);
	printf("vraie: %s\n", bzero5);
	printf("moi  : %s\n", bzero6);



	printf("\n\n---------MEMCPY---------\n");
	printf(" - TEST 1 - \n");
	char *srcmemcpy1 = "This is an example";
	char *dstmemcpy1 = NULL;
	int lmemcpy1 = sizeof(char) * 10;
	dstmemcpy1 = (char*) malloc(lmemcpy1);
	if (memcpy(dstmemcpy1 + 2 , srcmemcpy1, lmemcpy1) == ft_memcpy(dstmemcpy1 + 2 , srcmemcpy1, lmemcpy1))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %s\n", (memcpy(dstmemcpy1 + 2 , srcmemcpy1, lmemcpy1)));
		printf("moi : %s\n", (ft_memcpy(dstmemcpy1 + 2 , srcmemcpy1, lmemcpy1)));
	}
	free(dstmemcpy1);

	printf(" - TEST 2 - \n");
	char *srcmemcpy2 = "plouf";
	char *dstmemcpy2 = "exemple de test lalalalallalalalal";
	int lmemcpy2 = sizeof(char) * 10;
	dstmemcpy2 = (char*) malloc(lmemcpy2);
	if (memcpy(dstmemcpy2 + 10 , srcmemcpy2, lmemcpy2) == ft_memcpy(dstmemcpy2 + 10 , srcmemcpy2, lmemcpy2))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %s\n", (memcpy(dstmemcpy2 + 10 , srcmemcpy2, lmemcpy2)));
		printf("moi : %s\n", (ft_memcpy(dstmemcpy2 + 10 , srcmemcpy2, lmemcpy2)));
	}
	free(dstmemcpy2);

	printf(" - TEST 3 - \n");
	char *srcmemcpy3 = "p";
	char *dstmemcpy3 = "e";
	int lmemcpy3 = sizeof(char) * 10;
	dstmemcpy3 = (char*) malloc(lmemcpy3);
	if (memcpy(dstmemcpy3 + 100 , srcmemcpy3, lmemcpy3) == ft_memcpy(dstmemcpy3 + 100 , srcmemcpy3, lmemcpy3))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %s\n", (memcpy(dstmemcpy3 + 100 , srcmemcpy3, lmemcpy3)));
		printf("moi : %s\n", (ft_memcpy(dstmemcpy3 + 100 , srcmemcpy3, lmemcpy3)));
	}
	free(dstmemcpy3);



	printf("\n\n---------MEMCCPY---------\n");
	printf(" - TEST 1 - \n");
	char *memccpy1 = "alice";
	char buff1[22];
	char *r1 = memccpy(buff1, memccpy1, 'z', 22);
	char *r2 = ft_memccpy(buff1, memccpy1, 'z', 22);
	if (r1 == r2)
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie:%s\n", r1);
		printf("moi:%s\n", r2);
	}

	printf(" - TEST 2 - \n");
	r1 = memccpy("", memccpy1, 'm', 0);
	r2 = ft_memccpy("", memccpy1, 'm', 0);
	if (r1 == r2)
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie:%s\n", r1);
		printf("moi:%s\n", r2);
	}

	printf(" - TEST 3 - \n");
	char buff3[] = "abcdefghijklmnopqrstuvwxyz";
	char buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char *memccpy2 = "string with\200inside !";
	memccpy(buff3, memccpy2, '\200', 21);
	ft_memccpy(buff2, memccpy2, '\200', 21);
	printf("vraie:%s\n", buff3);
	printf("moi:%s\n", buff2);



	printf("\n\n---------MEMMOVE---------\n");
	printf(" - TEST 1 - \n");
	char memmove1[] = "bonsoir a tous";
	char memmove2[] = "bonsoir a tous";
	memmove(memmove1, memmove1 + 1, 4);
	ft_memmove(memmove2, memmove2 + 1, 4);
	printf("vraie: %s\n", memmove1);
	printf("moi  : %s\n", memmove2);

	printf(" - TEST 2 - \n");
	char memmove3[50] = "b";
	char memmove4[50] = "b";
	memmove(memmove3, memmove3 + 6, 2);
	ft_memmove(memmove4, memmove4 + 6, 2);
	printf("vraie: %s\n", memmove3);
	printf("moi  : %s\n", memmove4);

	printf(" - TEST 3 - \n");
	char memmove7[50] = "bo";
	char memmove8[50] = "bo";
	memmove(memmove7, memmove7 + 1, 2);
	ft_memmove(memmove8, memmove8 + 1, 2);
	printf("vraie: %s\n", memmove7);
	printf("moi  : %s\n", memmove8);

	printf(" - TEST 4 - \n");
	char memmove5[] = "baobab arbre ";
	char memmove6[] = "baobab arbre ";
	memmove(memmove5, memmove5 + 4, 13);
	ft_memmove(memmove6, memmove6 + 4, 13);
	printf("vraie: %s\n", memmove5);
	printf("moi  : %s\n", memmove6);



	printf("\n\n---------MEMCHR---------\n");
	printf(" - TEST 1 - \n");
	char *memchr1 = "/|\x12\0\xff\x09\x42\042\0\42|\\";
	int size = 10;
	if ((memchr(memchr1, '\0', size)) ==  (ft_memchr(memchr1, '\0', size)))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie:%s\n", memchr(memchr1, '\0', size));
		printf("moi:%s\n", ft_memchr(memchr1, '\0', size));
	}

	printf(" - TEST 2 - \n");
	char *memchr2= "bonsoir a tous";
	int size2 = 2;
	if ((memchr(memchr2, 'n', size2)) ==  (ft_memchr(memchr2, 'n', size2)))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie:%s\n", memchr(memchr2, 'n', size2));
		printf("moi:%s\n", ft_memchr(memchr2, 'n', size2));
	}

	printf(" - TEST 3 - \n");
	char *memchr3= "bonsoir a tous";
	size2 = 13;
	if ((memchr(memchr3, 'z', size2)) ==  (ft_memchr(memchr3, 'z', size2)))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie:%s\n", memchr(memchr3, 'z', size2));
		printf("moi:%s\n", ft_memchr(memchr3, 'z', size2));
	}



	printf("\n\n---------MEMCMP---------\n");
	printf(" - TEST 1 - \n");
	int memcmp1 [] = { 5, 86, 13 };
	int memcmp2 [] = { 55, 86, 13 };
	if (memcmp(memcmp1, memcmp2, (sizeof(int) * 3)) == ft_memcmp(memcmp1, memcmp2, (sizeof(int) * 3)))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("moi : %d\n", ft_memcmp(memcmp1, memcmp2, (sizeof(int) * 3)));
		printf("vraie : %d\n", memcmp(memcmp1, memcmp2, (sizeof(int) * 3)));
	}

	printf(" - TEST 2 - \n");
	char memcmp3 [] = "alice";
	char memcmp4 [] = "alice";
	if (ft_memcmp(memcmp3, memcmp4, (sizeof(char) * 5)) == ft_memcmp(memcmp3, memcmp4, (sizeof(char) * 5)))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("moi : %d\n", ft_memcmp(memcmp3, memcmp4, (sizeof(char) * 5)));
		printf("vraie : %d\n", memcmp(memcmp3, memcmp4, (sizeof(char) * 5)));
	}



	printf("\n---------STRLEN---------\n");
	printf(" - TEST 1 - \n");
	char *strlen_test1 = "alice";
	if ((strlen(strlen_test1)) == ft_strlen(strlen_test1))
		printf("OK\n");
	else 
	{
		printf("NOK ! results : \n");
		printf("vraie : %lu\n", strlen(strlen_test1));
		printf("moi : %zu\n", ft_strlen(strlen_test1));
		printf("input : %s\n", strlen_test1);
	}

	printf(" - TEST 2 - \n");
	if ((strlen("")) == ft_strlen(""))
		printf("OK\n");
	else 
	{
		printf("NOK ! results : \n");
		printf("vraie : %lu\n", strlen(""));
		printf("moi : %zu\n", ft_strlen(""));
		printf("input : %s\n "" ", "");
	}

	printf(" - TEST 3 - \n");
	char *strlen_test3 = "    ";
	if ((strlen(strlen_test3)) == ft_strlen(strlen_test3))
		printf("OK\n");
	else 
	{
		printf("NOK ! results : \n");
		printf("vraie : %lu\n", strlen(strlen_test3));
		printf("moi : %zu\n", ft_strlen(strlen_test3));
		printf("input : %s\n", strlen_test3);
	}

	printf(" - TEST 4 - \n");
	char *strlen_test4 = "\n\t\v";
	if ((strlen(strlen_test4)) == ft_strlen(strlen_test4))
		printf("OK\n");
	else 
	{
		printf("NOK ! results : \n");
		printf("vraie : %lu\n", strlen(strlen_test4));
		printf("moi : %zu\n", ft_strlen(strlen_test4));
		printf("input : %s\n", strlen_test4);
	}



	printf("\n\n---------ISALPHA---------\n");
	printf(" - TEST GLOBAL - \n");
	int test_alpha = -5;
	while(test_alpha <= 256)
	{
		if ((isalpha(test_alpha) - ft_isalpha(test_alpha)) == 0)
			printf("OK  ");
		else
			printf("%d, NOOOOOOOOOOOOK", test_alpha);
		test_alpha++;
	}



	printf("\n---------ISDIGIT---------\n");
	printf(" - TEST GLOBAL - \n");
	int test_digit = -5;
	while(test_digit <= 256)
	{
		if ((isdigit(test_digit) - ft_isdigit(test_digit)) == 0)
			printf("OK  ");
		else
			printf("%d, NOOOOOOOOOOOOK", test_digit);
		test_digit++;
	}



	printf("\n---------ISALNUM---------\n");
	printf(" - TEST GLOBAL - \n");
	int test_alnum = -5;
	while(test_alnum <= 256)
	{
		if ((isalnum(test_alnum) - ft_isalnum(test_alnum)) == 0)
			printf("OK  ");
		else
			printf("%d, NOOOOOOOOOOOOK", test_alnum);
		test_alnum++;
	}



	printf("\n\n---------ISASCII---------\n");
	printf(" - TEST GLOBAL - \n");
	int test_ascii = -5;
	while(test_ascii <= 256)
	{
		if ((isascii(test_ascii) - ft_isascii(test_ascii)) == 0)
			printf("OK  ");
		else
			printf("%d, NOOOOOOOOOOOOK", test_ascii);
		test_ascii++;
	}



	printf("\n\n---------ISPRINT---------\n");
	printf(" - TEST GLOBAL - \n");
	int test_print = -5;
	while(test_print <= 256)
	{
		if ((isprint(test_print) - ft_isprint(test_print)) == 0)
			printf("OK  ");
		else
			printf("%d, NOOOOOOOOOOOOK", test_print);
		test_print++;
	}



	printf("\n\n---------TOUPPER---------\n");
	printf(" - TEST GLOBAL - \n");
	int ttu = -5;
	while (ttu < 260)
	{
		if ((toupper(ttu) - ft_toupper(ttu)) == 0)
			printf("OK   ");
		else
			printf("%d, NOOOOOOOK", ttu);
		ttu++;
	}



	printf("\n\n---------TOLOWER---------\n");
	printf(" - TEST GLOBAL - \n");
	int ttl = -5;
	while (ttl < 260)
	{
		if ((tolower(ttl) - ft_tolower(ttl)) == 0)
			printf("OK   ");
		else
			printf("%d, NOOOOOOOK", ttl);
		ttl++;
	}


	printf("\n\n---------STRCHR---------\n");
	printf(" - TEST 1 - \n");
	char *srcchr1 = "there are so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	if (strchr(srcchr1, '\0') == ft_strchr(srcchr1, '\0'))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie:%s\n", strchr(srcchr1, '\0'));
		printf("moi:%s\n", ft_strchr(srcchr1, '\0'));
	}

	printf(" - TEST 2 - \n");
	char *srcchr2 = "bonsoir a tous";
	if (strchr(srcchr2, 'z') == ft_strchr(srcchr2, 'z'))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie:%s\n", strchr(srcchr2, 'z'));
		printf("moi:%s\n", ft_strchr(srcchr2, 'z'));
	}

	printf(" - TEST 3 - \n");
	char *srcchr3 = "";
	if (strchr(srcchr3, 'z') == ft_strchr(srcchr3, 'z'))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie:%s\n", strchr(srcchr3, 'z'));
		printf("moi:%s\n", ft_strchr(srcchr3, 'z'));
	}



	printf("\n\n---------STRRCHR---------\n");
	printf(" - TEST 1 - \n");
	int crchr1 = -5;
	char *rchr1 = "Apprendre à programmer en C/C++";
	while(crchr1 <= 256)
	{
		if ( (strrchr(rchr1, crchr1)) ==  (ft_strrchr(rchr1, crchr1 )))
			printf("OK   ");
		else
		{
			printf("NOOOOOOOOOOOK\n");
			printf("vraie : %s\n", strrchr(rchr1, crchr1 ));
			printf("moi : %s\n", ft_strrchr(rchr1, crchr1));
			printf("n : %d\n\n", crchr1);
		}
		crchr1++;
	}

	printf("\n - TEST 2 - \n");
	int crchr2 = 0;
	char *rchr2 = "bonsoir a tous";
	if ( (strrchr(rchr2, crchr2)) ==  (ft_strrchr(rchr2, crchr2 )))
		printf("OK\n");
	else
	{
		printf("NOOOOOOOOOOOK\n");
		printf("vraie : %s\n", strrchr(rchr2, crchr2));
		printf("moi : %s\n", ft_strrchr(rchr2, crchr2));
		printf("n : %d\n\n", crchr2);
	}



	printf("\n\n---------STRNCMP---------\n");
	printf(" - TEST 1 - \n");
	char ncmp1[] = "alice";
	char ncmp2[] = "ali";
	int nncmp1 = 4;
	if (strncmp(ncmp1, ncmp2, nncmp1) == ft_strncmp(ncmp1, ncmp2, nncmp1))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %d\n", strncmp(ncmp1, ncmp2, nncmp1));
		printf("moi : %d\n", ft_strncmp(ncmp1, ncmp2, nncmp1));
	}

	printf(" - TEST 2 - \n");
	char ncmp3[] = "alice";
	char ncmp4[] = "alice";
	int nncmp2 = 5;
	if (strncmp(ncmp3, ncmp4, nncmp2) == ft_strncmp(ncmp3, ncmp4, nncmp2))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %d\n", strncmp(ncmp3, ncmp4, nncmp2));
		printf("moi : %d\n", ft_strncmp(ncmp3, ncmp4, nncmp2));
	}

	printf(" - TEST 3 - \n");
	char ncmp5[] = "alicem";
	char ncmp6[] = "alice";
	int nncmp3 = 1;
	if (strncmp(ncmp5, ncmp6, nncmp3) == ft_strncmp(ncmp5, ncmp6, nncmp3))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %d\n", strncmp(ncmp5, ncmp6, nncmp3));
		printf("moi : %d\n", ft_strncmp(ncmp5, ncmp6, nncmp3));
	}


	printf("\n\n---------STRLCPY---------\n");
	printf(" - TEST 1 - \n");
	char dstcpy1[] = "alice";
	char srccpy1[] = "";
	char dstcpy2[] = "alice";
	char srccpy2[] = "";
	int ncpy1 = 5;
	if (strlcpy(dstcpy1, srccpy1, ncpy1) == ft_strlcpy(dstcpy2, srccpy2, ncpy1))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %lu\n", strlcpy(dstcpy1, srccpy1, ncpy1));
		printf("moi : %zu\n", ft_strlcpy(dstcpy2, srccpy2, ncpy1));
	}

	printf(" - TEST 2 - \n");
	char dstcpy3[] = "alice";
	char srccpy3[] = "montaut";
	char dstcpy4[] = "alice";
	char srccpy4[] = "montaut";
	int ncpy2 = 5;
	if (strlcpy(dstcpy3, srccpy3, ncpy2) == ft_strlcpy(dstcpy4, srccpy4, ncpy2))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %lu\n", strlcpy(dstcpy3, srccpy3, ncpy2));
		printf("moi : %zu\n", ft_strlcpy(dstcpy4, srccpy4, ncpy2));
	}

	printf(" - TEST 3 - \n");
	char dstcpy5[] = "";
	char srccpy5[] = "montaut";
	char dstcpy6[] = "";
	char srccpy6[] = "montaut";
	int ncpy3 = 0;
	if (strlcpy(dstcpy5, srccpy5, ncpy3) == ft_strlcpy(dstcpy6, srccpy6, ncpy3))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %lu\n", strlcpy(dstcpy5, srccpy5, ncpy3));
		printf("moi : %zu\n", ft_strlcpy(dstcpy6, srccpy6, ncpy3));
	}



	printf("\n\n---------STRLCAT---------\n");
	printf(" - TEST 1 - \n");
	char dstcat1[] = "alice";
	char srccat1[] = "";
	char dstcat2[] = "alice";
	char srccat2[] = "";
	int ncat1 = 5;
	if (strlcat(dstcat1, srccat1, ncat1) == ft_strlcat(dstcat2, srccat2, ncat1))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %lu\n", strlcat(dstcat1, srccat1, ncat1));
		printf("moi : %zu\n", ft_strlcat(dstcat2, srccat2, ncat1));
	}

	printf(" - TEST 2 - \n");
	char dstcat3[] = "alice";
	char srccat3[] = "montaut";
	char dstcat4[] = "alice";
	char srccat4[] = "montaut";
	int ncat2 = 5;
	if (strlcat(dstcat3, srccat3, ncat2) == ft_strlcat(dstcat4, srccat4, ncat2))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %lu\n", strlcat(dstcat3, srccat3, ncat2));
		printf("moi : %zu\n", ft_strlcat(dstcat4, srccat4, ncat2));
	}

	printf(" - TEST 3 - \n");
	char dstcat5[] = "";
	char srccat5[] = "montaut";
	char dstcat6[] = "";
	char srccat6[] = "montaut";
	int ncat3 = 0;
	if (strlcat(dstcat5, srccat5, ncat3) == ft_strlcat(dstcat6, srccat6, ncat3))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("vraie : %lu\n", strlcat(dstcat5, srccat5, ncat3));
		printf("moi : %zu\n", ft_strlcat(dstcat6, srccat6, ncat3));
	}



	printf("\n\n---------STRNSTR---------\n");
	printf(" - TEST 1 - \n");
	char big1[] = "hello world in c";
	char small1[] = "wor";
	int nnstr1 = -5;
	while(nnstr1 <= 20)
	{
		if (strnstr(big1, small1, nnstr1) == ft_strnstr(big1, small1, nnstr1))
			printf("OK   ");
		else
		{
			printf("NOOOOOOOOOOOOOOK\n");
			printf("vraie : %s\n", strnstr(big1, small1, nnstr1));
			printf("moi : %s\n", ft_strnstr(big1, small1, nnstr1));
			printf("n : %d\n\n", nnstr1);
		}
		nnstr1++;
	}



	printf("\n---------ATOI---------\n");
	printf(" - TEST 1 - \n");
	char *atoi_test1 = "    -12a2";
	if ((atoi(atoi_test1)) == ft_atoi(atoi_test1))
		printf("OK\n");
	else 
	{
		printf("NOK ! results : \n");
		printf("vraie : %d\n", atoi(atoi_test1));
		printf("moi : %d\n", ft_atoi(atoi_test1));
		printf("input : %s\n", atoi_test1);
	}

	printf(" - TEST 2 - \n");
	char *atoi_test2 = " 	   --123";
	if ((atoi(atoi_test2)) == ft_atoi(atoi_test2))
		printf("OK\n");
	else 
	{
		printf("NOK ! results : \n");
		printf("vraie : %d\n", atoi(atoi_test2));
		printf("moi : %d\n", ft_atoi(atoi_test2));
		printf("input : %s\n", atoi_test2);
	}

	printf(" - TEST 3 - \n");
	char *atoi_test3 = "		   + 45=i5";
	if ((atoi(atoi_test3)) == ft_atoi(atoi_test3))
		printf("OK\n");
	else 
	{
		printf("NOK ! results : \n");
		printf("vraie : %d\n", atoi(atoi_test3));
		printf("moi : %d\n", ft_atoi(atoi_test3));
		printf("input : %s\n", atoi_test3);
	}



	printf("\n---------CALLOC---------\n");
	printf(" - TEST 1 - \n");
	int calloc1 = 12;
	int calloc2 = 12;
	printf("vraie : %s\n", calloc(calloc1, calloc2));
	printf("moi : %s\n", ft_calloc(calloc1, calloc2));
	printf("input : %d, %d\n", calloc1, calloc2);

	printf(" - TEST 2 - \n");
	int calloc3 = 0;
	int calloc4 = 0;
	printf("vraie : %s\n", calloc(calloc3, calloc4));
	printf("moi : %s\n", ft_calloc(calloc3, calloc4));
	printf("input : %d, %d\n", calloc3, calloc4);




	printf("\n\n---------STRDUP---------\n");
	printf(" - TEST 1 - \n");
	char dup1[] = "alice";
	printf("vraie: %s\n", strdup(dup1));
	printf("moi: %s\n", ft_strdup(dup1));

	printf(" - TEST 2 - \n");
	char dup2[] = "";
	printf("vraie: %s\n", strdup(dup2));
	printf("moi: %s\n", ft_strdup(dup2));

	printf(" - TEST 3 - \n");
	char dup3[] = "anticonstitutionnellement";
	printf("vraie: %s\n", strdup(dup3));
	printf("moi: %s\n", ft_strdup(dup3));





	printf("\n\n\n------------------");
	printf("\n-------PART 2------");
	printf("\n------------------\n");


	printf("\n\n---------SUBSTR---------\n");
	printf(" - TEST 1 - \n");
	char subs1[] = "01234";
	printf("|%s| est copie a partir du %deme char pendant %d char. RES: |%s|\n", subs1, 10, 10, ft_substr(subs1, 10, 10));

	printf(" - TEST 2 - \n");
	char subs2[] = "";
	printf("|%s| est copie a partir du %deme char pendant %d char. RES: |%s|\n", subs2, 1, 10, ft_substr(subs2, 1, 10));

	printf(" - TEST 3 - \n");
	char subs3[] = "bonsoir a tous";
	printf("|%s| est copie a partir du %deme char pendant %d char. RES: |%s|\n", subs3, 3, 10, ft_substr(subs3, 3, 10));



	printf("\n\n---------JOIN---------\n");
	printf(" - TEST 1 - \n");
	char *join1 = "alice";
	char *join2 = "42";
	printf("%s + %s donnent : %s\n", join1, join2, ft_strjoin(join1, join2));

	printf(" - TEST 2 - \n");
	char *join3 = "";
	char *join4 = "42";
	printf("%s + %s donnent : %s\n", join3, join4, ft_strjoin(join3, join4));

	printf(" - TEST 3 - \n");
	char *join5 = "";
	char *join6 = "\0";
	printf("%s + %s donnent : %s\n", join5, join6, ft_strjoin(join5, join6));



	printf("\n\n---------STRTRIM---------\n");
	printf(" - TEST 1 - \n");
	char settrim1 [] = "     ";
	char trim1[] = "\0";
	printf("|%s| est trime avec le set |%s|. res: |%s|\n", trim1, settrim1, ft_strtrim(trim1, settrim1));

	printf(" - TEST 2 - \n");
	char settrim2 [] = "bousa";
	char trim2[] = "bonsoir a tous";
	printf("|%s| est trime avec le set |%s|. res: |%s|\n", trim2, settrim2, ft_strtrim(trim2, settrim2));

printf(" - TEST 3 - \n");
	char settrim3 [] = "123";
	char trim3[] = "1223LoremIpsum!111223";
	printf("|%s| est trime avec le set |%s|. res: |%s|\n", trim3, settrim3, ft_strtrim(trim3, settrim3));

printf(" - TEST 4 - \n");
	char settrim4 [] = "z";
	char trim4[] = "     ";
	printf("|%s| est trime avec le set |%s|. res: |%s|\n", trim4, settrim4, ft_strtrim(trim4, settrim4));



	printf("\n\n---------SPLIT---------\n");
	printf(" - TEST 1 - \n");
	char **split1;
	split1 = ft_split("coucoujesuisTunTpetitTblagueur.", 'T');
	int i = 0;
	printf("chaine a couper : %s et char qui coupe : %c\n", "coucoujesuisTunTpetitTblagueur.", 'T');
	while (i < 4)
		printf("res :%s\n", split1[i++]);

	printf(" - TEST 2 - \n");
	char **split2;
	split2 = ft_split("	", '	');
	i = 0;
	printf("chaine a couper : %s et char qui coupe : %c\n", "	 (cest un tab)", '	');
	while (i < 4)
		printf("res :%s\n", split2[i++]);

	printf(" - TEST 3 - \n");
	char **split3;
	split3 = ft_split("bonsoir a tous", 'z');
	i = 0;
	printf("chaine a couper : %s et char qui coupe : %c\n", "bonsoir a tous", 'z');
	while (i < 1)
		printf("res :%s\n", split3[i++]);



	printf("\n\n---------ITOA---------\n");
	printf(" - TEST 1 - \n");
	int itoa_test1 = -2147483648;
	printf("resultat : %s\n", ft_itoa(itoa_test1));
	printf("input    : %d\n", itoa_test1);

	printf(" - TEST 2 - \n");
	int itoa_test2 = 0;
	printf("resultat : %s\n", ft_itoa(itoa_test2));
	printf("input    : %d\n", itoa_test2);

	printf(" - TEST 3 - \n");
	int itoa_test3 = 2147483647;
	printf("resultat : %s\n", ft_itoa(itoa_test3));
	printf("input    : %d\n", itoa_test3);



	printf("\n\n---------STRMAPI---------\n");
	printf(" - TEST 1 - \n");
	char (*fptr)(unsigned int, char);
	fptr = for_mapi;
	char mapi1[] = "BonsOiR a TouS";
	char *resmapi1;
	resmapi1 = ft_strmapi(mapi1, fptr);
	printf("%s devient %s\n", mapi1, resmapi1);



	printf("\n\n---------PUTCHAR FD---------\n");
	printf(" - TEST 1 - \n");
	ft_putchar_fd(')', fileno(stdout));
	printf(" doit etre egal a : )");



	printf("\n\n---------PUTSTR FD---------\n");
	printf(" - TEST 1 - \n");
	ft_putstr_fd("alice", fileno(stdout));
	printf(" doit etre egal a : alice");


	printf("\n\n---------PUTENDL FD---------\n");
	printf(" - TEST 1 - \n");
	ft_putendl_fd("alice", fileno(stdout));
	printf("doit etre egal a : alice + retour a la ligne");



	printf("\n\n---------PUTNBR FD---------\n");
	printf(" - TEST 1 - \n");
	ft_putnbr_fd(123, fileno(stdout));
	printf(" doit etre egal a : 123");



	printf("\n\n\n------------------");
	printf("\n-------BONUS------");
	printf("\n------------------\n");

	printf("\n\n---------LSTNEW---------\n");
	printf(" - TEST 1 - \n");
	char	content1[50] = "bonjour";
	t_list	*lst1;
	lst1 = ft_lstnew(content1);
	printf("|%s| est |%s|\n", content1, lst1->content);

	printf(" - TEST 2 - \n");
	char	content2[8] = "";
	t_list	*lst2;
	lst2 = ft_lstnew(content2);
	printf("|%s| est |%s|\n", content2, lst2->content);



	printf("\n\n---------LSTADDFRONT---------\n");
	printf(" - TEST 1 - \n");
	t_list	*l = ft_lstnew(strdup("bonsoir a tous"));
	t_list	*n = ft_lstnew(strdup("bonjour"));
	ft_lstadd_front(&l, n);
	if (l == n && !strcmp(l->content, "bonjour"))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%s\n", l->content);
	}



	printf("\n\n---------LSTSIZE---------\n");
	printf(" - TEST 1 - \n");
	t_list	*lsize1;
	lsize1 = ft_lstnew(strdup("1"));
	lsize1->next = ft_lstnew(strdup("2"));
	lsize1->next->next = ft_lstnew(strdup("3"));
	if (ft_lstsize(lsize1) == 3)
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%d\n", ft_lstsize(lsize1));
	}

	printf(" - TEST 2 - \n");
	t_list	*lsize2 = NULL;
	if (ft_lstsize(lsize2) == 0)
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%d\n", ft_lstsize(lsize2));
	}



	printf("\n\n---------LSTLAST---------\n");
	printf(" - TEST 1 - \n");
	t_list	*lstlast1;
	lstlast1 = ft_lstnew(strdup("1"));
	lstlast1->next = ft_lstnew(strdup("2"));
	lstlast1->next->next = ft_lstnew(strdup("3"));
	if (lstlast1->next->next == ft_lstlast(lstlast1))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%s\n", ft_lstlast(lstlast1)->content);
	}

	printf(" - TEST 2 - \n");
	t_list	*lstlast2 = NULL;
	if (NULL == ft_lstlast(lstlast2))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%s\n", ft_lstlast(lstlast2)->content);
	}



	printf("\n\n---------LSTADDBACK---------\n");
	printf(" - TEST 1 - \n");
	t_list	*lstback1 = ft_lstnew(strdup("bonsoir a tous"));
	t_list	*nback1 = ft_lstnew(strdup("bonjour"));
	ft_lstadd_back(&lstback1, nback1);
	if (lstback1->next == nback1 && !strcmp(lstback1->next->content, "bonjour"))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%s\n", lstback1->content);
	}

	printf(" - TEST 2 - \n");
	t_list	*lstback2 = ft_lstnew(strdup("bonsoir a tous"));
	t_list	*nback2 = ft_lstnew(strdup(""));
	ft_lstadd_back(&lstback2, nback2);
	if (lstback2->next == nback2 && !strcmp(lstback2->next->content, ""))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%s\n", lstback2->content);
	}



	printf("\n\n---------LSTCLEAR---------\n");
	printf(" - TEST 1 - \n");
	t_list	*lstclear1 = ft_lstnew(strdup("bonsoir a tous"));
	lstclear1->next = ft_lstnew(strdup("bonjour"));
	ft_lstclear(&lstclear1, lstdelone_f);
	if (!lstclear1)
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%s\n", lstclear1->content);
	}

	printf(" - TEST 2 - \n");
	t_list	*lstclear2 = ft_lstnew(strdup("bonsoir a tous"));
	ft_lstclear(&lstclear2, lstdelone_f);
	if (!lstclear2)
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%s\n", lstclear2->content);
	}



	printf("\n\n---------LSTITER---------\n");
	printf(" - TEST 1 - \n");
	t_list	*iter1 = ft_lstnew(strdup("bonjour"));

	iter1->next = ft_lstnew(strdup("bonjour"));
	iter1->next->next = ft_lstnew(strdup("bonjour"));
	ft_lstiter(iter1, lstiter_f);
	if (!strcmp(iter1->content, "BONJOUR") && !strcmp(iter1->next->content, "BONJOUR") && !strcmp(iter1->next->next->content, "BONJOUR"))
		printf("OK\n");
	else
	{
		printf("NOK\n");
		printf("%s\n", iter1->next->next->content);
	}



	printf("\n\n---------LSTMAP---------\n");
	printf(" - TEST 1 - \n");
	t_list	*map1 = ft_lstnew(strdup(" 1 2 3 "));
	t_list	*ret;
	map1->next = ft_lstnew(strdup("ss"));
	map1->next->next = ft_lstnew(strdup("-_-"));
	ret = ft_lstmap(map1, lstmap_f, NULL);
	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(map1->content, " 1 2 3 ") && !strcmp(map1->next->content, "ss") && !strcmp(map1->next->next->content, "-_-"))
		printf("OK\n");
	else
	{
		printf("NOK\n");
	}
	return (0);
}
