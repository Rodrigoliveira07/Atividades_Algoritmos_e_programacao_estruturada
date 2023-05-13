#include <stdio.h>

#define MAX_ALUNOS 20
#define MAX_DISCIPLINAS 5

typedef struct {
    char nome[50];
    int carga_horaria;
    float notas[4];
} Disciplina;

typedef struct {
    char nome[50];
    int matricula;
    int idade;
    Disciplina disciplinas[MAX_DISCIPLINAS];
} Aluno;

int main() {
    Aluno alunos[MAX_ALUNOS];
    int num_alunos = 0;
    
    char continuar;
    do {
        Aluno aluno;
        printf("\nCadastro do aluno #%d\n", num_alunos + 1);
        printf("Nome: ");
        scanf("%s", aluno.nome);
        printf("Matricula: ");
        scanf("%d", &aluno.matricula);
        printf("Idade: ");
        scanf("%d", &aluno.idade);
        
        int num_disciplinas = 0;
        char continuar_disciplina;
        do {
            Disciplina disciplina;
            printf("\nCadastro da disciplina #%d do aluno %s\n", num_disciplinas + 1, aluno.nome);
            printf("Nome: ");
            scanf("%s", disciplina.nome);
            printf("Carga horaria: ");
            scanf("%d", &disciplina.carga_horaria);
            printf("Notas (n1, n2, n3, n4): ");
            scanf("%f %f %f %f", &disciplina.notas[0], &disciplina.notas[1], &disciplina.notas[2], &disciplina.notas[3]);
            
            aluno.disciplinas[num_disciplinas] = disciplina;
            num_disciplinas++;
            
            if (num_disciplinas < MAX_DISCIPLINAS) {
                printf("Deseja cadastrar outra disciplina para o aluno %s? (s/n): ", aluno.nome);
                scanf(" %c", &continuar_disciplina);
            } else {
                printf("Limite maximo de disciplinas atingido para o aluno %s.\n", aluno.nome);
                continuar_disciplina = 'n';
            }
        } while (continuar_disciplina == 's' && num_disciplinas < MAX_DISCIPLINAS);
        
        alunos[num_alunos] = aluno;
        num_alunos++;
        
        if (num_alunos < MAX_ALUNOS) {
            printf("Deseja cadastrar outro aluno? (s/n): ");
            scanf(" %c", &continuar);
        } else {
            printf("Limite maximo de alunos atingido.\n");
            continuar = 'n';
        }
    } while (continuar == 's' && num_alunos < MAX_ALUNOS);
    
    printf("\nInformacoes dos alunos cadastrados:\n");
    printf("Nome\t\tMedia\tIdade\n");
    for (int i = 0; i < num_alunos;