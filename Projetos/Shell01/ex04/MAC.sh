ifconfig | grep -oP 'ether \K\S+'
#grep faz uma procura de linhas excutadas por o comando
#buscamos no ipconfig  o ether  \K a partir de K \S* de expressao regular, caso
#encontre caractere especial para nao incluido espaco
