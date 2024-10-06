// Strong Password Checker

// A password is considered strong if the below conditions are all met:

// It has at least 6 characters and at most 20 characters.
// It contains at least one lowercase letter, at least one uppercase letter, and at least one digit.
// It does not contain three repeating characters in a row (i.e., "Baaabb0" is weak, but "Baaba0" is strong).
// Given a string password, return the minimum number of steps required to make password strong. if password is already strong, return 0.

// In one step, you can:

// Insert one character to password,
// Delete one character from password, or
// Replace one character of password with another character.
 

// Example 1:
// Input: password = "a"
// Output: 5

// Example 2:
// Input: password = "aA1"
// Output: 3

// Example 3:
// Input: password = "1337C0d3"
// Output: 0
 

// Constraints:

// 1 <= password.length <= 50
// password consists of letters, digits, dot '.' or exclamation mark '!'.

int strongPasswordChecker(char* password) 
{
    int len = strlen(password);
    int lowercase = 0, uppercase = 0, digit = 0;
    int missing = 3;
    int repeat = 0;

    if (len < 6)
    {
        missing = missing + (6 - len);
    }
    else if (len > 20) 
    {
        missing = missing +  (len - 20);
    }

    for (int i = 0; i < len; i++)
    {
        if (islower(password[i]))
        {
            lowercase = 1;
        } else if (isupper(password[i])) 
        {
            uppercase = 1;
        } else if (isdigit(password[i])) 
        {
            digit = 1;
        }
    }
    missing = missing -  (lowercase + uppercase + digit);

    for (int i = 0; i < len - 2; i++)
    {
        if (password[i] == password[i + 1] && password[i] == password[i + 2])
        {
            repeat++;
            i += 2; 
        }
    }

    int steps = missing;
    if (repeat > 0)
    {
        steps = (steps > repeat) ? steps : repeat;
    }
    return steps;
}

int main() {
    char password[] = "aA1";
    int steps = passCheck(password);
    printf(" STEPS NEEDED: %d\n", steps);
    return 0;
}