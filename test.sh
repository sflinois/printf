cp main.c main2.c
sed -i '' 's/printf/ft_printf/g' main2.c
gcc -Wall -Wextra -Werror -o printf libftprintf.a main.c
gcc -Wall -Wextra -Werror -o ft_printf libftprintf.a main2.c
./printf > printf.txt
./ft_printf > ft_printf.txt
cmp printf.txt ft_printf.txt > cmp.txt
rm printf.txt ft_printf.txt main2.c
cat cmp.txt
