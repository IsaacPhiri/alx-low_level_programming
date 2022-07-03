# 0x03-debugging

##### Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As one becomes a more advanced programmer and an industry engineer, he/she will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually. Therefore this directory has a number of project files that showcase a number of challenges that were accomplished by manually debugging.

**Tasks and Files**

## Task 0.

``` 
#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
```

- Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.
- You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.
- You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
- You are not allowed to add or remove lines of code, you may change only one line in this task.
- Solutions : `0-main.c` and `main.h`

## Task 1.

```
#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
```

- Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
- Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
- You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.
- Solution : `1-main.c`

## Task 2.

```
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
```

- Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.
- Line count will not be checked for this task.
- Solution : `2-largest_number.c` `main.h`

## Task 3.

```
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
```

- Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.
- Line count will not be checked for this task.
- You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
- You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
- Solution : `3-print_remaining_days.c` `main.h`
