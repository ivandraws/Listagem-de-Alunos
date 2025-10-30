# Listagem de Alunos (README WIP)

## 1. Informações Gerais

Listagem de Alunos é um projeto pessoal de treino em C, que testa os comandos de manipulação de arquivo, uso de tydef e struct e argumentos de linha. O programa compila em C
e utiliza apenas a biblioteca **stdio.h**

## 2. Como funciona ?

Dado um arquivo .csv, o código faz a escrita dos dados do aluno no arquivo. Posteriormente, o arquivo .csv pode ser importado para aplicativos, como Google Planilhas ou Excel, para transformar o texto em planilha.

## 3. Instruções

Basta baixar o arquivo **coleta.c** e compilar em sua máquina por meio do GCC ou do CLang. Após isso, tenha na mesma pasta que ambos os programas um arquivo .csv. No repositório, tem um arquivo de exemplo que pode ser utilizado, mas recomendamos que o usuário faça o seu próprio.

Com todos os passos acima completo, execute o comando ``./coleta <NomeDoArquivo>.csv``, sendo o NomeDoArquivo o nome do arquivo CSV que vai receber os dados.

Após isso, o programa vai perguntar quantos alunos terão seus dados digitados

### Atenção:

Por motivos maiores, o código limita o registro máximo de alunos em 50, ou seja, até 50 dados de alunos podem ser registrados a cada execução do programa.

