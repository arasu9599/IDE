#define PIN_LED 7

unsigned int count, toggle;

void setup() {
    pinMode(PIN_LED, OUTPUT);

    count = toggle = 0;
    digitalWrite(PIN_LED, toggle);
}

void loop() {
    delay(1000);
    
    for (count = 0; count < 10; count++) {
        toggle = !toggle;
        digitalWrite(PIN_LED, toggle);
        delay(100);
    }
    
    toggle = !toggle;
    digitalWrite(PIN_LED, toggle);

    while (1) {
    }
}
