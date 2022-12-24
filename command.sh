# questo per rimuovere l'eseguibile che creo
rm -rf main
# questo compila il main con la libft.a
gcc -Wall -Werror -Wextra -I. -L. -lft main.c -o main && ./main