/*
 * Blinks an LED at a given pin to SOS
 * Code is modularized for ease of use
 * By: Hiep Le
 */

// variables
int led_pin = 7;

void setup() {
  // pin setup
  pinMode(led_pin, OUTPUT);
}

void loop() {
  // SOS blinking
  blink_n_times(led_pin, 3, 200, 200);
  blink_n_times(led_pin, 3, 600, 200);
  blink_n_times(led_pin, 3, 200, 200);
  delay(1000);
}

// blinks an led at the given pin n times
void blink_n_times(int led, int n, int timeOn, int timeOff) {
  for(int i=0; i<n; i++) {
    blink_led(led, timeOn, timeOff);
  }
}

// blinks an led at the given pin, on for timeOn amount of time and off for timeOff amount of time
void blink_led(int led, int timeOn, int timeOff) {
  digitalWrite(led, HIGH);
  delay(timeOn);
  digitalWrite(led, LOW);
  delay(timeOff);
}

