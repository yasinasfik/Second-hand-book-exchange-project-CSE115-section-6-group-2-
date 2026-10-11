
#include <stdio.h>

int main(void)
{
    int  age , Book_Code;
    double Original_price, Condition_factor, Price_after_age, Resale_price;

    printf("\n====================================================\n");
    printf("+                                                  +\n");
    printf("+             SECOND-HAND BOOK EXCHANGE            +\n");
    printf("+                                                  +\n");
    printf("====================================================\n");
    printf("\nWelcome to our Second-Hand Book Exchange!\n");
    printf("We help students find books at lower prices.\n\n");
    printf("----------------------------------------------------\n");
    printf("                     MAIN MENU                      \n");
    printf("----------------------------------------------------\n");

    printf("1. Add a book\n");
    printf("2. Show book price\n");
    printf("3. Sell a book\n");
    printf("4. Find a book\n");
    printf("5. Show book value\n");
    printf("6. Save and load data\n");

    printf("====================================================\n");
    printf("                  BOOK INFORMATION                  \n");
    printf("====================================================\n");

    printf("Enter book code: ");
    scanf("%d", &Book_Code);

    printf("Enter original price: ");
    scanf("%lf", &Original_price);

    printf("Enter book age in years: ");
    scanf("%d", &age);

    printf("Enter condition factor (0.70, 0.80, 0.90): ");
    scanf("%lf", &Condition_factor);

   Price_after_age = Original_price - (Original_price * 0.15 * age);

   Resale_price = Price_after_age * Condition_factor;
   

    printf("\n====================================================\n");
    printf("                    YOUR RESULT                     \n");
    printf("====================================================\n");
    printf("Book Code\t\t: %d\n", Book_Code);
    printf("Book Name\t\t: Basics of C book\n");
    printf("Original Price\t\t: %.2f Taka\n", Original_price);
    printf("Book Age\t\t: %d Years\n", age);
    printf("Condition Factor\t: %.2f\n\n", Condition_factor);

    printf("----------------------------------------------------\n");
    printf("                    PRICE REPORT                    \n");
    printf("----------------------------------------------------\n");

    printf("Devaluation Rate\t: 15%% per year\n");
    printf("Price After Age\t\t: %.2f Taka\n", Price_after_age);
    printf("Final Resale Price\t: %.2f Taka\n", Resale_price);

    printf("\nThe resale price depends on the age and condition.\n\n");

    printf("====================================================\n");
    printf("                   BOOK CONDITIONS                  \n");
    printf("====================================================\n");
    printf("Grade 1 : Poor Condition\n");
    printf("Grade 2 : Average Condition\n");
    printf("Grade 3 : Good Condition\n\n");
    printf("A book in good condition can have a higher price.\n");
    printf("Older books usually have less value.\n\n");
    printf("====================================================\n");
    printf("                  STOCK REPORT                      \n");
    printf("====================================================\n");
    printf("Total Books Listed\t: 1\n");
    printf("Books Sold\t\t: 0\n");
    printf("Books Not Sold\t\t: 1\n");
    printf("Original Stock Value\t: %.2f Taka\n", Original_price);
    printf("Resale Stock Value\t: %.2f Taka\n\n", Resale_price);
    printf("This report shows the value of one sample book.\n\n");
    printf("====================================================\n");
    printf("                    SHOP RULES                      \n");
    printf("====================================================\n");

    printf("1. Every book has its own code.\n");
    printf("2. The age of a book affects its price.\n");
    printf("3. The condition affects the resale value.\n");
    printf("4. Every book must have a minimum price.\n");
    printf("6. Sold books are removed from unsold stock.\n\n");

    printf("====================================================\n");
    printf("                  ABOUT VERSION 2                   \n");
    printf("====================================================\n");

    printf("This version takes input from the user.\n");
    printf("It uses variables and arithmetic expressions.\n");
    printf("It calculates the resale price of a book.\n\n");

    printf("====================================================\n");
    printf("                     THANK YOU                      \n");
    printf("====================================================\n");

    printf("Thank you for using our book exchange!\n\n");

    printf("====================================================\n");
    printf("                   END OF PROGRAM                   \n");
    printf("====================================================\n");

    return 0;
}
