#include<iostream>
using namespace std;

int main(){
    int quantity;
    int choice;
    int back;
    // Quantity of Items
    int qRoom = 0, qPasta = 0, qBurger = 0, qNoodle = 0;
    // Number of Items Sold
    int sRoom = 0, sPasta = 0, sBurger = 0, sNoodle = 0;
    // Price of Items
    int pRoom = 0, pPasta = 0, pBurger = 0, pNoodle = 0;
    // Total Price of Items
    int tpRoom = 0, tpPasta = 0, tpBurger = 0, tpNoodle = 0;

    cout << "\n\t*** Quantity Available and Price of Each Item ***" << endl;
    cout << "\nRoom:";
    cin >> qRoom;
    cout << "Price of Room: $";
    cin >> pRoom;
    cout << "Pasta:";
    cin >> qPasta;
    cout << "Price of Pasta: $";
    cin >> pPasta;
    cout << "Burger:";
    cin >> qBurger;
    cout << "Price of Burger: $";
    cin >> pBurger;
    cout << "Noodle:";
    cin >> qNoodle;
    cout << "Price of Noodle: $";
    cin >> pNoodle;
    
    do{
        cout << "\n\t*** Please Select the Menu Option ***" << endl;
        cout << "\n1. Room" << endl;
        cout << "2. Pasta" << endl;
        cout << "3. Burger" << endl;
        cout << "4. Noodle" << endl;
        cout << "5. Display Order Detail" << endl;
        cout << "6. Exit" << endl;
        cout << "\nPlease Enter Your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter the Number of Room(s): ";
                cin >> quantity;
                if(qRoom - sRoom >= quantity){
                    sRoom = sRoom + quantity;
                    tpRoom = tpRoom + quantity * pRoom;
                    cout << "\n" << quantity << " Room(s) have been booked" << endl;
                } else {
                    cout << "\nOnly " << qRoom - sRoom << " Room(s) Available" << endl; 
                }
                break;

            case 2:
                cout << "Enter the Number of Pasta: ";
                cin >> quantity;
                if(qPasta - sPasta >= quantity){
                    sPasta = sPasta + quantity;
                    tpPasta = tpPasta + quantity * pPasta;
                    cout << "\n" << quantity << " Pasta have been ordered" << endl;
                } else {
                    cout << "\nOnly " << qPasta - sPasta<< " Pasta remaining" << endl; 
                }
                break;

            case 3:
                cout << "Enter the Number of Burger: ";
                cin >> quantity;
                if(qBurger - sBurger >= quantity){
                    sBurger = sBurger + quantity;
                    tpBurger = tpBurger + quantity * pBurger;
                    cout << "\n" << quantity << " Burger have been ordered" << endl;
                } else {
                    cout << "\nOnly " << qBurger - sBurger << " Burger remaining" << endl; 
                }
                break;

            case 4:
                cout << "Enter the Number of Noodle: ";
                cin >> quantity;
                if(qNoodle - sNoodle >= quantity){
                    sNoodle = sNoodle + quantity;
                    tpNoodle = tpNoodle + quantity * pNoodle;
                    cout << "\n" << quantity << " Noodle have been booked" << endl;
                } else {
                    cout << "\nOnly " << qNoodle - sNoodle << " Noodle remaining" << endl; 
                }
                break;

            case 5:
                cout << "\n\t*** Details of Revenue and Quantity Available ***" << endl;
                
                cout << "Room(s) Available: " << qRoom << endl;
                cout << "Room(s) Booked: " << sRoom << endl;
                cout << "Room(s) Remaining: " << qRoom - sRoom << endl;
                cout << "Total Revenue from Room Booking: $" << tpRoom << endl;
                
                cout << "\nPasta Available: " << qPasta << endl;
                cout << "Pasta Ordered: " << sPasta << endl;
                cout << "Pasta Remaining: " << qPasta - sPasta << endl;
                cout << "Total Revenue from Pasta Order: $" << tpPasta << endl;
                
                cout << "\nBurger Available: " << qBurger << endl;
                cout << "Burger Ordered: " << sBurger << endl;
                cout << "Burger Remaining: " << qBurger - sBurger << endl;
                cout << "Total Revenue from Burger Order: $" << tpBurger << endl;

                cout << "Noodle Available: " << qNoodle << endl;
                cout << "Noodle Ordered: " << sNoodle << endl;
                cout << "Noodle Remaining: " << qNoodle - sNoodle << endl;
                cout << "Total Revenue from Noodle Order: $" << tpNoodle << endl;

                cout << "Total Revenue: $" << tpRoom + tpPasta + tpBurger + tpNoodle << endl;

                break;
            
            case 6:
                exit(0);
                default:
                    cout <<"\nPlease Select the Number Mentioned Above" << endl;
        }
        cout << "\n*** Please Select the Option ***" << endl;
        cout << "\n0. Back to Menu" << endl;
        cout << "1. Exit" << endl;
        cin >> back;
    } while (back == 0);
    exit(0);

}