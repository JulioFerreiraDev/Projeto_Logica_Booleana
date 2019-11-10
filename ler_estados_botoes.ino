void acender_LEDs(){
  //Lendo o estado dos pinos dos botões e atribuindo o resultado a variável estadoBotao.
  estadoBotao_A = digitalRead(botao_A);
  estadoBotao_B = digitalRead(botao_B);
  estadoBotao_C = digitalRead(botao_C);

  //Verificando o estado do botão A
  if (estadoBotao_A == HIGH) {
    //Botão pressionado, acende o led verde.
    digitalWrite(A_Led, HIGH);
  } else {
    //Botão não pressionado, apaga o led verde.
    digitalWrite(A_Led, LOW);
  }

  //Verificando o estado do botão B
  if (estadoBotao_B == HIGH) {
    //Botão pressionado, acende o led verde.
    digitalWrite(B_Led, HIGH);
  } else {
    //Botão não pressionado, apaga o led verde.
    digitalWrite(B_Led, LOW);
  }

  //Verificando o estado do botão C
  if (estadoBotao_C == HIGH) {
    //Botão pressionado, acende o led verde.
    digitalWrite(C_Led, HIGH);
  } else {
    //Botão não pressionado, apaga o led verde.
    digitalWrite(C_Led, LOW);
  }
}
