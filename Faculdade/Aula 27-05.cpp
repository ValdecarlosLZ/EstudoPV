#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Funcionario{
	int codigo;
	char nome[30];
	float salario;
	char departamento[50];
	
};
int main(){
	
	struct Funcionario func[10];
	int i = 0;
	int qntdeFuncionarios = 10;
	while(i < qntdeFuncionarios){
	printf("====================== \n");
	printf("Cadastro do Funcionario \n");
	printf("Codigo: \n");
	scanf("%d", &func[i].codigo);
	fflush(stdin);
	//func.codigo = 100;
	//func.nome = "Creito";
	printf("Nome- ");
	//scanf("%s", &func.nome);
	gets(func[i].nome);
	//strcpy(func.nome, "Joao");
	printf("Salario- ");
	scanf("%f", &func[i].salario);
	//func.salario = 1000;
	//func.departamento = "Tecnologia";
	printf("Departamento- ");
	scanf("%s", &func[i].departamento);
	//strcpy(func.departamento, "Tecnologia");
	printf("================= \n");
	printf("Localizacao %d \n", i);
	printf("Nome: %s \n", func[i].nome);
	printf("Codigo: %d \n", func[i].codigo);
	printf("Salario: %f \n", func[i].salario);
	printf("Departamento: %s \n", func[i].departamento);
	i++;
	}
	printf("|====== | ======| \n");
	int j;
	float totalSalario;
	for(j = 0; j < qntdeFuncionarios; j++){
		totalSalario = totalSalario + func[j].salario;
		printf("Salario %f \n", func[j].salario);
		
	}
	printf("Folha Total: %f", totalSalario);
	return 0;
}
