#include<iostream>
#include<string>
#include <iomanip>

using namespace std;


struct menuitem //defintion of a struct to store data about resturant
{
       string menulist;
       double price;
};
menuitem menu[11]; //Instance of a struct to store data of 7 resturant items
void get_data(); //prototype of a function to loads data about the items in struct
void show_menu(); // prototype of a function show the loaded data
void selectItems(); //prototype of a function  to select the items
void print_bill(); //prototype of a function to calculate the bill
int c[11] = { 0, 0, 0, 0, 0, 0, 0, 0 ,0 ,0 ,0 };

int main()
{
       double t;
       get_data(); //Calling of a function to get load the data
       show_menu();//calling of a function to display data
       selectItems(); //calling of a function select the items from the menu
       print_bill(); //calling of a function to calculate the bill
       //system("pause");
       return 0;

}
void get_data() //a function to get load the data
{
       menu[1].menulist = "Chicken Bryani";
       menu[1].price = 140;
       menu[2].menulist = "Kabab Masala";
       menu[2].price = 120;
       menu[3].menulist = "Chicken Manchaurian";
       menu[3].price = 140;
       menu[4].menulist = "CHICKEN leg Piece";
       menu[4].price = 130;
       menu[5].menulist = "Chapli kabab+ Naan";
       menu[5].price = 90;
       menu[6].menulist = "Pizza";
       menu[6].price = 450;
       menu[7].menulist = "Grill Sandwich";
       menu[7].price = 140;
       menu[8].menulist = "Shwarma";
       menu[8].price = 120;
       menu[9].menulist = "Fries";
       menu[9].price = 50;
       menu[10].menulist = "Tea";
       menu[10].price = 40;



}
void show_menu() //a function to display menu
{
       cout << "Sharps brain cafeteria offered the following menu" << endl;
       cout << 1 << "\t" << menu[1].menulist<<setw(16)   << "RS " << menu[1].price << endl;
       cout << 2 << "\t" << menu[2].menulist<<setw(18)   << "RS " << menu[2].price << endl;
       cout << 3 << "\t" << menu[3].menulist<<setw(11)   << "RS " << menu[3].price << endl;
       cout << 4 << "\t" << menu[4].menulist<<setw(13)   << "RS " << menu[4].price << endl;
       cout << 5 << "\t" << menu[5].menulist<<setw(12)   << "RS " << menu[5].price << endl;
       cout << 6 << "\t" << menu[6].menulist<<setw(25)   << "RS " << menu[6].price << endl;
       cout << 7 << "\t" << menu[7].menulist<<setw(16)   << "RS " << menu[7].price << endl;
       cout << 8 << "\t" << menu[8].menulist<<setw(23)   << "RS " << menu[8].price << endl;
       cout << 9 << "\t" << menu[9].menulist<<setw(26)   << "RS " << menu[9].price << endl;
       cout << 10<< "\t"  << menu[10].menulist<<setw(27)   << "RS " << menu[10].price << endl;

}
void selectItems() //function select the items from the menu
{
       int ch,quantity;
       char yes_or_no;
       do{
              cout << "Enter your choice :";
              cin >> ch; //takes the choice from the user to select the item
              cout << "Enter the Quantity :";
              cin >> quantity;
              switch (ch)
              {
              case 1:
              {
                     c[1] = c[1] + quantity;
                     cout << "You have Selected :" << menu[1].menulist << endl;

                     break;
              }
              case 2:
              {
                     c[2] = c[2] + quantity;
                     cout << "You have Selected :" << menu[2].menulist << endl;

                     break;
              }
              case 3:
              {
                     c[3] = c[3] + quantity;
                     cout << "You have Selected :" << menu[3].menulist << endl;

                     break;
              }
              case 4:
              {
                     c[4] = c[4] + quantity;
                     cout << "You have Selected :" << menu[4].menulist << endl;

                     break;
              }
              case 5:
              {
                     c[5] = c[5] + quantity;
                     cout << "You have Selected :" << menu[5].menulist << endl;

                     break;
              }
              case 6:
              {
                     c[6] = c[6] + quantity;
                     cout << "You have Selected :" << menu[6].menulist << endl;

                     break;
              }
              case 7:
              {
                     c[7] = c[7] + quantity;
                     cout << "You have Selected :" << menu[7].menulist << endl;


                     break;
              }
              case 8:
              {
                     c[8] = c[8] + quantity;
                     cout << "You have Selected :" << menu[8].menulist << endl;


                     break;
              }
              case 9:
              {
                     c[9] = c[9] + quantity;
                     cout << "You have Selected :" << menu[9].menulist << endl;


                     break;
              }
              case 10:
              {
                     c[10] = c[10] + quantity;
                     cout << "You have Selected :" << menu[10].menulist << endl;


                     break;
              }
              default:
                     cout << "invalid input" << endl;
              }
              cout << "to select more items (y/n)";
              cin >> yes_or_no;


       } while (yes_or_no != 'n');
       cout << endl;
}
void print_bill()
{
       double total = 0, tax, due;
       cout << "------Welcome to SHarps brain Cafeteria-----" << endl;
       for (int i = 0; i < 11; i++)
       {
              if (c[i] > 0)
              {
                     cout << c[i] << "\t" << menu[i].menulist << "   RS " << menu[i].price << endl;
                     total = total + (menu[i].price*c[i]);
              }

       }
       tax = total*0.05; //calculate the tax on the total price
       due = total + tax; //calculate the price after adding tax
       cout << "        Tax(5%) " << "\t" << tax << endl;
       cout << "-----------------------------------------------" << endl;
       cout << "Amount due      RS " << due << endl;
       cout << "-----------------------------------------------" << endl;


}
//------------------------------SHARPSBRAIN------------------------------------------------------------------------------------------//
