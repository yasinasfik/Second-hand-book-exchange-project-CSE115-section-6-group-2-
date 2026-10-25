
#include <stdio.h>
int age, Book_Code;
double Original_price, Condition_factor;
double Price_after_age, Resale_price;

void banner(void);
void show_menu(void);
void read_input(void);
void calculation(void);
void print_result(void);
void show_conditions(void);
void show_stock_report(void);
void show_shop_rules(void);
void end(void);

void banner(void)
{
    printf("\n====================================================\n");
    printf("+\t\tSECOND-HAND BOOK EXCHANGE\t   +\n");
    printf("====================================================\n");
    printf("\nWelcome to our Second-Hand Book Exchange!\n");
    printf("We help students find books at lower prices.\n\n");}


void show_menu(void)
{
    printf("----------------------------------------------------\n");
    printf("\t\tMAIN MENU\t\t\n");
    printf("----------------------------------------------------\n");
printf("1. Add a book\n");
     printf("2. Show book price\n");
    printf("3. Sell a book\n");
      printf("4. Find a book\n");
    printf("5. Show book value\n");
    printf("6. Save and load data\n");
}

void read_input(void)
{
    printf("====================================================\n");
    printf("\t\tBOOK INFORMATION\t\t\n");
    printf("====================================================\n");
printf("Enter book code: ");
scanf("%d", &Book_Code);
   printf("Enter original price: ");
    scanf("%lf", &Original_price);
    printf("Enter book age in years: ");
    scanf("%d", &age);
    printf("Enter condition factor (0.70, 0.80, 0.90): ");
    scanf("%lf", &Condition_factor);}

    void calculation(void)
    {

    Price_after_age = Original_price -(Original_price * 0.15 * age); /* per year devaluation rate 15% */
    
    Resale_price = Price_after_age * Condition_factor;
}
void print_result(void)
{
    printf("\n====================================================\n");
    printf("\t\tYOUR RESULT\t\t\n");
    printf("====================================================\n");
      printf("Book Code\t\t: %d\n", Book_Code);
    printf("Book Name\t\t: Basics of C book\n");
    printf("Original Price\t\t: %.2f Taka\n", Original_price);
    printf("Book Age\t\t: %d Years\n", age);
    printf("Condition Factor\t: %.2f\n\n", Condition_factor);
    printf("----------------------------------------------------\n");
    printf("\t\tPRICE REPORT\t\t\n");
    printf("----------------------------------------------------\n");

    printf("Devaluation Rate\t: 15%% per year\n");
    printf("Price After Age\t\t: %.2f Taka\n", Price_after_age);
    printf("Final Resale Price\t: %.2f Taka\n", Resale_price);
 printf("\nThe resale price depends on the age and condition.\n\n");}
void show_conditions(void)
{
    printf("====================================================\n");
    printf("\t\tBOOK CONDITIONS\t\t\n");
    printf("====================================================\n");

    printf("Grade 1 : Poor Condition\n");
    printf("Grade 2 : Average Condition\n");
    printf("Grade 3 : Good Condition\n\n");
   printf("A book in good condition can have a higher price.\n");
    printf("Older books usually have less value.\n\n");
}
void show_stock_report(void)
{
    printf("====================================================\n");
    printf("\t\tSTOCK REPORT\t\t\n");
    printf("====================================================\n");

    printf("Total Books Listed\t: 1\n");
       printf("Books Sold\t\t: 0\n");
    printf("Books Not Sold\t\t: 1\n");
     printf("Original Stock Value\t: %.2f Taka\n", Original_price);
     printf("Resale Stock Value\t: %.2f Taka\n\n", Resale_price);

    printf("This report shows the value of one sample book.\n\n");
  }
void show_shop_rules(void)
{
    printf("====================================================\n");
    printf("\t\t SHOP RULES\t\t\n");
    printf("====================================================\n");

   
 printf("1. Every book has its own code.\n");
     printf("2. The age of a book affects its price.\n");
     printf("3. The condition affects the resale value.\n");
     printf("4. Every book must have a minimum price.\n");
    printf("5. Sold books are removed from unsold stock.\n\n");
}
void end(void)
{
    printf("====================================================\n");
    printf("\t\tTHANK YOU\t\t\n");
    printf("====================================================\n");

    printf("Thank you for using our book exchange!\n\n");
    printf("====================================================\n");
    printf("\t\tEND OF PROGRAM\t\t\n");
     printf("====================================================\n"); }
int main(void)
{
    banner();
    show_menu();
    read_input();
    calculation();
    print_result();
    show_conditions();
    show_stock_report();
    show_shop_rules();
    end();
 return 0;
}
