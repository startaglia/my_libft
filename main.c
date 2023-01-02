
#include "header.h"
#include "libft.h"

int main()
{
/* Test header */
	printf(HEADER_L("   .-'-.     .-'-.     .-'-.     .-'-.     .-'-.     .-'-.     .-'-.     .-'-.  \n.-'     '-.-'     '-.-'     '-.-'     '-.-'     '-.-'     '-.-'     '-.-'     '-\n"));
	printf(HEADER_T("                            Libft tests by startagl                  ") HEADER_A("@42roma") "\n");
	printf(HEADER_L("'-.     .-'-.     .-'-.     .-'-.     .-'-.     .-'-.     .-'-.     .-'-.     .-\n   '-.-'     '-.-'     '-.-'     '-.-'     '-.-'     '-.-'     '-.-'     '-.-'  \n\n\n"));

/* Part 1 header */
	printf(PARTS("================================== ∙ Part 1 ∙ ==================================\n"));

/* ft_strlen*/
	printf(FUNCTION("\n* ft_strlen\n"));
    char *str1 = "stringa";
    printf("ORIGINAL FUNCTION => %ld\n", strlen(str1));
    printf("MY FUNCTION => %d\n", ft_strlen(str1));

/* ft_strlcpy*/
	printf(FUNCTION("\n* ft_strlcpy\n"));
    char buffer[19];
    printf("ORIGINAL FUNCTION => NOT FOUND\n");
    printf("MY FUNCTION => %d\n", ft_strlcpy(buffer,str1,6));

/* ft_strlcat*/
	printf(FUNCTION("\n* ft_strlcat\n"));
    char first[] = "This is ";
    char last[] = "a potentially long string";
    printf("ORIGINAL FUNCTION => NOT FOUND\n");
    printf("MY FUNCTION => %d\n", ft_strlcat(first, last, 6));

/* ft_strncmp*/
	printf(FUNCTION("\n* ft_strncmp\n"));
    char *str2 = "RFFffssasd";
    char *str3 = "RFt";
    printf("ORIGINAL FUNCTION => %d\n", strncmp(str2, str3, 3));
    printf("MY FUNCTION => %d\n", ft_strncmp(str2, str3, 3));

/* ft_isalpha*/
	printf(FUNCTION("\n* ft_isalpha\n"));
    char c;
    c = 'y';
    printf("ORIGINAL FUNCTION => %d\n", isalpha(c));
    printf("MY FUNCTION => %d\n", ft_isalpha(c));

/* ft_isdigit*/
	printf(FUNCTION("\n* ft_isdigit\n"));
    c = '5';
    printf("ORIGINAL FUNCTION => %d\n", isdigit(c));
    printf("MY FUNCTION => %d\n", ft_isdigit(c));

/* ft_isallnum*/
	printf(FUNCTION("\n* ft_isalnum\n"));
    c = 53;
    printf("ORIGINAL FUNCTION => %d\n", isalnum(c));
    printf("MY FUNCTION => %d\n", ft_isalnum(c));

/* ft_isascii*/
	printf(FUNCTION("\n* ft_isascii\n"));
    c = 56;
    printf("ORIGINAL FUNCTION => %d\n", isascii(c));
    printf("MY FUNCTION => %d\n", ft_isascii(c));

/* ft_isprint*/
	printf(FUNCTION("\n* ft_isprint\n"));
    c = 53;
    printf("ORIGINAL FUNCTION => %d\n", isprint(c));
    printf("MY FUNCTION => %d\n", ft_isprint(c));

/* ft_tolower*/
	printf(FUNCTION("\n* ft_tolower\n"));
    c = 'G';
    printf("ORIGINAL FUNCTION => %c\n", tolower(c));
    printf("MY FUNCTION => %c\n", ft_tolower(c));

/* ft_toupper*/
	printf(FUNCTION("\n* ft_toupper\n"));
    c = 112;
    printf("ORIGINAL FUNCTION => %c\n", toupper(c));
    printf("MY FUNCTION => %c\n", ft_toupper(c));

/* ft_atoi*/
	printf(FUNCTION("\n* ft_atoi\n"));
    char *s = "6(6   546    5";
    printf("ORIGINAL FUNCTION => %d\n", atoi(s));
    printf("MY FUNCTION => %d\n", ft_atoi(s));

/* ft_strchr*/
	printf(FUNCTION("\n* ft_strchr\n"));
    s = "TERE";
    printf("ORIGINAL FUNCTION => %s\n", strchr(s, 4));
    printf("MY FUNCTION => %s\n", ft_strchr(s, 4));

/* ft_strchr*/
	printf(FUNCTION("\n* ft_strrchr\n"));
    s = "";
    printf("ORIGINAL FUNCTION => %s\n", strrchr(s, 0));
    printf("MY FUNCTION => %s\n", ft_strrchr(s, 0));

/* ft_strnstr*/
	printf(FUNCTION("\n* ft_strnstr\n"));
    const char *largestring = "bello cane   pico pico-- canobellocane";
	const char *smallstring = "bell";
    printf("ORIGINAL FUNCTION => NOT FOUND\n");
    // printf("REPO FUNCTION => %s\n", ft_strnstrww(largestring, smallstring, 4));
    printf("MY FUNCTION => %s\n", ft_strnstr(largestring, smallstring, 4));

/* ft_memset*/
	printf(FUNCTION("\n* ft_memset\n"));
    char ftr[50] = "42Roma is for pro developer.";
    memset(ftr + 13, 70, 5*sizeof(char));
    printf("ORIGINAL FUNCTION => %s\n", ftr);

    char ptr[50] = "42Roma is for pro developer.";
    ft_memset(ptr + 13, 70, 5*sizeof(char));
    printf("MY FUNCTION => %s\n", ptr);

/* ft_memcpy*/
	printf(FUNCTION("\n* ft_memcpy\n"));
    char atr[50] = "";
    char btr[50] = "abcdrete";
    memcpy(atr, btr, 5);
    printf("ORIGINAL FUNCTION => %s\n", atr);

    char ctr[50] = "";
    char dtr[50] = "abcdrete";
    ft_memcpy(ctr, dtr, 5);
    printf("MINE FUNCTION => %s\n", ctr);

/* ft_memccpy*/
	printf(FUNCTION("\n* ft_memccpy\n"));
    char etr[50] = "poco";
    char itr[50] = "musone";
    memccpy(etr, itr, 'l', 7);
    printf("ORIGINAL FUNCTION => %s\n", etr);

    char gtr[50] = "poco";
    char htr[50] = "musone";
    ft_memccpy(gtr, htr, 'l', 7);
    printf("MINE FUNCTION => %s\n", gtr);

/* ft_memmove*/
	printf(FUNCTION("\n* ft_memmove\n"));
    char ltr[50] = "tarta";
    char mtr[50] = "tartaglia";
    memmove(ltr + 1, mtr, 3);
    printf("ORIGINAL FUNCTION => %s\n", ltr);

    char ntr[50] = "tarta";
    char otr[50] = "tartaglia";
    ft_memmove(ntr + 1, otr, 3);
    printf("MINE FUNCTION => %s\n", ntr);

/* ft_memchr*/
	printf(FUNCTION("\n* ft_memchr\n"));
    char rtr[50] = "simone";
    char *pk = memchr(rtr, 'i', 2);
    printf("ORIGINAL FUNCTION => %s\n", pk);

    char qtr[50] = "simone";
    char *ak = ft_memchr(qtr, 'i', 2);
    printf("MINE FUNCTION => %s\n", ak);

/* ft_memcmp*/
	printf(FUNCTION("\n* ft_memcmp\n"));
    char utr[15] = "giovanepadwan";
    char vtr[15] = "giovanepadwan";
    int bk = memcmp(utr, vtr, 8);
    printf("ORIGINAL FUNCTION => %d\n", bk);

    char wtr[15] = "giovanepadwan";
    char ztr[15] = "giovanepadwan";
    int ck = ft_memcmp(wtr, ztr, 8);
    printf("MINE FUNCTION => %d\n", ck);

/* ft_bzero*/
	printf(FUNCTION("\n* ft_bzero\n"));
    bzero(ztr +4, 2);
    printf("ORIGINAL FUNCTION => %s\n", ztr);

    bzero(wtr +4, 2);
    printf("MINE FUNCTION => %s\n", wtr);

/* ft_calloc*/
	printf(FUNCTION("\n* ft_calloc\n"));
    int *btra;

    btra = calloc(2, 2);
    printf("ORIGINAL FUNCTION => %ld\n", sizeof(btra));
    int *ptra;

    ptra = ft_calloc(2, 2);
    printf("MINE FUNCTION => %ld\n", sizeof(ptra));

/* ft_strdup*/
	printf(FUNCTION("\n* ft_strdup\n"));
    char *aatr = "testString";
    char *abtr;
    abtr = strdup(aatr);
    printf("ORIGINAL FUNCTION => %s\n", abtr);
    
    char *actr = "cane";
    char *adtr;
    adtr = ft_strdup(actr);
    printf("MINE FUNCTION => %s\n", adtr);

/* Part 2 header */
	printf(PARTS("================================== ∙ Part 2 ∙ ==================================\n"));

/* ft_substr*/
	printf(FUNCTION("\n* ft_substr\n"));
    char *aetr;
    aetr = ft_substr(actr, 2, 2);
    printf("MINE FUNCTION => %s\n", aetr);

/* ft_strjoin*/
	printf(FUNCTION("\n* ft_strjoin\n"));
    char *agtr = "pico";
    char *aftr;
    aftr = ft_strjoin(actr, agtr);
    printf("MINE FUNCTION => %s\n", aftr);

/* ft_strtrim*/
	printf(FUNCTION("\n* ft_strtrim\n"));
    char *tere = ft_strtrim("cittao", "bco");
    printf("MINE FUNCTION => %s\n", tere);


/* End footer */
	printf(PARTS("\n\n================================= ∙ The End∙ ==================================\n"));
    return(0);
}




