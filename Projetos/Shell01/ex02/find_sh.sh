find . -type f -name '*.sh' -printf "%f\n" | sed 's/\.sh//'
#Encontre em todos arquivos da pasta com tipo de arquivo com nome que termina
#com .sh e printamos o nome atual do ficheiro
#sed screen editor s/ substituicao do \.sh por // nada
