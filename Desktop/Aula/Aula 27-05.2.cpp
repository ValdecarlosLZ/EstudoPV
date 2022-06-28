#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
	int matricula;
	char nome[30];
	char curso[50];
	
};
int main(){
	
	struct Aluno func[5];
	int i = 0;
	int qntdeAlunos = 5;
	while(i < qntdeAlunos){
	
	printf("================= \n");
	printf("Cadastro de Aluno \n");
	printf("Matricula: \n");
	scanf("%d", &func[i].matricula);
	fflush(stdin);
	//func.codigo = 100;
	//func.nome = "Creito";
	printf("Nome- ");
	//scanf("%s", &func.nome);
	gets(func[i].nome);
	//strcpy(func.nome, "Joao");
	//printf("Salario- ");
	//scanf("%f", &func.salario);
	//func.salario = 1000;
	//func.departamento = "Tecnologia";
	printf("Curso- ");
	scanf("%s", &func[i].curso);
	//strcpy(func.departamento, "Tecnologia");
	printf("================= \n");
	printf("Nome: %s \n", func[i].nome);
	printf("Matricula: %d \n", func[i].matricula);
	//printf("Salario: %f \n", func.salario);
	printf("urso: %s \n", func[i].curso);
	i++;
	}
	return 0;
}
