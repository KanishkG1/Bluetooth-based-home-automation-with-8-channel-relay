/*
follow me on social media if you want to !!!!!

linktr.ee/kanishkgulati
*/
String inputs;
#define relay1 2 //Connect relay 1 to pin 9
#define relay2 3 //Connect relay 2 to pin 8
#define relay3 4 //Connect relay 3 to pin 7
#define relay4 5 //Connect relay 4 to pin 6
#define relay5 6 //Connect relay 5 to pin 5
#define relay6 7 //Connect relay 6 to pin 4
#define relay7 8 //Connect relay 7 to pin 3
#define relay8 9 //Connect relay 8 to pin 2
#define relay9 10 //Connect rela 9 to pin 5
#define relay10 11 //Connect relay 10 to pin 4
#define relay11 12 //Connect relay 11 to pin 3
#define relay12 13 //Connect relay 12 to pin 2


void setup()
{
Serial.begin(9600); //Set rate for communicating with phone
pinMode(relay1, OUTPUT); //Set relay 1 as an output
pinMode(relay2, OUTPUT); //Set relay 2 as an output
pinMode(relay3, OUTPUT); //Set relay 3 as an output
pinMode(relay4, OUTPUT); //Set relay 4 as an output
pinMode(relay5, OUTPUT); //Set relay 5 as an output
pinMode(relay6, OUTPUT); //Set relay 6 as an output
pinMode(relay7, OUTPUT); //Set relay 7 as an output
pinMode(relay8, OUTPUT); //Set relay 8 as an output
    pinMode(relay9, OUTPUT); //Set relay 9 as an output
pinMode(relay10, OUTPUT); //Set relay 10 as an output
pinMode(relay11, OUTPUT); //Set relay 11 as an output
    pinMode(relay12, OUTPUT); //Set relay 12 as an output

    
    
digitalWrite(relay1, HIGH); //Switch relay 1 off
digitalWrite(relay2, HIGH); //Swtich relay 2 off
digitalWrite(relay3, HIGH); //Switch relay 3 off
digitalWrite(relay4, HIGH); //Swtich relay 4 off
digitalWrite(relay5, HIGH); //Switch relay 5 off
digitalWrite(relay6, HIGH); //Swtich relay 6 off
digitalWrite(relay7, HIGH); //Switch relay 7 off
digitalWrite(relay8, HIGH); //Swtich relay 8  off
    digitalWrite(relay9, HIGH); //Switch relay 9 off
digitalWrite(relay10, HIGH); //Swtich relay 10 off
digitalWrite(relay11, HIGH); //Switch relay 11 off
digitalWrite(relay12, HIGH); //Swtich relay 12 off
}
void loop()
{
while(Serial.available()) //Check if there are available bytes to read
{
delay(10); //Delay to make it stable
char c = Serial.read(); //Conduct a serial read
if (c == '#'){
break; //Stop the loop once # is detected after a word
}
inputs += c; //Means inputs = inputs + c
}
if (inputs.length() >0)
{
Serial.println(inputs);

if(inputs == "A")
{ 
digitalWrite(relay1, LOW);
}
else if(inputs == "a")
{
digitalWrite(relay1, HIGH);
}
else if(inputs == "B")
{
digitalWrite(relay2, LOW);
}
else if(inputs == "b")
{
digitalWrite(relay2, HIGH);
}
else if(inputs == "C")
{ 
digitalWrite(relay3, LOW);
}
else if(inputs == "c")
{
digitalWrite(relay3, HIGH);
}
else if(inputs == "D")
{
digitalWrite(relay4, LOW);
}
else if(inputs == "d")
{
digitalWrite(relay4, HIGH);
}
else if(inputs == "E")
{ 
digitalWrite(relay5, LOW);
}
else if(inputs == "e")
{
digitalWrite(relay5, HIGH);
}
else if(inputs == "F")
{
digitalWrite(relay6, LOW);
}
else if(inputs == "f")
{
digitalWrite(relay6, HIGH);
}
else if(inputs == "G")
{ 
digitalWrite(relay7, LOW);
}
else if(inputs == "g")
{
digitalWrite(relay7, HIGH);
}
else if(inputs == "H")
{
digitalWrite(relay8, LOW);
}
else if(inputs == "h")
{
digitalWrite(relay8, HIGH);
}
        
  else if(inputs == "I")
{ 
digitalWrite(relay9, LOW);
}
else if(inputs == "i")
{
digitalWrite(relay9, HIGH);
}
else if(inputs == "J")
{
digitalWrite(relay10, LOW);
}
else if(inputs == "j")
{
digitalWrite(relay10, HIGH);
}
else if(inputs == "K")
{ 
digitalWrite(relay11, LOW);
}
else if(inputs == "k")
{
digitalWrite(relay11, HIGH);
}
else if(inputs == "L")
{
digitalWrite(relay12, LOW);
}
else if(inputs == "l")
{
digitalWrite(relay12, HIGH);
}
inputs="";
}
}
/*
Kanishk Gulati 
(kanishkgulati2004@gmail.com)


*/