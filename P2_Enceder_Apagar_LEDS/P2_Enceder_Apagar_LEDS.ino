//  Curso Arduino - Asociación de Robótica Aplicada y Ciencias de la Tecnología.
//  Segundo Programa: -Hola Mundo-
//  El objetivo de este programa es declarar pines de salida y enviar señales 
//    que encenderán y apagarán LED's.

//  Created by Claudio Ibáñez Garduño on 20/08/15.
//  Copyright (c) 2015 Claudio Ibáñez Garduño. All rights reserved.
//  Proyectos, Cursos, Asesorias: 6643-6200 ó 55-6255-7612
//  robotica.unam@gmail.com

void setup() {
  Serial.begin(9600); //Iniciamos comunicación con Serial.
  pinMode(11,OUTPUT);//Declaramos el tipo de pin (Salida) 
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {

  digitalWrite(11,HIGH);  //  Mandamos una señal que encenderá el led que esté conectado
  digitalWrite(6,LOW);                          
  delay(1000);  //Pausa de 1 Segundo.

  digitalWrite (11,LOW);
  digitalWrite(6,HIGH);
  delay(1000);

  
}
