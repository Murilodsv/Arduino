void setup() {
  // put your setup code here, to run once:

  //Caso atribua valor decimal em variavel inteira, o valor será truncado

String valorX;
String valorY;
String valorZ;

Serial.begin(9600); // Boud-Rate para porta COM (1200 - 115200) Taxas baixas para distancia maiores e vice-versa.

Serial.print("Grupo de Pesquisa Arduino - ESALQ/USP \ln"); // usado para "printar" valores

valorX = "Murilo";
valorY = "Vianna";
valorZ = valorX + valorY; // "&&" = E() do excel "||" = OU() do excel

Serial.print("\tValorX = "); //"\t" é para ajustar com um "tab" entre valores
Serial.print(valorX); // "BIN" para mostrar o valor binario da variavel

Serial.print("\tValorY = "); //"\t" é para ajustar com um "tab" entre valores
Serial.print(valorY);

Serial.print("\tValorZ = "); //"\t" é para ajustar com um "tab" entre valores
Serial.print(valorZ);

}

void loop() {
  // put your main code here, to run repeatedly:

  

}
