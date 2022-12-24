
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
    printf("ORIGINAL FUNCTION => CANT FIND\n");
    printf("MY FUNCTION => %d\n", ft_strlcpy(buffer,str1,6));

/* ft_strlcat*/
	printf(FUNCTION("\n* ft_strlcat\n"));
    char first[] = "This is ";
    char last[] = "a potentially long string";
    printf("ORIGINAL FUNCTION => CANT FIND\n");
    printf("MY FUNCTION => %d\n", ft_strlcat(first, last, 6));
/* ft_strncmp*/
	printf(FUNCTION("\n* ft_strncmp\n"));
    char *str2 = "RFFffssasd";
    char *str3 = "RFt";
    printf("ORIGINAL FUNCTION => %d\n", strncmp(str2, str3, 3));
    printf("MY FUNCTION => %d\n", ft_strncmp(str2, str3, 3));
/* ft_bzero */
    // printf(FUNCTION("\n* ft_bzero\n\n"));
    // ft_bzero();
	// printf("test");
    return(0);
}
// 	test_strlen_0();
// 	test_strlen_1();
// 	test_strlen_2();
// 	test_strlen_3();
// 	test_strlen_4();
// 	test_strlen_5();

// /* ft_isalnum */
// 	printf(FUNCTION("\n* ft_isalnum\t"));
// 	fflush(stdout);
// 	test_isalnum();

// /* ft_isalpha */
// 	printf(FUNCTION("\n* ft_isalpha\t"));
// 	fflush(stdout);
// 	test_isalpha();

// /* ft_isascii */
// 	printf(FUNCTION("\n* ft_isascii\t"));
// 	fflush(stdout);
// 	test_isascii();

// /* ft_isdigit */
// 	printf(FUNCTION("\n* ft_isdigit\t"));
// 	fflush(stdout);
// 	test_isdigit();

// /* ft_isprint */
// 	printf(FUNCTION("\n* ft_isprint\t"));
// 	fflush(stdout);
// 	test_isprint();

// /* Part 2 header */
// 	printf(PARTS("\n\n================================== ∙ Part 2 ∙ ==================================\n"));

// /* ft_substr */
// 	printf(FUNCTION("\n* ft_substr\t"));
// 	fflush(stdout);

// /* ft_strjoin */
// 	printf(FUNCTION("\n* ft_strjoin\t"));
// 	fflush(stdout);

// /* ft_strtrim */
// 	printf(FUNCTION("\n* ft_strtrim\t"));
// 	fflush(stdout);

// /* ft_split */
// 	printf(FUNCTION("\n* ft_split\t"));
// 	fflush(stdout);

// /* ft_itoa */
// 	printf(FUNCTION("\n* ft_itoa\t"));
// 	fflush(stdout);

// /* ft_strmapi */
// 	printf(FUNCTION("\n* ft_strmapi\t"));
// 	fflush(stdout);

// /* ft_putchar_fd */
// 	printf(FUNCTION("\n* ft_putchar_fd\t"));
// 	fflush(stdout);

// /* ft_putstr_fd */
// 	printf(FUNCTION("\n* ft_putstr_fd\t"));
// 	fflush(stdout);

// /* ft_putendl_fd */
// 	printf(FUNCTION("\n* ft_putendl_fd\t"));
// 	fflush(stdout);

// /* ft_putnbr_fd */
// 	printf(FUNCTION("\n* ft_putnbr_fd\t"));
// 	fflush(stdout);

// /* End footer */
// 	printf(PARTS("\n\n================================= ∙ The End ∙ ==================================\n"));
