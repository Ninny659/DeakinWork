int led1 = D6; //declaring Led1 as variable on D6

int jordan[22] = { 0,1,1,1,2,1,1,1,2,0,1,0,2,1,0,0,2,0,1,2,1,0 }; // an array for name elements of different

int count = sizeof(jordan)/sizeof(jordan[0]); // getting the size of the array if someone was to add or take away values

void setup() {

    pinMode(led1, OUTPUT); //declaring Led1 as an output
    
}

void Dash()
{
    digitalWrite(led1, HIGH);
    delay(500); // delaying for .5 seconds for dash
    digitalWrite(led1, LOW);
    return;
}

void Dot()
{
    digitalWrite(led1, HIGH);
    delay(150); // delaying for .15 seconds for dot
    digitalWrite(led1, LOW);
    return; 

}

void space()
{
    delay(2500); // delaying for 2.5 seconds for spaces in my name 
    return;
}


void loop() {
    // To blink the LED, first we'll turn it on...
    for (int i = 0; i < count; i++) // counting the for loop 
    {   
        if (jordan[i] == 0) Dot(); //dots are represented with 0s
        else if (jordan[i] == 1) Dash(); // dashes are represented with 1s
        else space(); //spaces are declared as int 2, they are a space inbetween letters of names
    }

}

