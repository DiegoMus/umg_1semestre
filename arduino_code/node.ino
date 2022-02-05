int boton = 2;
int led = 13;
int value = 0;

void setup(){
    Serial.begin(9600);
    pinMode(boton, INPUT);
    pinMode(led, OUTPUT);
}

void loop(){
  
        value = digitalRead(boton);
        if (value == HIGH){
            Serial.println("Esta onda se prendió");
        }else{
            Serial.println("chingale");
        }

        
    
    delay(100);
}