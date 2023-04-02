
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

#include "siga.h"
#include "tools.h"
#include "sort.h"

#define VECTOR_SIZE 1000

struct ClassLessThanCompare {
  bool operator() (Siga::Estudante &a, Siga::Estudante &b) 
  { 
    return std::strcmp(a.ObterNome(), b.ObterNome()) < 0;
  }
} LessThanName;

struct ClassEqualCompare {
  bool operator() (Siga::Estudante &a, Siga::Estudante &b) 
  { 
    return std::strcmp(a.ObterNome(), b.ObterNome()) == 0;
  }
} EqualName;

// Insere um estudante no gerencia_siga e imprime
// o numero de estudantes armazenados
int main(int argc, char* argv[])
{
    Siga::Siga siga;
    siga.SetDatabase("estudantes");
    std::vector<Siga::Estudante> data;
    std::vector<int> idx = Siga::Tools::get_random_int_vector(VECTOR_SIZE);

    if(siga.ObterNumeroEstudantes() < VECTOR_SIZE)
    {
        cout << "SIGA: Erro ao gerar vetor de indices aleatorios" << endl;
        return -1;
    }

    siga.ExtraiaEstudantes(idx, data);
    // Copia os dados para um vetor de dados
    if(data.size() != VECTOR_SIZE)
    {
        cout << "SIGA: Erro ao extrair estudantes" << endl;
        return -1;
    }

    sort3(data, LessThanName);

    if(!Siga::Tools::is_sorted(data, LessThanName))
    {
        cout << "SIGA: Erro ao ordenar estudantes por nome" << endl;
        return -1;
    }

    return 0;
}
