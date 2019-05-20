#include <vector>
#include <string>
using namespace std;

// Names should be revealing its intention
int d; // elapsed time in days
int elapsedTimeInDays;

// Avoid disinformation 
vector<int> accountList;
vector<int> accounts;

int o1;
int O1;
int origin;
int newOrigin;

// Create meaningful distinctions 
int a1;
int a2;
int source;
int destination;

// Use pronounceable names 
string ymdhm; // year, month, day, hour, minute
string timeStamp;

// Use Searchable Names 
int number;
int numberOfStudents;

// Use encoding when appropriate
int count; // global variable
int gCount;

struct Number {};
Number phoneString; // Forgot to update the name!
Number phoneNumber;

// Avoid internal joke names
void HolyHandGrenade() {};
void ShutdownAllSystem() {};

// Use domain names 
bool IsSimilarWhenReversed(string input);
bool IsPalindrome(string input);

// Remain consistent with concepts 
string GetName();
string FetchAddress();
string RetrieveUnit();
string GetName();
string GetAddress();
string GetUnit();

// Add Meaningful Context  
string name;
string city;
string state;

Address addr;
addr.name;
addr.city;
addr.state;

