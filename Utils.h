#ifndef Utils_h
#define Utils_h

#include <string>
#include <vector>
/**
 *Converts an integer to a string.  Though many believe this should be a built in function to c++ like "atoi(char*)",
 *it is not.  So, we created one.  It is not very efficient.
 *
 * "itoa" must return a string which means eiter a string must be created in the function and returned, or, a string
 * must be passed in and the result put in that string parameter.  We chose the latter because of memory management
 * concerns.  The function returns the answer so that this function can be used in line.
 *
 * Parameters: answer -- the string that contains the string representation of the integer i.
 *             i      -- the integer value to be converted
 * Precondition: none
 * Postcondition: atoi(answer) = i AND answer = result;
 */
std::string& itoa(std::string& answer, int i);

/**
 *Returns whether a given character is a letter
 *Parameters: c -- the character to be evaluated
 *Precondition: none
 *Postcondition: none
 */
bool isAlpha(char c);

/**
 *Returns whether a given character is a number
 *Parameters: c -- the character to be evaluated
 *Precondition: none
 *Postcondition: none
 */
bool isNum(char c);

/**
 *Returns whether a given character is alpha-numeric
 *Parameters: c -- the character to be evaluated
 *Precondition: none
 *Postcondition: none
 */
bool isAlphaNum(char c);

std::vector<std::string> split(std::string string, char delimiter);

#endif
