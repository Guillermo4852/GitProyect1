// Exercise 7. Variables and Types
#include <stdio.h>
 int main(intargc, char*argv[]) // Here we declare the argv variable
 {
 int distance = 100; // Here we declare the integer variables aleatory called "distance"
 float power = 2.345f;//Declare a float variable called "power" that means with floating numbers
 double super_power = 56789.4532;// Declare a double variable called "super power"
 char initial = 'A'; // Declare a char variable called "A"
 char first_name[] = "Zed"; //Declare a argv variable called "zed"
 char last_name[] = "Shaw"; // Declare a argv variable called "Shaw"

printf("You are %d miles away.\n", distance); // We tell to the user how many miles away it has
printf("You have %f levels of power.\n", power); // We tell to the user how many levels of power it has
printf("You have %f awesome super powers.\n", super_power); // we tell to the user how many super powers it has
printf("I have an initial %c.\n", initial); // Here we tell to the user the initial that before declared
printf("I have a first name %s.\n", first_name); //Here we tell to the user the first argv variable declared
printf("I have a last name %s.\n", last_name);//Here we tell to the user the second argv variable declared
printf("My whole name is %s %c. %s.\n",first_name, initial, last_name); // Here we tell to the user the complete name

int bugs = 100; // here we declare a integer variable
double bug_rate = 1.2; // here we declare a double variable

printf("You have %d bugs at the imaginary rate of %f.\n",bugs, bug_rate);// here we tell to the user "you have n bugs at the rate of n"

long universe_of_defects = 1L * 1024L * 1024L * 1024L; // we declare a long variable called "universe of defects"
printf("The entire universe has %ld bugs.\n",universe_of_defects);// Here we tell to the user how many bugs has the entire universe

double expected_bugs = bugs * bug_rate; // Declare a double variable called "expected bugs" multiplyting bugs and bug rate as the result expected bugs
printf("You are expected to have %f bugs.\n",expected_bugs); //here we tell to the user how many expected bugs has

double part_of_universe = expected_bugs /universe_of_defects; //we declare a double variable called "part of universe" divding expected bugs by universe of defects
printf("That is only a %e portion of the universe.\n",part_of_universe); //Here we tell to the user the portion of the universe has

// demos of something weird
char nul_byte = '\0'; //declare a char variable called "null byte"
int care_percentage = bugs * nul_byte; //Here declare a integer variable "care percentage" multiplying bugs by nul bytes
printf("Which means you should care %d%%.\n",care_percentage); // Here we tell to the user how much carefuly has

return 0;
}
//                          Bellow extra credits

//    Make the number you assign to universe_of_defects various sizes until you get a warning from the compiler.
long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L; //multiplying by 8 times you get a system warning

//    What do these really huge numbers actually print out?
//the more decimals it has; The entire universe will have 0 errors.

//    Change long to unsigned long and try to find the number that makes that one too big.
// Step 1
unsigned long universe_of_defects = 1UL * 1024UL * 1024UL * 1024UL; // Change everything as L by UL to be unsigned long
printf("The entire universe has %lu bugs.\n", universe_of_defects);//Tell to the user the same question but with the change of unigned long
// Step 2
// include limits.h and use ULONG_MAX to get the max value of unsigned long and plus 1 more to make it bigger than the ULONG_MAX:
unsigned long universe_of_defects = ULONG_MAX + 1UL;//here we declare the maximun value plus 1 to make it the most bigger
printf("The entire universe has %lu bugs.\n", universe_of_defects);// here just we say wat's is the bigger number

//    Go search online to find out what unsigned does.
// unsigned means the integer doesn't have negative posibilities

//    Try to explain to yourself (before I do in the next exercise) why you can multiply a char and an int.
//It can be multiply because c allow do it changing the value kind to int
