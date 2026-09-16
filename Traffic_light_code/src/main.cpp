#include <Arduino.h>

#define DELAY_TEN 10000
#define DELAY_FIVE 5000

typedef struct{
    uint8_t red;
    uint8_t yellow;
    uint8_t green;
} traffic_light_t;

traffic_light_t first_route = {PA5, PA4, PA3};
traffic_light_t second_route = {PB0, PA7, PA6};

// uint8_t led_line [6] = {first_route.green, first_route.yellow, first_route.red, second_route.green, second_route.yellow, second_route.red};
// uint8_t tow_dim [3][2] = {{first_route.red, second_route.green}, {first_route.yellow, second_route.yellow}, {first_route.green, second_route.red}};

// long  lastTime= 0;

// int mode  = 0;

void setup() {
    pinMode(first_route.red, OUTPUT);
    pinMode(first_route.yellow, OUTPUT);
    pinMode(first_route.green, OUTPUT);
    pinMode(second_route.red, OUTPUT);
    pinMode(second_route.yellow, OUTPUT);
    pinMode(second_route.green, OUTPUT);
}

void loop () {
    // Traffic Light
    digitalWrite(first_route.green, HIGH);
    digitalWrite(second_route.red, HIGH);
    delay(DELAY_TEN);
    digitalWrite(first_route.green, LOW);
    digitalWrite(first_route.yellow, HIGH);
    delay(DELAY_FIVE);
    digitalWrite(first_route.yellow, LOW);
    digitalWrite(second_route.red, LOW);
    digitalWrite(first_route.red, HIGH);
    digitalWrite(second_route.green, HIGH);
    delay(DELAY_TEN);
    digitalWrite(second_route.green, LOW);
    digitalWrite(second_route.yellow, HIGH);
    delay(DELAY_FIVE);
    digitalWrite(first_route.red, LOW);
    digitalWrite(second_route.yellow, LOW);


    // Another mode
    // long timer = millis();

    // if (timer - lastTime > 6500) {
    //     lastTime = timer;
    //     mode += 1;

    //     // if(mode > 12) mode = 0;
    // }

    // switch (mode){

//     case 0 :
//         // belink 
//         for(uint8_t i = 0; i < 6;i++ ){
//                 digitalWrite(led_line[i], HIGH);
//         }

//         delay(500);

//         for(uint8_t i = 0; i < 6;i++ ){
//                 digitalWrite(led_line[i], LOW);
//         }

//         delay(500);
//     break;
    
//     case 1 :
//         /// flasher
//         for(uint8_t i = 0; i < 3;i++ ){
//                 digitalWrite(led_line[i], HIGH);
//         }

//         delay(100);

//         for(uint8_t i = 0; i < 3;i++ ){
//                 digitalWrite(led_line[i], LOW);
//         }

//         for(uint8_t i = 3; i < 6;i++ ){
//                 digitalWrite(led_line[i], HIGH);
//         }

//         delay(100);

//         for(uint8_t i = 3; i < 6;i++ ){
//                 digitalWrite(led_line[i], LOW);
//         }

//     break;

//     case 2 :
//         // mask  bit 
//         for(uint8_t i = 0; i < 10; i++){
//             digitalWrite(led_line[1], HIGH);
//             digitalWrite(led_line[3], HIGH);
//             digitalWrite(led_line[5], HIGH);
//             delay(150);
//             digitalWrite(led_line[1], LOW);
//             digitalWrite(led_line[3], LOW);
//             digitalWrite(led_line[5], LOW); 
//             digitalWrite(led_line[0], HIGH);
//             digitalWrite(led_line[2], HIGH);
//             digitalWrite(led_line[4], HIGH);
//             delay(150);
//             digitalWrite(led_line[0], LOW);
//             digitalWrite(led_line[2], LOW);
//             digitalWrite(led_line[4], LOW);
//         }

//     break;

//     case 3 :
//         // increment
//         for(uint8_t i = 0; i < 3;i++){
//             digitalWrite(tow_dim[i][0], HIGH);
//             digitalWrite(tow_dim[i][1], HIGH);
//             delay(150);
//             digitalWrite(tow_dim[i][0], LOW);
//             digitalWrite(tow_dim[i][1], LOW);
//         }

//     break;
    
//     case 4 :
//         // triple 
//         for(uint8_t i = 0; i < 3;i++){
//             digitalWrite(tow_dim[i][0], HIGH);
//             digitalWrite(tow_dim[i][1], HIGH);
//             delay(100);
//         }
//         delay(100);
//         for(uint8_t i = 2; i <3 ;i--){
//             digitalWrite(tow_dim[i][0], LOW);
//             digitalWrite(tow_dim[i][1], LOW);
//             delay(100);
//         }

//     break;

//     case 5 :
//         // mid blink
//         for(uint8_t i = 0; i < 10; i++){
//             digitalWrite(tow_dim[0][0], HIGH);
//             digitalWrite(tow_dim[0][1], HIGH);
//             delay(200);
//             digitalWrite(tow_dim[0][0], LOW);
//             digitalWrite(tow_dim[0][1], LOW);

//             digitalWrite(tow_dim[1][0], HIGH);
//             digitalWrite(tow_dim[1][1], HIGH);
//             digitalWrite(tow_dim[2][0], HIGH);
//             digitalWrite(tow_dim[2][1], HIGH);
//             delay(200);
//             digitalWrite(tow_dim[1][0], LOW);
//             digitalWrite(tow_dim[1][1], LOW);
//             digitalWrite(tow_dim[2][0], LOW);
//             digitalWrite(tow_dim[2][1], LOW);
//         }

//     break;

//     case 6 :
//         // double adder
//             for(uint8_t i = 0; i < 10; i++){
//                 digitalWrite(tow_dim[2][0], HIGH);
//                 digitalWrite(tow_dim[1][0], HIGH);
//                 delay(150);
//                 digitalWrite(tow_dim[2][0], LOW);
//                 digitalWrite(tow_dim[1][0], LOW);
//                 delay(150);
//                 digitalWrite(tow_dim[0][0], HIGH);
//                 digitalWrite(tow_dim[0][1], HIGH);
//                 delay(150);
//                 digitalWrite(tow_dim[0][0], LOW);
//                 digitalWrite(tow_dim[0][1], LOW);
//                 delay(150);
//                 digitalWrite(tow_dim[1][1], HIGH);
//                 digitalWrite(tow_dim[2][1], HIGH);
//                 delay(150);
//                 digitalWrite(tow_dim[1][1], LOW);
//                 digitalWrite(tow_dim[2][1], LOW);
//                 delay(150);
//         }

//     break;

//     case 7 :
//         // random tow_dim
//         for(uint8_t i = 0; i < 20; i++){
//             long num = random(0,3);
//             digitalWrite(tow_dim[num][0], HIGH);
//             digitalWrite(tow_dim[num][1], HIGH);
//             delay(150);
//             digitalWrite(tow_dim[num][0], LOW);
//             digitalWrite(tow_dim[num][1], LOW);
//             delay(150);
//         }

//     break;

//     case 8 :
//         // linear
//         for(uint8_t i =0; i < 6; i++){
//             digitalWrite(led_line[i], HIGH);
//             delay(100);
//         }
//         for(uint8_t i =0; i < 6; i++){
//             digitalWrite(led_line[i], LOW);
//             delay(100);
//         }
//         for(uint8_t i = 5; i < 6; i--){
//             digitalWrite(led_line[i], HIGH);
//             delay(100);
            
//         }
//         for(uint8_t i = 5; i  < 6; i--){
//             digitalWrite(led_line[i], LOW);
//             delay(100);
            
//         }

//     break;

//     case 9 :
//         // counter binary 
//         for(uint8_t number = 0; number  < 64; number++){

//             if(number & (1u << 0) ){
//                 digitalWrite(led_line[0], HIGH);
//             }
//             else{
//                 digitalWrite(led_line[0], LOW);
//             }

//             if(number & (1u << 1) ){
//                 digitalWrite(led_line[1], HIGH);
//             }
//             else{
//                 digitalWrite(led_line[1], LOW);
//             }

//             if(number & (1u << 2) ){
//                 digitalWrite(led_line[2], HIGH);
//             }
//             else{
//                 digitalWrite(led_line[2], LOW);
//             }

//             if(number & (1u << 3) ){
//                 digitalWrite(led_line[3], HIGH);
//             }
//             else{
//                 digitalWrite(led_line[3], LOW);
//             }

//             if(number & (1u << 4) ){
//                 digitalWrite(led_line[4], HIGH);
//             }
//             else{
//                 digitalWrite(led_line[4], LOW);
//             }

//             if(number & (1u << 5) ){
//                 digitalWrite(led_line[5], HIGH);
//             }
//             else{
//                 digitalWrite(led_line[5], LOW);
//             }

//             delay(100);

//         }
    
//     break;

//     case 11 :
//         // random bit
//         for(uint8_t i = 0; i < 20; i++){
//             uint8_t  number = random(0, 6);

//             digitalWrite(led_line[number], HIGH);
//             delay(100);
//             digitalWrite(led_line[number], LOW);
//             delay(100);

//         }
//     break;
    
//     case 12 :
//         // pwm
//         for(uint8_t i = 0; i < 255; i += 5){
//             for(uint8_t t = 0;  t < 6; t++){
//                 analogWrite(led_line[t], i);
//             }
//             delay(50);
//         }

//         for(uint8_t i = 255; i > 5; i -= 5){
//             for(uint8_t t = 0;  t < 6; t++){
//                 analogWrite(led_line[t], i);
//             }
//             delay(50);
//         }

//         break;
// }

}

