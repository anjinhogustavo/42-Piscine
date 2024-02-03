id -Gn $FT_USER | tr -s ' ' ',' | tr -d '\n'
#pega o id e nome de cada grupo da funcao ftuser e troca com -s os espacos por 
#virgula, apos isso  deleta new line 
