#include <LiquidCrystal.h>

//Declaração das constantes
const int A_Led = 12;
const int B_Led = 11;
const int C_Led = 10;

const int saida = 13;

const int botao_A = 8;
const int botao_B = 7;
const int botao_C = 6;

LiquidCrystal lcd(1, 0, 2, 3, 4, 5);

const int botao_Select = 9;

//Variáveis que conterão os estados dos botões (0 LOW, 1 HIGH).
int estadoBotao_A = 0;
int estadoBotao_B = 0;
int estadoBotao_C = 0;

int estadoBotao_Select = 0;
int opcao = 0;

//Método setup, executado uma vez ao ligar o Arduino.
void setup() {
  //Definindo pinos digitais como saída.
  pinMode(A_Led, OUTPUT);
  pinMode(B_Led, OUTPUT);
  pinMode(C_Led, OUTPUT);
  pinMode(saida, OUTPUT);

  //Definindo pinos digitais como entrada.
  pinMode(botao_A, INPUT);
  pinMode(botao_B, INPUT);
  pinMode(botao_C, INPUT);
  pinMode(botao_Select, INPUT);

  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
}

//Método loop, executado enquanto o Arduino estiver ligado.
void loop() {

  controlador_funcoes(opcao);
  estadoBotao_Select = digitalRead(botao_Select);
  if (estadoBotao_Select == HIGH) {
    opcao++;
  }
  if (opcao > 6) {
    opcao = 0;
  }
  acender_LEDs();

}
