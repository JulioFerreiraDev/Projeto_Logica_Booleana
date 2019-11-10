void ler_Dysplay(int opcao) {
  //Limpa a tela
  lcd.clear();
  //Posiciona o cursor na coluna 3, linha 0;
  lcd.setCursor(3, 0);
  switch (opcao) {
    case 0:
      //Envia o texto entre aspas para o LCD
      lcd.print("Logica");
      lcd.setCursor(3, 1);
      lcd.print(" AND");
      delay(100);
      break;
    case 1:
      lcd.print("Logica");
      lcd.setCursor(3, 1);
      lcd.print(" NAND");
      delay(100);
      break;
    case 2:
      lcd.print("Logica");
      lcd.setCursor(3, 1);
      lcd.print(" OR");
      delay(100);
      break;
    case 3:
      lcd.print("Logica");
      lcd.setCursor(3, 1);
      lcd.print(" NOR");
      delay(100);
      break;
    case 4:
      lcd.print("Expressao");
      lcd.setCursor(3, 1);
      lcd.print(" (A+B)*C");
      delay(100);
      break;
    case 5:
      lcd.print("Expressao");
      lcd.setCursor(3, 1);
      lcd.print(" A+(B*C)");
      delay(100);
      break;
    case 6:
      lcd.print("Expressao");
      lcd.setCursor(3, 1);
      lcd.print(" ~(A*B)*C");
      delay(100);
      break;  
    default:
      break;
  }

}
