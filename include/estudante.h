#ifndef ESTUDANTE_H__
#define ESTUDANTE_H__

#include <fstream>

using namespace std;

#define STR_MAX_SIZE 128
#define ESTUDANTE_SIZE (sizeof(char)*STR_MAX_SIZE + 2*sizeof(int) + sizeof(float))
namespace Siga 
{
class Estudante
{
    public:
        Estudante();
        Estudante(int matricula, const char* nome, int ano_ingresso, int semestre_ingresso, const char* curso, float ira);
        Estudante(const Estudante& estudante);

        int         ObterMatricula();
        const char* ObterNome();
        int         ObterAnoIngresso();
        int         ObterSemestreIngresso();
        const char* ObterCurso();
        float       ObterIRA();

        void TrocarMatricula(int matricula);
        void TrocarNome(const char* nome);
        void TrocarAnoIngresso(int ano_ingresso);
        void TrocarSemestreIngresso(int semestre_ingresso);
        void TrocarCurso(const char* curso);
        void TrocarIRA(float ira);

        void Imprimir();

    private:
        int    _matricula;
        char   _nome[STR_MAX_SIZE];
        int    _ano_ingresso;
        int    _semestre_ingresso;
        char   _curso[STR_MAX_SIZE];
        float  _ira;
};


} // namespace Siga

#endif /* ESTUDENT_H__ */