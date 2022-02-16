clear
echo '\n Realizando teste da norminette -R\n'
norminette -R CheckForbiddenSourceHeader ex00/ft_ft.c
norminette -R CheckForbiddenSourceHeader ex01/ft_ultimate_ft.c
norminette -R CheckForbiddenSourceHeader ex02/ft_swap.c
norminette -R CheckForbiddenSourceHeader ex03/ft_div_mod.c
norminette -R CheckForbiddenSourceHeader ex04/ft_ultimate_div_mod.c
norminette -R CheckForbiddenSourceHeader ex05/ft_putstr.c
norminette -R CheckForbiddenSourceHeader ex06/ft_strlen.c
norminette -R CheckForbiddenSourceHeader ex07/ft_rev_int_tab.c
norminette -R CheckForbiddenSourceHeader ex08/ft_sort_int_tab.c
echo '\nTeste da norminette concluido\n'
echo '\nRealizando teste de GCC\n'
mkdir test
gcc -Wall -Werror -Wextra correcao/ex00.c ex00/ft_ft.c -o test/ex00.out
gcc -Wall -Werror -Wextra correcao/ex01.c ex01/ft_ultimate_ft.c -o test/ex01.out
gcc -Wall -Werror -Wextra correcao/ex02.c ex02/ft_swap.c -o test/ex02.out
gcc -Wall -Werror -Wextra correcao/ex03.c ex03/ft_div_mod.c -o test/ex03.out
gcc -Wall -Werror -Wextra correcao/ex04.c ex04/ft_ultimate_div_mod.c -o test/ex04.out
gcc -Wall -Werror -Wextra correcao/ex05.c ex05/ft_putstr.c -o test/ex05.out
gcc -Wall -Werror -Wextra correcao/ex06.c ex06/ft_strlen.c -o test/ex06.out
gcc -Wall -Werror -Wextra correcao/ex07.c ex07/ft_rev_int_tab.c -o test/ex07.out
gcc -Wall -Werror -Wextra correcao/ex08.c ex08/ft_sort_int_tab.c -o test/ex08.out
echo '\n Teste de GCC concluido\n'
echo '\n Realizando teste de resultado'
echo '\n Exercicio 00'
./test/ex00.out 
echo '\n \n Exercicio 01'
./test/ex01.out 
echo '\n \n Exercicio 02'
./test/ex02.out 
echo '\n \n Exercicio 03'
./test/ex03.out 
echo '\n \n Exercicio 04'
./test/ex04.out 
echo '\n \n Exercicio 05'
./test/ex05.out 
echo '\n \n Exercicio 06'
./test/ex06.out 
echo '\n \n Exercicio 07'
./test/ex07.out 
echo '\n \n Exercicio 08'
./test/ex08.out 
echo '\nTodos os testes foram concluidos.\n'
rm -r test
