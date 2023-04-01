# Ordenação de Dados em C++

## 🤓 Resumo

Objetivo dessa atividade é implementar os principais algoritmos de ordenação baseados em comparações  🚀

Espera-se que ao final desta atividade você seja capaz de criar, editar, buscar informaçoes e 
fechar arquivos e compreender os principais conceitos por tras dessas açoes. 

## Atividade :

Nesta atividades, desejamos aprimorar o nosso sistema SIGA. 
Além de manipular o cadastro de informações de estudantes em um arquivo binário, iremos agora classificar as
informações baseados em uma determinada chave de comparação.


## Organização do Projeto 
Nosso projeto está organizado na seguinte estrutura de arquivos:

src
  - [estudante.h](src/estudante.h) e [estudante.cc](src/estudante.cpp) : Implementa a entidade estudante
  - [siga.h](include/siga.h) e [siga.cc](src/siga.cc): Implementa um sistema simplista de gerenciamento de estudante.
  - [sort.h](include/sort.h) e [src/sort.cc]: Implementa as rotinas de ordenação
  
test
  - [test1.cc](tests/test1.cc):  Testa se a entrada da base de dados está correta.   
  - [test2.cc](tests/test2.cc):  Testa a ordenação do algoritmo ordenação #1 está correta.
  - [test3.cc](tests/test3.cc):  Testa a ordenação do algoritmo ordenação #2 está correta.
  - [test4.cc](tests/test4.cc):  Testa a ordenação do algoritmo ordenação #2 está correta. 
  - [test5.cc](tests/test5.cc):  Testa a ordenação do algoritmo ordenação #4 está correta.

app
  - [performance.cc](app/performance.cc): Gera um relatório de performance entre os métodos.
  - [classifica.cc](app/classifica.cc): Gera um arquivo texto em formato csv classificando os alunos por turma e nome em ordem ascendente.

**IMPORTANTE**
 - Detalhes do que deve ser feito encontram-se no arquivos fontes sob a tag **TODO**.
 - Os arquivos da pasta tests não devem ser modificados.
 - Os arquivos serão lidos ou criados na pasta [tests/data](tests/data)

### Compilação e Execução: 

Para a compilação em ambiente Unix/linux, use o comando:

 - Crie um diretório build
  ```
    mkdir build
  ```
 - Entre no diretório

  ```
    cd build
  ```
  - Chame o cmake
 
  ```
    cmake ../.
  ```
  - Compile os testes:
  
  ```
    make 
  ```
  
  - Rode os testes:
   
  ```
    ctest
  ```
  
  - Para rodar o estudo de desempenho:
  

*Importante:* Entre uma chamadas do ctest, remova o arquivo estudantes.bin da pasta tests/data.

## 📝 Importante

Você deve implementar em C++. 

## 📝 Procure saber mais...





