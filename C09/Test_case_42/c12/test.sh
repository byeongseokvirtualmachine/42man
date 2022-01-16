#!/bin/bash

clear

echo "# **************************************************************************** #"
echo "#                                                                              #"
echo "#                                                         :::      ::::::::    #"
echo "#    CWS's MOULINETTE.sh                                :+:      :+:    :+:    #"
echo "#                                                     +:+ +:+         +:+      #"
echo "#    By: wochae <wochae@student.42.fr>              +#+  +:+       +#+         #"
echo "#                                                 +#+#+#+#+#+   +#+            #"
echo "#    Created: 2022/01/12 04:12:24 by wochae            #+#    #+#              #"
echo "#    Updated: 2022/01/12 04:12:24 by wochae           ###   ########.fr        #"
echo "#                                                                              #"
echo "# **************************************************************************** #"

echo "========== NORMINETTE  =========="
cd ../../

for i in $(seq 0 8); do
	if [ -d ex0$i ] ; then
		cd ex0$i
		rm -rf main.c
		norminette -R CheckForbiddenSourceHeader | cat
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd Test_case_42/c05/

echo "========== MOVE FILE =========="

for i in $(seq 0 8); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		cp main.c ../../../ex0$i/
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd ../../

echo "---------- GCC"

for i in $(seq 0 8); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= COMPILE =========="
		gcc -Wall -Wextra -Werror main.c
		chmod +x a.out
		echo "========== RESULT =========="
		./a.out
		rm -rf a.out
		rm -rf main.c
		cd ../
		sleep 1;
	else
		echo "ex0$i file not exist"
	fi
done
