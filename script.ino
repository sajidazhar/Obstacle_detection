/*
  This code should work to get warning cross the buzzer when something be closer than 0.5 meter
  Circuit is ultrasonic sensor and buzzer +5v and Arduino uno is used
  we use three ultrasonic sensors
*/
// Define pins for ultrasonic and buzzer
int const trigPin1 = 10;
int const echoPin1= 9;
int const trigPin2 = 5;
int const echoPin2 = 6;
int const trigPin3 = 7;
int const echoPin3 = 8;
int const trigPin4 = 3;
int const echoPin4 = 4;
int const buzzPin = 2;


void setup()
{
  pinMode(trigPin1, OUTPUT); // trig pin will have pulses output
  pinMode(echoPin1, INPUT); // echo pin should be input to get pulse width
  pinMode(trigPin2, OUTPUT); // trig pin will have pulses output
  pinMode(echoPin2, INPUT); // echo pin should be input to get pulse width
  pinMode(trigPin3, OUTPUT); // trig pin will have pulses output
  pinMode(echoPin3, INPUT); // echo pin should be input to get pulse width
   pinMode(trigPin4, OUTPUT); // trig pin will have pulses output
  pinMode(echoPin4, INPUT); // echo pin should be input to get pulse width
  pinMode(buzzPin, OUTPUT); // buzz pin is output to control buzzering
  Serial.begin(9600);
}

void loop()
{
  // Duration will be the input pulse width and distance will be the distance to the obstacle in centimeters
  int duration1, distance1;
  // Output pulse with 1ms width on trigPin
  digitalWrite(trigPin1, HIGH); 
  delay(1);
  digitalWrite(trigPin1, LOW);
  // Measure the pulse input in echo pin
  duration1 = pulseIn(echoPin1, HIGH);
  // Distance is half the duration devided by 29.1 (from datasheet)
   
  distance1 = (duration1/2) / 29.1;
  Serial.print(distance1);
  // if distance less than 0.4 meter and more than 0 (0 or less means over range) 
    if (distance1 <= 40 && distance1 >= 0) {
      // Buzz
      digitalWrite(buzzPin, HIGH);
      delay(500);
      digitalWrite(buzzPin, LOW);
      delay(600);
    } else {
      // Don't buzz
      digitalWrite(buzzPin, LOW);
    }
    // Waiting 60 ms won't hurt any one
    delay(60);

  // Duration will be the input pulse width and distance will be the distance to the obstacle in centimeters
  int duration2, distance2;
  // Output pulse with 1ms width on trigPin
  digitalWrite(trigPin2, HIGH); 
  delay(1);
  digitalWrite(trigPin2, LOW);
  // Measure the pulse input in echo pin
  duration2 = pulseIn(echoPin2, HIGH);
  // Distance is half the duration devided by 29.1 (from datasheet)
   
  distance2 = (duration2/2) / 29.1;
  Serial.print(distance2);
  // if distance less than 0.5 meter and more than 0 (0 or less means over range) 
    if (distance2 <= 50 && distance2 >= 0) {
      // Buzz
      digitalWrite(buzzPin, HIGH);
      delay(400);
      digitalWrite(buzzPin, LOW);
      delay(400);
      digitalWrite(buzzPin, HIGH);
      delay(400);
      digitalWrite(buzzPin, LOW);
      delay(550);
      
    } else {
      // Don't buzz
      digitalWrite(buzzPin, LOW);
    }
    // Waiting 60 ms won't hurt any one
    delay(60);

  // Duration will be the input pulse width and distance will be the distance to the obstacle in centimeters
  int duration3, distance3;
  // Output pulse with 1ms width on trigPin
  digitalWrite(trigPin3, HIGH); 
  delay(1);
  digitalWrite(trigPin3, LOW);
  // Measure the pulse input in echo pin
  duration3 = pulseIn(echoPin3, HIGH);
  // Distance is half the duration devided by 29.1 (from datasheet)
   
  distance3 = (duration3/2) / 29.1;
  Serial.print(distance3);
  // if distance less than 0.5 meter and more than 0 (0 or less means over range) 
    if (distance3 <= 50 && distance3 >= 0) {
      // Buzz
      digitalWrite(buzzPin, HIGH);
      delay(400);
      digitalWrite(buzzPin, LOW);
      delay(400);
      digitalWrite(buzzPin, HIGH);
      delay(400);
      digitalWrite(buzzPin, LOW);
      delay(400);
      digitalWrite(buzzPin, HIGH);
      delay(400);
      digitalWrite(buzzPin, LOW);
      delay(600);
    } else {
      // Don't buzz
      digitalWrite(buzzPin, LOW);
    }
    // Waiting 60 ms won't hurt any one
    delay(60);
     int duration4, distance4;
  // Output pulse with 1ms width on trigPin
  digitalWrite(trigPin4, HIGH); 
  delay(1);
  digitalWrite(trigPin4, LOW);
  // Measure the pulse input in echo pin
  duration4 = pulseIn(echoPin4, HIGH);
  // Distance is half the duration devided by 29.1 (from datasheet)
   
  distance4 = (duration4/2) / 29.1;
  Serial.print(distance4);
  // if distance less than 0.1 meter and more than 0 (0 or less means over range) 
    if (distance4 <= 10 && distance4 >= 0) {
      // Buzz
      digitalWrite(buzzPin, HIGH);
      delay(380);
      digitalWrite(buzzPin, LOW);
      delay(380);
      digitalWrite(buzzPin, HIGH);
      delay(380);
      digitalWrite(buzzPin, LOW);
      delay(380);
      digitalWrite(buzzPin, HIGH);
      delay(380);
      digitalWrite(buzzPin, LOW);
      delay(380);
      digitalWrite(buzzPin, HIGH);
      delay(380);
      digitalWrite(buzzPin, LOW);
      delay(800);
    } else {
      // Don't buzz
      digitalWrite(buzzPin, LOW);
    }
    // Waiting 60 ms won't hurt any one
    delay(60);
}

