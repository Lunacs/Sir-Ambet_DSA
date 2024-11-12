#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int series;
    bool validSeries = false;

    do
    {
        printf("What series to show? (1-20): ");
        if (scanf("%d", &series) != 1)
        {
            // Clear input if not a number
            while (getchar() != '\n')
                ;
            printf("Invalid input: Please enter a number\n");
            continue;
        }

        switch (series)
        {
        case 1:
        { // S = 1 + 1/2 + 1/3 ……..1/10
            double sum = 1;
            printf("\nS = 1");
            for (int i = 2; i <= 10; i++)
            {
                printf(" + 1/%d", i);
                sum += (1 / ((double)i));
            }
            printf("\nS = %.4lf", sum);
            validSeries = true;
            break;
        }
        break;
        case 2:
        { // P= (1*2) + (2 *3) + (3* 4)+…….(8 *9) +(9 *10)
            int sum = 0;
            printf("P = ");
            for (int i = 1; i < 10; i++)
            {
                if (i == 1)
                {
                    printf(" (%d*%d)", i, i + 1);
                }
                else
                {
                    printf(" + (%d*%d)", i, i + 1);
                }

                sum += (i * (i + 1));
            }
            printf("\nP = %d", sum);
            validSeries = true;
            break;
        }
        break;
        case 3:
        { // Q= ½ + ¾ +5/6 +….13/14
            double sum = 0;
            printf("Q = ");

            for (int i = 1; i < 14; i += 2)
            {
                if (i == 1)
                {
                    printf(" (%d/%d)", i, i + 1);
                }
                else
                {
                    printf(" + (%d/%d)", i, i + 1);
                }
                sum += (((double)i) / (((double)i) + 1));
            }
            printf("\nQ = %.4lf", sum);
            validSeries = true;
            break;
        }
        break;
        case 4:
        { // S = 2/5 + 5/9 + 8/13….n
            double sum = 0;
            int terms, numerator = 2, denominator = 5;
            do
            {
                printf("How many terms: ");
                scanf("%d", &terms);
            } while (terms <= 0);

            printf("S = ");

            for (int i = 1; i <= terms; i++)
            {
                if (i == 1)
                {
                    printf(" %d/%d", numerator, denominator);
                }
                else
                {
                    printf(" + %d/%d", numerator, denominator);
                }

                sum += (double)numerator / denominator;
                numerator += 3;
                denominator += 4;
            }
            printf("\nS = %.4lf", sum);
            validSeries = true;
            break;
        }
        break;
        case 5:
        { // S = x + x2 + x3 + x4......+ x9 + x10
            int num, power;
            double sum = 0;
            do
            {
                printf("Input a number: ");
                scanf("%d", &num);
            } while (num <= 0);

            printf("S = ");
            for (int i = 1; i <= 10; i++)
            {
                if (i == 1)
                {
                    printf(" %d^%d", num, i);
                }
                else
                {
                    printf(" + %d^%d", num, i);
                }

                power = (double)pow(num, i);
                sum += (double)power;
            }
            printf("\nS = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;

        case 6:
        { // P= x + x3/3 + x5/5 + x7/7……………n terms
            int num, limit;
            double sum = 0, power = 0;
            do
            {
                printf("Input a number: ");
                scanf("%d", &num);
            } while (num <= 0);
            do
            {
                printf("Input a limit: ");
                scanf("%d", &limit);
            } while (limit <= 0);

            // Print series
            for (int i = 1; i <= limit * 2; i += 2)
            {
                if (i == 1)
                {
                    printf("%d", num);
                }
                else
                {
                    printf(" + %d^%d/%d", num, i, i);
                }

                power = pow(num, i);
                sum += power / i;
            }

            printf("\nP = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 7:
        { // S= (13 *1) + (12 * 2)……(1 *13)
            double sum;
            for (int i = 1; i <= 13; i++)
            {
                if (i == 1)
                {
                    printf("S = (%d * %d) ", 14 - i, i);
                }
                else
                {
                    printf("+ (%d * %d) ", 14 - i, i);
                }
                sum = (double)(sum + ((14 - i) * i));
            }
            printf("\nS = %lf\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 8:
        { // S = 1 + 1/(2^2) + 1/ (3^3) + 1/(4^4) + 1/(5^5)
            double sum = 0, power = 0;
            for (int i = 1; i <= 5; i++)
            {
                if (i == 1)
                {
                    printf("%d", i);
                }
                else
                {
                    printf("+ 1/%d^%d", i, i);
                }

                power = pow(i, i);
                sum += 1.0 / power;
            }
            printf("\nS = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;

        case 9:
        { // S = 1/1! + 1/2! + 1/3! ……………+1/n!
            int n;
            double sum = 0;

            do
            {
                printf("Enter number of terms: ");
                scanf("%d", &n);
            } while (n < 0);

            // Calculate series sum
            for (int i = 1; i <= n; i++)
            {
                sum += 1.0 / factorial(i);

                // Print term (for visualization)
                printf("1/%d!", i);
                if (i < n)
                    printf(" + ");
            }

            printf("\nS = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 10:
        { // S = 1 + 1/3! + 1/5!+……..n terms
            int n;
            double sum = 0;

            do
            {
                printf("Enter number of terms: ");
                scanf("%d", &n);
            } while (n < 0);

            // Calculate series sum
            for (int i = 1; i <= n * 2; i += 2)
            {

                if (i == 1)
                {
                    printf("%d", i);
                }
                else
                {
                    printf(" + 1/%d!", i);
                }

                sum += 1.0 / factorial(i);
            }

            printf("\nS = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 11:
        { // S = 1 + (1+2) +(1+2+3) + (1+2+3+4)……………+(1+2+3…….20)
            int sum = 0;
            printf("S = ");
            for (int i = 1; i <= 20; i++)
            {
                // Print opening parenthesis except for first term
                if (i > 1)
                    printf(" + (");
                int term_sum = 0;
                for (int j = 1; j <= i; j++)
                {
                    term_sum += j;
                    printf("%d", j);
                    if (j < i)
                        printf("+");
                    term_sum += j;
                }
                // Close parenthesis except for first term
                if (i > 1)
                    printf(")\n");

                sum += term_sum;
            }
            printf("\nS = %d\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 12:
        { // S = x + x2/2! + x3/3! + x4/4!.....+x10/10!
            int input;
            do
            {
                printf("Input a number: ");
                scanf("%d", &input);
            } while (input <= 0);

            double sum = 0, power = 0;
            printf("S = ");
            // Calculate series sum
            for (int i = 1; i <= 10; i++)
            {

                if (i == 1)
                {
                    printf("%d", input);
                }
                else
                {
                    printf(" + %d^%d/%d!", input, i, i);
                }

                power = pow(input, i);
                sum += (double)power / factorial(i);
            }

            printf("\nS = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 13:
        { // P = x/2! + x2/3! +…….x9/10!
            int input;
            do
            {
                printf("Input a number: ");
                scanf("%d", &input);
            } while (input <= 0);

            double sum = 0, power = 0;
            printf("P = ");
            // Calculate series sum
            for (int i = 1; i < 10; i++)
            {

                if (i == 1)
                {
                    printf("%d/%d!", input, i + 1);
                }
                else
                {
                    printf(" + %d^%d/%d!", input, i, i + 1);
                }

                power = pow(input, i);
                sum += (double)power / factorial(i + 1);
            }

            printf("\nP = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 14:
        { // S = 1 – 2 + 3 - 4………. + 9 – 10

            int sum = 0;
            for (int i = 1; i <= 10; i++)
            {

                if (i % 2 == 1)
                {
                    printf("%d - ", i);
                    sum += i;
                }
                else if (i % 2 == 0)
                {
                    if (i == 10)
                    {
                        printf("%d", i);
                    }
                    else
                    {
                        printf("%d + ", i);
                    }
                    sum -= i;
                }
            }
            printf("\nS = %d\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 15:
        { // S = 1 -2^2 + 3^2 - 4^2………. +9^ 2 - 10^2
            int sum = 0, power = 0;
            for (int i = 1; i <= 10; i++)
            {

                if (i % 2 == 1)
                {
                    if (i == 1)
                    {
                        printf("%d - ", i);
                    }
                    else
                    {
                        printf("%d^2 - ", i);
                    }
                    power = (double)i * i;
                    sum += power;
                }
                else
                {
                    if (i == 10)
                    {
                        printf("%d^2", i);
                    }
                    else
                    {
                        printf("%d^2 + ", i);
                    }
                    power = (double)i * i;
                    sum -= power;
                }
            }
            printf("\nS = %d\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 16: // MALI YUNG PROB O SOLUTION?
        {        // S = 1/(1 + 2) + 3/(3 + 5)……15/(15 + 16)
            double sum = 0;
            int denominator = 2;
            printf("S = ");
            for (int i = 1; i <= 15; i += 2)
            {
                sum += (double)i / (i + denominator);
                printf("%d/(%d + %d)", i, i, denominator);
                if (i < 15)
                    printf(" + ");

                denominator += 3;
            }
            printf("\nS = %.4lf", sum);
            validSeries = true;
            break;
        }
        break;
        case 17:
        { // S = 1 +x2/2! – x4/4! + x6/6!....n
            int input, terms;
            do
            {
                printf("Input a number: ");
                scanf("%d", &input);
            } while (input <= 0);
            do
            {
                printf("how many terms? ");
                scanf("%d", &terms);
            } while (terms <= 0);

            double S = 1; // Start with the first term, which is 1
            int sign = 1; // Alternates the sign, starting with positive

            printf("1"); // Print the first term, which is 1

            // Loop to add terms from x^2/2! to the nth term
            for (int k = 1; k <= terms; k++)
            {
                int exponent = 2 * k;
                double term = sign * pow(input, exponent) / factorial(exponent);

                // Print the current term with the appropriate sign and format
                if (sign > 0)
                {
                    printf(" + x^%d/%d!", exponent, exponent);
                }
                else
                {
                    printf(" - x^%d/%d!", exponent, exponent);
                }

                S += term;
                sign *= -1; // Toggle the sign
            }

            printf("\nS = %.4lf", S); // Print a newline after the series expression
            validSeries = true;
            break;
        }
        break;
        case 18:
        { // S = 1 + ( 1 + 2) + (1+2+3)……..(1+2+3+4…..20)
            int sum = 0;

            // For each term up to n
            for (int i = 1; i <= 20; i++)
            {
                int termSum = 0;
                printf("Term %d: ", i);

                // Calculate and print numbers from 1 to i
                for (int j = 1; j <= i; j++)
                {
                    if (j == 1)
                    {
                        printf("("); // Opening parenthesis at start of term
                    }
                    termSum += j;
                    printf("%d", j);
                    if (j < i)
                    {
                        printf("+");
                    }
                    if (j == i)
                    {
                        printf(")"); // Closing parenthesis at end of term
                    }
                }
                printf(" = %d\n", termSum);
                sum += termSum;
            }
            printf("\nSum of series = %d\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 19:
        { // S = 1 + x + x2/2 + x3/3…….+xn/n
            double x, sum = 1.0;
            int terms;

            // Get input
            printf("Enter value of x: ");
            scanf("%lf", &x);
            printf("How many terms? ");
            scanf("%d", &terms);

            // Print first term
            printf("S = 1");

            // Calculate and add remaining terms
            for (int i = 1; i <= terms; i++)
            {
                double term = pow(x, i) / i;
                sum += term;
                if (i == 1)
                {
                    printf(" + %.lf", x);
                }
                else
                {
                    printf(" + %.lf^%d/%d", x, i, i); // Print each term
                }
            }

            printf("\nSum = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;
        case 20:
        { // S = 1 * 3/ 2 * 4 * 5 + 2 * 4 / 3 * 5 * 6 + 3 * 5/ 4 * 6 * 7……..n * (n+2)/ (n+1) * (n+3) * (n+4)
            int input;
            do
            {
                printf("Enter number of terms: ");
                scanf("%d", &input);
            } while (input <= 0);

            double sum = 0;
            for (int i = 1; i <= input; i++)
            {
                double term = (i * (double)(i + 2)) / ((i + 1) * (i + 3) * (i + 4));

                // Print term
                printf("Term %d: %d * %d / %d * %d * %d = %.4lf\n",
                       i,
                       i, i + 2,            // Numerator
                       i + 1, i + 3, i + 4, // Denominator
                       term);

                sum += term;
            }
            printf("\nS = %.4lf\n", sum);
            validSeries = true;
            break;
        }
        break;
        default:
            printf("Invalid: The number of series should be 1-20. Try Again!\n");
            validSeries = false;
            break;
        }
    } while (!validSeries);

    return 0;
}
