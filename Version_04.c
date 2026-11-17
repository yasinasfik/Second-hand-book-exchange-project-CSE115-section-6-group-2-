
#include <stdio.h>

int age, Book_Code;
double Original_price, Condition_factor, Price_after_age, Resale_price;

 int totalBooks = 0, soldBooks = 0, bookAdded = 0, bookSold = 0;

double totalOriginalValue = 0, totalResaleValue = 0, unsoldStockValue = 0;

void start(void);
  void show_menu(void);
  void read_input(void);
  void calculation(void);
 void print_result(void);
void stock_report(void);
  void shop_rules(void);
  void current_book_value(void);
  void sell_book(void);
  void find_book(void);
  void end(void);


int main(void)
{

int choice = 0;
  start();
  for (; choice != 8; ){

    show_menu();
     printf("\nEnter your choice (1-8): ");
        scanf("%d", &choice);
    if (choice < 1 || choice > 8){
    printf("Invalid choice! Please select 1-8.\n");
    }
    else
    { switch(choice)
             {case 1: //book add korte
                read_input();
              calculation();

                     bookAdded = 1;
                 bookSold = 0;

                    totalBooks++;
                    totalOriginalValue = totalOriginalValue + Original_price;
                    totalResaleValue = totalResaleValue+ Resale_price;
                    unsoldStockValue =unsoldStockValue + Resale_price;

                    print_result();
                    break;

                case 2: //book price show korte
                    if (bookAdded == 1){
                        print_result();
                    }
                    else
                    {
                        printf("Please add a book first.\n");
                    }
                    break;
                    case 3: 
                    sell_book();
                    break;

                  case 4:
                    find_book();
                    break;
                    case 5:
                    current_book_value();
                    break;

                case 6:
                    shop_rules();
                    break;

                case 7:
                    stock_report();
                    break;

                case 8:
                    end();
                    break;
            }
        }
    }

    return 0;
}


void start(void)
{
    printf("\n========================================\n");
     printf("\tSECOND-HAND BOOK EXCHANGE\n");
     printf("========================================\n");
     printf("Welcome to our Book Exchange!\n");
}


void show_menu(void)
{
     printf("\n========== MAIN MENU ==========\n");
    printf("1. Add a book\n");
     printf("2. Show book price\n");
     printf("3. Sell a book\n");
     printf("4. Find a book\n");
     printf("5. Show book value\n");
    printf("6. Show shop rules\n");
     printf("7. Show stock report\n");
     printf("8. Exit\n");
}


void read_input(void)
{
    printf("\nEnter book code: ");
      scanf("%d", &Book_Code);

    if (Book_Code <= 0)
    {
        printf("Invalid book code!\n");
         Book_Code = 0;
    }

    for (; Book_Code == 0; )
    { printf("Enter a positive book code: ");
        scanf("%d", &Book_Code);

        if (Book_Code <= 0)
        {  printf("Invalid book code!\n");
            Book_Code = 0;
        }
    }


    printf("Enter original price: ");
             scanf("%lf", &Original_price);

    for (; Original_price <= 0; )
    {printf("Price must be greater than 0.\n");
         printf("Enter original price: ");
         scanf("%lf", &Original_price);  }
  printf("Enter book age (0-7): ");
    scanf("%d", &age);
for (; age < 0 || age > 7; )
    {printf("Age must be between 0 and 7.\n");
        printf("Enter book age: ");
         scanf("%d", &age);
    }

    printf("Enter condition factor (0.70, 0.80, 0.90): ");
     scanf("%lf", &Condition_factor);
for (; Condition_factor != 0.70 && Condition_factor != 0.80 && Condition_factor != 0.90; )
{printf("Invalid condition factor!\n");
        printf("Enter condition factor again: ");
        scanf("%lf", &Condition_factor);
    }
}
void calculation(void)
{Price_after_age = Original_price - (Original_price * 0.15 * age);
    if (Price_after_age < 0)
    {
        Price_after_age = 0;
    }
 Resale_price = Price_after_age * Condition_factor;
}
void print_result(void)
{
 printf("\n========== BOOK DETAILS ==========\n");
   printf("Book Code: %d\n", Book_Code);
     printf("Original Price: %.2f Taka\n", Original_price);
     printf("Book Age: %d Years\n", age);
     printf("Condition Factor: %.2f\n", Condition_factor);
    printf("Price After Age: %.2f Taka\n", Price_after_age);
    printf("Resale Price: %.2f Taka\n", Resale_price);

    if (bookSold == 1) {
        printf("Book Status: Sold\n");
    }
    else
    {
        printf("Book Status: Not Sold\n");
    }
}
void stock_report(void)
{printf("\n========== STOCK REPORT ==========\n");

    printf("Total Books: %d\n", totalBooks);
    printf("Books Sold: %d\n", soldBooks);
    printf("Books Not Sold: %d\n", totalBooks - soldBooks);
printf("Total Original Value: %.2f Taka\n",totalOriginalValue);
printf("Total Resale Value: %.2f Taka\n",totalResaleValue);
printf("Unsold Stock Value: %.2f Taka\n",unsoldStockValue);
}
void shop_rules(void)
{printf("\n========== SHOP RULES ==========\n");
   printf("1. Every book has its own code.\n");
   printf("2. Book age affects its price.\n");
   printf("3. Condition affects resale value.\n");
  printf("4. Every book must have a minimum price.\n");
printf("5. Sold books are removed from unsold stock.\n");
}
void current_book_value(void)
{  if (bookAdded == 0) {
    printf("Please add a book first.\n");
    }
    else
    {printf("\nBook Code: %d\n", Book_Code);
    printf("Original Value: %.2f Taka\n", Original_price);
    printf("Resale Value: %.2f Taka\n", Resale_price);
    if (bookSold == 1){
            printf("Status: Sold\n");
        }
        else{
            printf("Status: Not Sold\n");
        }
    }
}

void sell_book(void)
{
    if (bookAdded == 0){
        printf("Please add a book first.\n");
    }
    else if (bookSold == 1){
        printf("This book is already sold.\n");
    }
    else
    {   bookSold = 1;
    soldBooks++;

    unsoldStockValue -= Resale_price;
    printf("Book sold successfully!\n");
    }
}
void find_book(void)
{
    int searchCode;

    printf("Enter book code to search: ");
     scanf("%d", &searchCode);

     if (bookAdded == 0)
     {  printf("No book has been added.\n");  }
    else if (searchCode == Book_Code)
    {
        printf("Book found!\n");
        print_result();
    }
    else
    {
        printf("Book not found.\n");
    }
}
void end(void)
{
    printf("\nThank you for using our Book Exchange!\n");
    printf("========== END OF PROGRAM ==========\n");
}
