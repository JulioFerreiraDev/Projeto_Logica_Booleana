// operador lógico AND
void operador_AND() {
  if (estadoBotao_A == 1 && estadoBotao_B == 1 && estadoBotao_C == 1) {
    digitalWrite(saida, HIGH);
  }
  else {
    digitalWrite(saida, LOW);
  }
}

// operador lógico OR
void operador_OR() {
  if (estadoBotao_A == 1 || estadoBotao_B == 1 || estadoBotao_C == 1) {
    digitalWrite(saida, HIGH);
  }
  else {
    digitalWrite(saida, LOW);
  }
}

// operador lógico NAND
void operador_NAND() {
  if (estadoBotao_A == 1 && estadoBotao_B == 1 && estadoBotao_C == 1) {
    digitalWrite(saida, LOW);
  }
  else {
    digitalWrite(saida, HIGH);
  }
}


// operador lógico NOR
void operador_NOR() {
  if (estadoBotao_A == 1 || estadoBotao_B == 1 || estadoBotao_C == 1) {
    digitalWrite(saida, LOW);
  }
  else {
    digitalWrite(saida, HIGH);
  }
}

// Expressão (A+B)*C
void expressao_1() {
  if (estadoBotao_A == 1 || estadoBotao_B == 1) {
    if (estadoBotao_C == 1) {
      digitalWrite(saida, HIGH);
    }
    else {
      digitalWrite(saida, LOW);
    }
  }
  else {
    digitalWrite(saida, LOW);
  }
}

// Expressão A+(B*C)
void expressao_2() {
  if (estadoBotao_A == 1) {
    digitalWrite(saida, HIGH);
  }
  else if (estadoBotao_B == 1 && estadoBotao_C == 1) {
    digitalWrite(saida, HIGH);
  }
  else {
    digitalWrite(saida, LOW);
  }
}

// Expressão ~(A*B)*C
void expressao_3() {
  if (estadoBotao_A != 1 || estadoBotao_B != 1) {
    if (estadoBotao_C == 1) {
      digitalWrite(saida, HIGH);
    }
    else {
      digitalWrite(saida, LOW);
    }
  }
  else {
    digitalWrite(saida, LOW);
  }
}
