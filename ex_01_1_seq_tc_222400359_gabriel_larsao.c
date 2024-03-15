/* 1. Elabore um programa que leia dois valores reais e mostre o resultado da adição desses valores. */

#include <stdio.h>

int main() {

    int num1 = 3;
    int num2 = 5;
    int soma1 = num1 + num2;

    printf("A soma do número %d e do número %d é igual a: %d", num1, num2, soma1);

    return 0;
}

/*

2. - Elabore o programa que calcule a soma de dois valores inteiros que serão fornecidos pelo usuário. Após a realização do exercício 2 faça as seguintes alterações no código: 

a. No final do programa, acrescente a subtração dos valores lidos e mostre o resultado. 
b. No final do programa, acrescente a multiplicação dos valores lidos e mostre o resultado.
*/


int main() {

    int num3, num4, soma2, subtracao, multiplicacao;
   
    printf("Digite um  inteiro: \n");
    scanf("%d", &num3);

    printf("Digite outro número inteiro: \n");
    scanf("%d", &num4);

    soma2 = num3 + num4;
    subtracao = num3 - num4;
    multiplicacao = num3 * num4;

    printf("A soma do número %d e do número %d é igual a %d. \n", num3, num4, soma2);
    printf("A subtração destes números é igual a %d. \n", subtracao);
    printf("A multiplicação destes números é igual a %d. \n", multiplicacao);

    return 0;
}

/*

3. Projete um programa para calcular a área de um triângulo (área = (b * h) /2). O usuário fornecerá todos os dados necessários, ou seja, a base e a altura. Após a realização do exercício 3 faça as seguintes alterações no código: 

a. Mostre o valor da área com três casas decimais. 
b. Na tela de saída de dados, mostre também o valor da base e da altura. 

*/

int main() {

    float b_base, h_altura, area;

    //área = (b * h) /2

    printf("Digite o tamanho da base do triângulo. \n");
    scanf("%f", &b_base);

    printf("Digite a altura do triângulo. \n");
    scanf("%f", &h_altura);

    area = (b_base * h_altura) / 2;

    printf("O valor da base é: %.2f \n", b_base);
    printf("O valor da altura é: %.2f \n", h_altura);
    printf("A área do triângulo é igual a: %.3f \n", area);

    return 0;
}

/* 4. Construa um programa que calcule a média aritmética de duas notas bimestrais fornecidas pelo usuário.  média = nota1 + nota2 / 2  */


int main() {

    float nota1, nota2, media;

    printf("Qual foi a sua primeira nota? \n");
    scanf("%f", &nota1);

    printf("Qual foi a sua segunda nota? \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A sua média é igual a: %.2f", media);

    return 0;
}

/* 5. Elabore um programa que faça a conversão de graus Fahrenheit para graus Celsius (Celsius-ºC), Onde: C = (F - 32) /1.8  */

int main() {

    float temperatura_f, temperatura_c;

    temperatura_c = (temperatura_f - 32) / 1.8;

    printf("Convertendo %.1f graus Fahrenheit para Celsius é igual a: %.1f graus Celsius", temperatura_f, temperatura_c);

    return 0;
}

/* 6. Elabore um programa que calcule a área de um círculo. O usuário fornecerá o valor do raio.  Onde:  área = pi * r^2  */

int main() {

    float raio, area;

    printf("Qual o raio do circulo?");
    scanf("%f", &raio);

    area = 3.14 * raio ^ 2;

    printf("A área do circulo é igual a: %.2f", area);

    return 0;
}

/* 7. Elabore um programa que calcula o comprimento de uma circunferência.  Onde: comprimento = 2 * pi * r */

int main() {

    float raio = 5;
    float comprimento = 2 * 3.14 * raio;

    printf("O comprimento da circunferência é igual a: %.2f", comprimento);

    return 0;
}

/* 8.  Elabore um programa que calcula a área lateral de um cilindro, onde: área = 2 * pi * r * h. */

int main() {

    float area;
    float raio = 5;
    float altura = 10;

    area = 2 * 3.14 * raio * altura;

    printf("A área lateral do cilindro é igual a: %.2f", area);

    return 0;
}

/* 9.   Faça um algoritmo para calcular o volume de uma esfera de raio R, onde R é um valor lido.  Onde: volume = 4/3 * pi * r ^ 3 */

int main() {

    float volume, raio;

    scanf("%f", &raio);

    volume = 4 / 3 * 3.14 * raio ^ 3;

    printf("O volume da esfera é igual a: %.2f", volume);

    return 0;
}

/* 10. Construa um programa para calcular a raiz de uma equação do 1º grau. Os coeficientes “a” e “b” são fornecidos pelo usuário. 

Calcule a raiz sem fazer crítica.   

Equação: a x + b = 0,  onde: raiz = - b/a  

*/

int main() {

    float a, b;

    return 0;
}


/* 11. Elabore um programa que troque o conteúdo de duas variáveis. O usuário fornecerá os dois valores inteiros. */

int main() {

    return 0;
}


/* 12. Elabore um programa que leia dois valores reais e mostre o resultado da adição e da subtração desses valores. */

int main() {

    float numero1 = 5;
    float numero2 = 6;
    float adicao = numero1 + numero2;
    float subtracao = numero1 - numero2;

    printf("A adição destes números é igual a %.1f e a subtração é igual a %.1f", adicao, subtracao);

    return 0;
}


/* 13. Sabendo que a 01 pé equivale a 0.3048m, faça um programa que converta pés em metros. */

int main() {

    int pes;
    float metros;

    printf("Digite a quantidade de pés que você deseja converter para metros. \n");
    scanf("%d", &pes);

    metros = pes * 0.3048;

    printf("%d pés é igual a %.3f metros", pes, metros);

    return 0;
}

/* 14. Escreva um programa que solicite 3 números em ponto flutuante e imprima a média aritmética desses números. */

int main() {

    float n1, n2, n3, media_aritmetica;

    printf("Digite um número. \n");
    scanf("%f", &n1);

    printf("Digite outro número. \n");
    scanf("%f", &n2);

    printf("Digite outro número. \n");
    scanf("%f", &n3);

    media_aritmetica = (n1 + n2 + n3) / 3;

    printf("A média artmética destes três números é igual a: %.2f", media_aritmetica);

    return 0;
}