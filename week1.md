# Week 1

### Labs

In the labs this week, we completed several foundational activities to familiarise ourselves with Arduino and basic electronics:

- **Lab 1:** **LED Blink**

The first project I tackled was the classic LED blink. I assembled the circuit on a breadboard, and when I uploaded my initial sketch, watching the LED blink in sync with my code felt incredibly satisfying!

![lab1-led blink](https://github.com/user-attachments/assets/ab5c30d0-6717-4917-a10b-192c98d457e0)
  
[Watch Video](link_to_video_1)

---

- **Lab 2:** **Button and LED**
  
- #### lab 2.1 Series circuit
  
![lab2-1](https://github.com/user-attachments/assets/dc22d8dd-5836-45a3-a1e7-09a1dfc5ff0f)

[Watch Video](link_to_video_1)

---

- #### Lab 2.2 First interactive circuit

![lab2-2](https://github.com/user-attachments/assets/f060e82f-da3b-455b-8474-e704b001dc42)

[Watch Video](link_to_video_1)

---

- #### lab 2.3 Parallel circuit

![lab2-3](https://github.com/user-attachments/assets/49f7035d-219a-442d-ac3c-4b3f6c842573)

[Watch Video](link_to_video_1)

---

- #### lab 2.4 SPACESHIP  INTERFACE



---

- **Lab 3:** **LED Exploration**

- #### lab 3.1 Dual LED Control

<img width="1374" alt="lab3-1" src="https://github.com/user-attachments/assets/0f76b111-402f-4f1e-ade1-37cb63c434c6">

[Watch Video](link_to_video_1)


💻 Code：Turn it on and off
   
  ```cpp
        digitalWrite(led2,HIGH);
        delay(100);
        digitalWrite(led2,LOW);
        delay(100);
   ```
      
💻 Code: explore the delay function

  ```cpp
        digitalWrite(led1, HIGH);  // Turn on the first LED (pin 9)
        delay(100);                // Wait for 100 milliseconds
        digitalWrite(led1, LOW);   // Turn off the first LED
        delay(100);                // Wait for 100 milliseconds
        digitalWrite(led2, HIGH);  // Turn on the second LED (pin 8)
        delay(1000);               // Wait for 1 second
        digitalWrite(led2, LOW);   // Turn off the second LED
        delay(1000);               // Wait for 1 second
  ```
💻 Code: explore the delay function
        Code to change the delay and create different patterns

   ```cpp
         digitalWrite(led1, HIGH);  // Turn on the first LED (pin 9)
         digitalWrite(led2, LOW);   // Turn off the second LED (pin 8)
         delay(100);                // Wait for 100 milliseconds
         digitalWrite(led1, LOW);   // Turn off the first LED (pin 9)
         digitalWrite(led2, HIGH);  // Turn on the second LED (pin 8)
         delay(500);                // Wait for 1 second
   ```

---

🧠 Conclusion

   - Difference in blinking frequency: Different delay intervals directly affect the blinking frequency and rhythm of the LEDs.Shorter delays will cause the LEDs to alternate more quickly, while longer delays will make the blinking slower.
   By using different combinations of delays, a variety of visual effects can be created. 🕙
   - Changes in visual patterns: Shorter delays make the LED appear to blink rapidly, while longer delays create a smoother effect.

---

- #### lab 3.2 Advanced LED Control

<img width="909" alt="lab3-2" src="https://github.com/user-attachments/assets/285b5c35-ab93-4d11-a36b-6278dadf2700">

[Watch Video](link_to_video_1)

💻 Code：Fade-In with PWM:
     
  ```cpp
         int led1 = 3;
         int led2 = 5;
         int led3 = 6;

         void setup() {
           pinMode(led1,OUTPUT);
           pinMode(led2,OUTPUT);
           pinMode(led3,OUTPUT);

         }

         void loop() {
           for (int brightness = 0; brightness <= 255; brightness++) {
             analogWrite(led1, brightness);
             analogWrite(led2, brightness);
             analogWrite(led3, brightness);
             delay(10);

         }
           for (int brightness = 0; brightness <= 255; brightness--) {
             analogWrite(led1, brightness);
             analogWrite(led2, brightness);
             analogWrite(led3, brightness);
             delay(10);
         }
   ```

---

- #### lab 3.3 RGB LED

<img width="1447" alt="截屏2024-10-15 19 22 01" src="https://github.com/user-attachments/assets/9a9aea3b-df61-4ae4-907d-4f0ffccae712">

[Watch Video](link_to_video_1)


💻 Code：Fade-In with PWM**:
    
  ```cpp
         int redPin = 9;
         int greenPin = 10;
         int bluePin = 11;

         void setup() {
 
           // Set the red, green, and blue pins as output pins
           pinMode(redPin, OUTPUT);
           pinMode(greenPin, OUTPUT);
           pinMode(bluePin, OUTPUT);
         }


         void setColor(int redvalue, int greenvalue, int bluevalue) {
        
           // Values are inverted because analogWrite uses 0-255 for PWM, where 0 is fully on and 255 is fully off
           analogWrite(redPin, 255 - redvalue);   
           analogWrite(greenPin, 255 - greenvalue); 
           analogWrite(bluePin, 255 - bluevalue);
         }

         void loop() {

           // Set the color to red
           setColor(255, 0, 0);  
           delay(1000);  // Wait for 1 second
  

           // Set the color to orange
           setColor(255, 132, 0); 
           delay(1000);  // Wait for 1 second
  

           // Set the color to yellow
           setColor(255,195,0); 
           delay(1000);  // Wait for 1 second
  
           // Set the color to greenish yellow
           setColor(123, 255, 0); 
           delay(1000);  // Wait for 1 second
  
           // Set the color to blue
           setColor(0,9,255);
           delay(1000);  // Wait for 1 second

           // Set the color to purple
           setColor(255,0,255);
           delay(1000);  // Wait for 1 second
         }
  ```
---

### Reading & Reflections

This week, my readings profoundly shaped my understanding of material choices and design context in my creative practice. _An Introduction to Discard Studies_ highlighted how the act of discarding materials can perpetuate societal inequalities, prompting me to reflect on how my material selections might affect project accessibility. _Creative Upcycling_ inspired me to consider repurposing old electronics, emphasizing the importance of making technology both accessible and environmentally sustainable. Meanwhile, _The Psychology of Data Visualization_ underscored the impact of design decisions on data perception, which I plan to incorporate into my project visualizations. Collectively, these insights have deepened my awareness of the interconnectedness between materials, social responsibility, and effective design, and I am eager to apply them in my future work.

---







