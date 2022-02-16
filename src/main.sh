#!/bin/sh

#A simple tester to before moulinett test

red=$'\e[1;31m'
grn=$'\e[1;32m'
yel=$'\e[1;33m'
blu=$'\e[1;34m'
mag=$'\e[1;35m'
cyn=$'\e[1;36m'
end=$'\e[0m'

compile="gcc -Wall -Wextra -Werror"

command_usage()
{
	echo -e "Modo de utilizar o comando:"
	echo -e "campnett <00> <path>"
}


parsing_a_command()
{
	ex=$1
	path=$2
	echo 'Começando os testes da norminette'
	echo "===================================="
	echo -e 'Testando a norminette'
	echo "===================================="
	sleep 2
	norminette -R CheckForbiddenSourceHeader $path | grep -Po 'ex.*' | sed "s/OK!/$grn\OK$end/g"| sed "s/Error!/$red\EError!!$end/g" |sort
	echo "Encontrei os seguintes exercícios: "
	sleep 2
	echo "===================================="
	find $path -path "$path/ex*/*.c" | sed "s/\.\/ex./Exercício /g" | grep -Po 'ex.*' | sort
	echo "===================================="
	compile_files $path
}

compile_files()
{
	path=$1
	echo "Criando diretório de testes..."
	
	if [ "$path/testes" ]
	then
		rm -r -f "$path/testes"
		mkdir "$path/testes"
	fi

	test_path="$path/testes/"
	for ex in $(find $path -path "$path/ex*/*.c");
	do
		echo $ex
		filename=$(basename $ex)
		echo $filename
		$compile $ex -o "$test_path/$filename.out"
	done;
}

echo $(pwd)
if [ $2 ]
then
   parsing_a_command $1 $2
else
	command_usage
fi
