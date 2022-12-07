#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 Test Commit

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
    int
    float
    bool
    double
    char
    unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{

    int x = 5;
    int y = 10;
    int cutoff = 23000;

    float weight = 12.08933f;
    float height = 7.9935f;
    float width = 88.4458f;

    bool isOn = true;
    bool hasMass = false;
    bool mono = true;

    double price = 11.99;
    double taxRate = 8.75;
    double gpa = 3.14;

    char finalGrade = 'a';
    char tier = 's';
    char firstLetter = 'c';
    
    unsigned int filterCutoff = 128;
    unsigned int rate = 255;
    unsigned int variation = 0;
    
    ignoreUnused(x, y, cutoff, weight, height, width, isOn, hasMass, mono, price, taxRate, gpa, finalGrade, tier, firstLetter, filterCutoff, rate, variation);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 


 1) bool takeVote(int numberOfVotes, bool forOrAgainst)
    {
        ignoreUnused(numberOfVotes, forOrAgainst);
        return {};
    }
 
 2) char getGrade(double examAvg = 87.50, double homeworkAvg = 93.75)
    {
        ignoreUnused(examGrade, homeworkGrade);
        return {};
    }
 
 3) float getVolume(float height, float width, float depth)
    {
        ignoreUnused(height, width, depth);
        return {};
    }

 4) bool startTraktor(bool brakeOn = true, bool hasKey = true)
    {
        ignoreUnused(brakeOn, hasKey);
        return {};
    }

 5) bool creditCheck(int creditScore = 700, bool hasScore = true)
    {
        ignoreUnused(creditScore, hasScore);
        return {};
    }

 6) char setTier(double winRate = 51.47, double pickRate = 6.71, double banRate = 10.22)
    {
       ignoreUnused(winRate, pickRate, banRate);
        return {};
    }

 7) float takeAvg(int test1Grade, int test2Grade)
    {
        ignoredUnused(test1Grade, test2Grade);
        return {};
    }

 8) char setColor(unsinged int levelRed, unsinged int levelGreen, unsinged int levelBlue)
    {
        ignoreUnused(levelRed, levelGreen, levelBlue);
        return {};
    }

 9) bool startLaptop(int batteryLevel, bool powerSwitchOnOff)
    {
        ignoreUnused(batteryLevel, powerSwitchOnOff);
        return {};
    }

 10) unsigned int setVolume(unsigned int level = 50, unsigned int gain = 25, bool boost = true)
     {
         ignoreUnused(level, gain, boost);
         return {};
     }

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    1) auto voteResult = takeVote(127, true);
    
    2) char letterGrade = getGrade(67.93, 86.75);
    
    3) auto volume = getVolume(17.994f, 8.655f, 0.01125f);
    
    4) auto traktorRunning = startTraktor(true, false);
    
    5) bool creditCheckPassed = creditCheck(800, true);
    
    6) char tier = setTier(47.89, 1.29, 0.87);
    
    7) auto avg = takeAvg(76, 87);
    
    8) auto color = getColor(127, 0, 230);
    
    9) auto laptopOnOff = startLaptop(100, true);
    
    10) auto Volume = setVolume(50, 25, true);
    
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
