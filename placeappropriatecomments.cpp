// Place appropriate comments //
// Comments do not make up for bad code
// Check to see if user can access
if ((user.flags & ACCESS_FLAG) && user.rank > 3) {}
if (user.HasAccess()) {}

// Bad comments: Redundant or Useless comments
// Utility function for setting the light, passing in on or off returns its current value
void SetLight(bool isOn);

public:
  Car(); // Car Constructor

  
if (Load())
{
  ...
}
else
{
  // If it reaches here means some things are wrong
}

// Bad comments: Misleading comments
// Returns if light is on
bool GetLightStatus()
{
  if (!light.IsOn())
  {
    ResetLight();
  }

  return light.IsOn();
}

// Bad comments: Variable or Function over comment
// Can the car engine sub system run selected motor
if (car.GetSubSystem().CheckCompatible(GetSelected()))
 
// Engine engine = car.GetSubSystem();
// Motor selectedMotor = GetSelected();
//  if (engine.CheckCompatible(selectedMotor))

// Good comments : Legal comments
// Copyright (C) 2019 by BusyFolio. All rights reserved.

// Good comments: Explanation of intent
// We arrange accordingly to name, addr, state as backend requires this format
concatDataString += data.name;
concatDataString += data.addr;
concatDataString += data.state;

// Good comments: Clarification
if (sourceName.compare(targetName) < 0) // sourceName is shorter than targetName
{...}
else if (sourceName.compare(targetName) > 0) // sourceName is longer than targetName
{...}
else if (sourceName.compare(targetName) == 0) // sourceName is equal to targetName
{...}

// Good comments: Warning comments
// Do not run this test unless you have few hours to spare
void TestWithBigData()
{...}

// Good comments: TODO Comments
void Update()
{
  ...
  // TODO: Remove this lock when threading issue in this function is fixed 
  mutex.lock();
  ...
}

////////////////////////////////
