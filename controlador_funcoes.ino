void controlador_funcoes(int opcao) {
  switch (opcao) {
    case 0:
      operador_AND();
      ler_Dysplay(opcao);
      break;
    case 1:
      operador_NAND();
      ler_Dysplay(opcao);
      break;
    case 2:
      operador_OR();
      ler_Dysplay(opcao);
      break;
    case 3:
      operador_NOR();
      ler_Dysplay(opcao);
      break;
    case 4:
      expressao_1();
      ler_Dysplay(opcao);
      break;
    case 5:
      expressao_2();
      ler_Dysplay(opcao);
      break;
    case 6:
      expressao_3();
      ler_Dysplay(opcao);
      break;
    default:
      break;
  }
}
