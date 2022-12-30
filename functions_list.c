// ?NORMINETTARE TUTTO
// * ||--------------------------------------------------------------------------------||
// * ||                                      PART1                                     ||
// * ||--------------------------------------------------------------------------------||
// •memset      CHIEDERE A GIU PERCHE' SE LA FUN E' VOID DEVE COMUNQUE TORNARE QUALCOSA E CHIEDERE COME SI UTILIZZA IL SIZE_T E NULL(HO PROVATO INCLUDENDO STDDEF MA NON FUNZIONA LO STESSO) E ANCHE CHE SENSO HA UN DATO DI TIPO VOID * E VOID IN GENERALE) E COS'E' UN DATO RESTRICT 
// •bzero
// •memcpy      CHIEDERE A GIU BENE IL DISCORSO DEI CAST ( PERCHE PER DEST HO DOVUTO CASTARE DUE VOLTE A PUNTATORE E PER SRC NO?)
// •memccpy
// •memmove     CAPIRE CON GIU LA DIFFERENZA TRA MEMCPY ( E CAPIRE L'UTILITÀ DI FARLO COME LO FA GLAGAN)
// •memchr      CAPIRE SEMPRE BENE IL DISCORSO DEL CAST (UN CAST È UN OPERAZIONE "USA E GETTA" O NO?) (PERCHE' IN QUESTA FUNZIONE A DIFFERENZA DELLE SUE SIMILI NON POTEVO USARE IL CAST A UNSIGNED CHAR E VOLEVA SOLO IL CAST A CHAR?)
// •memcmp      RIVEDERE BENE IL DISCORSO DEI CAST
// •strlen      L'ORIGINALE TORNA UN LD, LA MIA TORNA UN D. CAPIRE SE DEVO FAR TORNARE ANCHE IO UN LD
// •strlcpy     LA FUNZIONE NON LA TROVO NELLE LIB, DOVREBBERE ESSERE STATA TOLTA. L'ORIGINALE TORNA UN INT, LA MIA TORNA UN UNSIGNED INT. CAPIRE SE DEVO FAR TORNARE ANCHE IO UN INT.
// •strlcat     LA FUNZIONE NON LA TROVO NELLE LIB, DOVREBBERE ESSERE STATA TOLTA.
// •strchr      PROVARE A RIFARLA CON GIULIANO MA TORNANDO IL VALORE IN UNA PUNTATORE VARIABILE
// •strrchr
// •strnstr
// •strncmp
// •atoi
// •isalpha     IL MAN DICE CHE DEVE TORNARE UN NON-ZERO CHAR, IO STO TORNANDO I VALORI CHE TORNANO NEI TEST
// •isdigit     IL MAN DICE CHE DEVE TORNARE UN NON-ZERO CHAR, IO STO TORNANDO I VALORI CHE TORNANO NEI TEST
// •isalnum     IL MAN DICE CHE DEVE TORNARE UN NON-ZERO CHAR, IO STO TORNANDO I VALORI CHE TORNANO NEI TEST
// •isascii     IL MAN DICE CHE DEVE TORNARE UN NON-ZERO CHAR, IO STO TORNANDO I VALORI CHE TORNANO NEI TEST
// •isprint     IL MAN DICE CHE DEVE TORNARE UN NON-ZERO CHAR, IO STO TORNANDO I VALORI CHE TORNANO NEI TEST
// •toupper     IL MAN DICE CHE DEVE TORNARE UN NON-ZERO CHAR, IO STO TORNANDO I VALORI CHE TORNANO NEI TEST
// •tolower     IL MAN DICE CHE DEVE TORNARE UN NON-ZERO CHAR, IO STO TORNANDO I VALORI CHE TORNANO NEI TEST

// * ||--------------------------------------------------------------------------------||
// * ||                                      PART2                                     ||
// * ||--------------------------------------------------------------------------------||

// • ft_substr  CAPIRE SE POSSO MODIFICARE UN ARGOMENTO DI FUNZIONE(START) O DEVO UTILIZZARE UN CONT;
// !• ft_strjoin         
// !• ft_strtrim     
// !• ft_split
// !• ft_itoa
// !• ft_strmapi 
// !• ft_putchar_fd
// !• ft_putstr_fd
// !• ft_putendl_fd
// !• ft_putnbr_fd

// * ||--------------------------------------------------------------------------------||
// * ||                                   BONUS PART                                   ||
// * ||--------------------------------------------------------------------------------||

// !• ft_lstnew
// !• ft_lstadd_front     
// !• ft_lstsize     
// !• ft_lstlast
// !• ft_lstadd_back
// !• ft_lstdelone 
// !• ft_lstclear
// !• ft_lstiter
// !• ft_lstmap
