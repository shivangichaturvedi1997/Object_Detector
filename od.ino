int P3=3,P4=4,a,b;

void setup() {
  //  setup code here, to run once:
pinMode(P3,OUTPUT);
pinMode(P3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // main code here, to run repeatedly:
int S1=analogRead(1);
int S2=analogRead(2);

Serial.println(S1);
Serial.println(S2);

if (S1>100)
a=1;
if (S1<100)
a=0;
if (S2>100)
b=1;
if (S2<100)
b=0;
if ((a==0) && (b==0)==1)
{
forward();
}
if ((a==0) && (b==1)==1)
{
right();
}
if ((a==1) && (b==0)==1)
{
left();
}
if ((a==1) && (b==1)==1)
{
forward();
}
}

void forward()
{
digitalWrite(P3, HIGH);
digitalWrite(P4,HIGH);
}
void right()
{
digitalWrite(P3, HIGH);
digitalWrite(P4,LOW);
}
void left()
{
digitalWrite(P3, LOW);
digitalWrite(P4,HIGH);
}
