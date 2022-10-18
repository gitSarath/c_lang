#include<stdio.h>
/*
 *  	\x and \u are not a valid sequence
 */

int main()
{
	printf("\a \b \c \d \e \f \g \h \i \j \k \l \m \n \o \p \q \r \s \t \v \w \y \z");
	printf("\A \B \C \D \E \F \G \H \I \J \K \L \M \N \O \P \Q \R \S \T \V \W \Y \Z \n \n ");
	printf("special characters\n");
	printf("\~ \! \@ \# \$ \% \^ \& \* \( \) \_ \+ \= \- \n \n");
	return 0;
}
