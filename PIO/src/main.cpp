#include <Arduino.h>
#include <USBHost_t36.h>

// put function declarations here:
void pwm(int);

// put variable declarations here:
int led_status = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 20; i++)
  {
    pwm(i);
    delay(16);
  }
  for (int i = 20; i >= 0; i--)
  {
    pwm(i);
    delay(16);
  }
}

// put function definitions here:
void pwm(int pwmval) {
    analogWrite(LED_BUILTIN, pwmval);
}
