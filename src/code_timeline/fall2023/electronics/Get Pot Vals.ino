constexpr int fingerCount {5};
const int fingerPotPins[1] = {"A1"};
const int fingerPins[fingerCount] = {1, 2, 3, 4, 5};
const String getPotValsSignal = "p";
int currPotVal {0};
int currAngles[fingerCount]; 

int currTime {0};
int positionFingerPrevTime {0};
int getPotValsPrevTime {0};
// 0 means no delay
constexpr int dt {0};

int motorPin = 3;;

void moveFinger(int voltage, const int fingerPin);
int convertPotValToAngle(int potVal);
int getCurrAngle(int fingerPin);
int* getTargetAngles();
void positionOneFinger(int targetAngle, int currAngle, int fingerPin);
void positionAllFingers(int targetAngle[], int currAngles[], int fingerPins[]);


void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  for (int i = 0; i < 1; ++i)
    pinMode(fingerPotPins[i], OUTPUT);
  Serial.begin(9600);
  delay(100);
}


void loop() {
  // put your main code here, to run repeatedly:
  currTime = millis();
  if (currTime - getPotValsPrevTime >= dt)
  {
    getPotValsPrevTime = currTime;
    if (Serial.available() > 0 && Serial.readString().equals(getPotValsSignal)) {
      Serial.println("I GOT THE SIGNAL");
      currAngles[0] = analogRead(fingerPotPins[0]);
      Serial.println(currAngles[0]);

      // this is only assumiing there is one finger (one target angle)
      int targetAngle = Serial.readString().toInt();
      positionOneFinger(targetAngle, currAngles[0], motorPin);
    }
  }
  

  
  // if (currTime - getPotValsPrevTime <= 20) 
  //   positionAllFingers(getTargetAngles(), currAngles, fingerPins);
}

// will position finger towards the target angle wanted

void positionAllFingers(int targetAngles[], int currAngles[], int fingerPins[])
{
  for (int i = 0; i < fingerCount; ++i)
  {
    positionOneFinger(targetAngles[i], currAngles[i], fingerPins[i]);
  }
}

void positionOneFinger(int targetAngle, int currAngle, int fingerPin)
{
  const int threshold {5};
  if (abs(currAngle - targetAngle) < threshold) 
  {
    // does not move finger
    moveFinger(0, fingerPin);
    return;
  }
  if (currAngle < targetAngle)
  // moves finger in the positive direction
    moveFinger(100, fingerPin);
  else if (currAngle > targetAngle ) 
  // moves finger in the negative direction 
    moveFinger(-100, fingerPin);
  return; 
}

// will move the fingers by directly accessing motors
void moveFinger(int voltage, const int fingerPin)
{
  if (voltage == 0)
    Serial.println("DONT MOVE");
  else if (voltage > 0) 
    Serial.println("MOVE UP");
  else if (voltage < 0)
    Serial.println("MOVE DOWN");
  return;
}


// Will convert the received potentiometer value into the angle the current fingle is positioned at
int convertPotValToAngle(int potVal)
{
  // convert the potval into angle below
  return 1;
}

int getCurrAngle(int fingerPin)
{
  int potVal = analogRead(fingerPotPins[fingerPin]);
  return convertPotValToAngle(potVal);
}

int* getTargetAngles()
{
  // access angles from computer and return them
  int tmp[fingerCount] = {1, 2, 3, 4, 5};
  return tmp;
}