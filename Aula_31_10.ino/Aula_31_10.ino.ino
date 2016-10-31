void setup() {
  // put your setup code here, to run once:

  //Caso atribua valor decimal em variavel inteira, o valor será truncado

char valorX;
char valorY;
char valorZ;

Serial.begin(9600); // Boud-Rate para porta COM (1200 - 115200) Taxas baixas para distancia maiores e vice-versa.

Serial.print("Grupo de Pesquisa Arduino - ESALQ/USP"); // usado para "printar" valores

valorX = "X";
valorY = "Y";
valorZ = "+"; // "&&" = E() do excel "||" = OU() do excel

Serial.print("\tValorX = "); //"\t" é para ajustar com um "tab" entre valores
Serial.print(valorX,BIN); // "BIN" para mostrar o valor binario da variavel

Serial.print("\tValorY = "); //"\t" é para ajustar com um "tab" entre valores
Serial.print(valorY,BIN);

Serial.print("\tValorZ = "); //"\t" é para ajustar com um "tab" entre valores
Serial.print(valorZ,BIN);

}

void loop() {
  // put your main code here, to run repeatedly:

  

}
