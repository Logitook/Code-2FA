void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println(newcode());
    delay(60000);
}

String newcode() {
    String code = "";
    for (int i = 0; i < 6; i++) {
        code += random(0, 9);
        if (i > 1 && i < 3) {
            code += " "; 
        }
    }
    return code;
}