//Uncomment wifi code in order to use that function

#include <ESP8266WiFi.h>

const int IR_RX_PIN = A0;
const int BUZZER_PIN = 4;
const int BUILTIN_LED2 = 16;//GPIO16
//const int IR_LED_PIN = 13;

//WiFiServer server(80); //Initialize the server on Port 80

void setup() {

  /*WiFi.mode(WIFI_AP); //Our ESP8266-12E is an AccessPoint 
  WiFi.softAP("Hello_IoT", "12345678"); // Provide the (SSID, password); . 
  server.begin(); // Start the HTTP Server*/
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IR_RX_PIN, INPUT); // Initialize the IR_RX_PIN pin as an input 
  pinMode(BUZZER_PIN, OUTPUT); // Initialize the BUZZER_PIN pin as an ouput 
  pinMode(BUILTIN_LED2, OUTPUT); // Initialize the BUILTIN_LED pin as an output
 // pinMode(IR_LED_PIN, OUTPUT); // Initialize the BUILTIN_LED pin as an output
  //digitalWrite(IR_LED_PIN, HIGH); //Initial state is OFF


}

void loop() {
  // put your main code here, to run repeatedly:

  /*//UI code
  WiFiClient client = server.available();
  if (!client) { 
  return; 
  } 
  //Looking under the hood 
  Serial.println("Somebody has connected :)");  
  
  //Read what the browser has sent into a String class and print the request to the monitor
  String request = client.readStringUntil('\r');
  //Looking under the hood 
  Serial.println(request);
  
  if (request.indexOf("/OFF") != -1){ 
  digitalWrite(IR_LED_PIN, LOW); }
  else if (request.indexOf("/ON") != -1){ 
  digitalWrite(IR_LED_PIN, HIGH); 
  }

  // Prepare the HTML document to respond and add buttons:
  String s = "HTTP/1.1 200 OK\r\n";
  s += "Content-Type: text/html\r\n\r\n";
  s += "<!DOCTYPE HTML>\r\n<html>\r\n";
  s += "<br><input type=\"button\" name=\"bi\" value=\"Turn IR LED ON\" onclick=\"location.href='/ON'\">";
  s += "<br><br><br>";
  s += "<input type=\"button\" name=\"bi\" value=\"Turn IR LED OFF\" onclick=\"location.href='/OFF'\">";
  s += "</html>\n";
  
  //Serve the HTML document to the browser.
  client.flush(); //clear previous info in the stream 
  client.print(s); // Send the response to the client 
  delay(1); 
  Serial.println("Client disonnected"); //Looking under the hood*/

  //IR Sensor Code
  int val;
  val = analogRead(IR_RX_PIN);     // read the input pin
  Serial.print(val);
  Serial.println();
  if(val >= 712){
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(BUILTIN_LED2, HIGH);
  }
  else{
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(BUILTIN_LED2, LOW);
  }
  delay(10);
 

}



