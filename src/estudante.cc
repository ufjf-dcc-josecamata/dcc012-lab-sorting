
#include <cstring>
#include <iostream>
#include <fstream>

#include "estudante.h"

using namespace std;

namespace Siga 
{

Estudante::Estudante():_matricula(0), _nome("") , _ano_ingresso(0), _semestre_ingresso(0), _curso(""), _ira(0.0)
{};

Estudante::Estudante( int matricula, const char* nome, int ano_ingresso, int semestre_ingresso, const char* curso, float ira)
{    
    _matricula    = matricula;
     strcpy(_nome,nome);
    _ano_ingresso = ano_ingresso;
    _semestre_ingresso = semestre_ingresso;
    strcpy(_curso,curso);
    _ira          = ira;
}

Estudante::Estudante(const Estudante& estudante)
{
    _matricula    = estudante._matricula;
    strcpy(_nome,estudante._nome);
    _ano_ingresso = estudante._ano_ingresso;
    _semestre_ingresso = estudante._semestre_ingresso;
    strcpy(_curso,estudante._curso);
    _ira          = estudante._ira;
}
        
int Estudante::ObterMatricula()
{
    return this->_matricula;
}
        
const char* Estudante::ObterNome()
{
    return this->_nome;

}     

int Estudante::ObterAnoIngresso()
{
    return this->_ano_ingresso;
}

int Estudante::ObterSemestreIngresso()
{
    return this->_semestre_ingresso;
}

const char* Estudante::ObterCurso()
{
    return this->_curso;
}

float Estudante::ObterIRA()
{
    return this->_ira;
}

void Estudante::TrocarMatricula(int matricula)
{
    this->_matricula = matricula;
}

void Estudante::TrocarNome(const char* nome)
{
    strcpy(_nome,nome);
}
        
void Estudante::TrocarSemestreIngresso(int semestre_ingresso)
{
    this->_semestre_ingresso = semestre_ingresso;
}

void Estudante::TrocarCurso(const char* curso)
{
    strcpy(_curso,curso);
}

void Estudante::TrocarAnoIngresso(int ano_ingresso)
{
    this->_ano_ingresso = ano_ingresso;
}

void Estudante::TrocarIRA(float ira)
{
    this->_ira = ira;
}

void Estudante::Imprimir()
{
    cout <<"Nome: "      << this->_nome << endl;
    cout <<"Matricula: " << this->_matricula << endl;
    cout <<"Ano: "       << this->_ano_ingresso << endl;
    cout <<"Semestre: "  << this->_semestre_ingresso << endl;
    cout <<"Curso: "     << this->_curso << endl;
    cout <<"IRA: "       << this->_matricula << endl; 
}

}
