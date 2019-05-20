// Keep Functions Simple //
// They should be small
// Function does lots of check and operation
int ValidateAddress(const Address& addr) 
{
  if (addr.firstName.empty())
  {
    printf("Error! First name empty!");
    return ERROR_FIRST_NAME;
  }

  if (addr.lastName.empty())
  {
    printf("Error! Last name empty!");
    return ERROR_LAST_NAME;
  }

  if (addr.state.empty())
  ...
}

// One improvement is to wrap similar categories up so this function becomes simpler
int ValidateAddress(const Address& addr) 
{
  int errorCode = CheckAddressName(addr);
  if (errorCode != ERROR_NONE)
  {
    return errorCode;
  }

  if (addr.state.empty())
  ...
}

// Do One Thing
void CreateObjectAndRunAll();
void AllocateMemory();
void CreateObjects();
void RunObjectsAction();
void OutputObjects();

// The Stepdown Rule
void OutputEgg(Egg egg)
{
}

FriedEgg Cooker::Cook(Egg egg)
{
}

void PrepareEgg()
{
  Egg egg = TakeEgg(); // 1st level of abstraction, call function
  FriedEgg friedEgg = Cooker::Cook(egg); // 2nd level of abstraction, class function operation
  string eggName = friedEgg.GetName();
  eggName.append('\n'); // 3rd level of abstraction, direct operation
  OutputEgg(friedEgg); // 1st level of abstraction
}

Egg TakeEgg()
{
}

// The stepdown rule cleaned 
void PrepareEgg()
{
  Egg egg = TakeEgg(); 
  FriedEgg friedEgg = FryEgg(egg);
  InitializeFriedEggData(friedEgg);
  OutputEggData(friedEgg);
}

Egg TakeEgg()
{
}

FriedEgg FryEgg(Egg egg)
{
}

void InitializeFriedEggData(FriedEgg friedEgg)
{
}

void OutputEggData(FriedEgg friedEgg)
{
}

// Have little or no arguments
void StoreUserData(string name, int age, float height, string nationality);
void StoreUserData(USerData data);

// Be clear on input and output
void GetValue(int &val);
int GetValue(); // The more common form

void CalculateAngles(float &cosAngle, float &sinAngle);
void CalculateAngles(float &outCosAngle, float &outSinAngle);

// Do not use flag arguments
RunLeft(true);
const bool shouldPerformAction = true;
RunLeft(shouldPerformAction);

// Should have no side effects 
bool CheckHasInitialized(Object &object)
{
  if (!object.IsInitialized())
  {
    object.Initialize();
  }

  return object.IsInitialized();
}

bool CheckHasInitialized(Object &object)
{
  return object.IsInitialized();
}

// Separate command and query 
if (SetValue(25))
{
}

SetValue(25);
if (HasExistingValue())
{
}

// Don’t repeat yourself 
void MoveFront()
{
  ActivateMuscle();
  RaiseLeg();
  PlaceLegInfront();
}

void MoveBack()
{
  ActivateMuscle();
  RaiseLeg();
  PlaceLegBehind();
}

void MoveFront()
{
  PreMove();
  PlaceLegInfront();
}

void MoveBack()
{
  PreMove();
  PlaceLegBehind();
}

void PreMove()
{
  ActivateMuscle();
  RaiseLeg();
}

///////////////////////////