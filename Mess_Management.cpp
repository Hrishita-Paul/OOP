#include <iostream>
#include <string>
using namespace std;

class MessManagement
{

public:
    char hostelType;
    int hostelNumber;

    void setHostel()
    {
        cout << "Enter B for boys hostel and G for girls hostel:- ";
        cin >> hostelType;
    }
    void setHostelNumber()
    {
         cout << "Enter your hostel number:- ";
            cin >> hostelNumber;
        if ((hostelType == 'B') && (hostelNumber>=1 && hostelNumber<=9 )){
        cout<<"BH-"<<hostelNumber<<endl;
        }
        else if((hostelType == 'G') && (hostelNumber>=1 && hostelNumber<=3))
        {
            cout<<"GH-"<<hostelNumber<<endl;
        }
        else
        {
            cout << "\nNot a valid hostel!!!\nRetry with a correct hostel type and number." << endl;
            exit(0);
        }
    }
      void delay(){
        for(int i=0;i<10000;i++){
            cout<<"...\b\b\b";
        }
        cout<<endl;
    }
};

class Menu : public MessManagement
{
private:
    string day;

public:
  
    void getMenu(MessManagement o1)
    {

        cout << "Enter day:- ";
        cin >> day;
         delay();
        switch (o1.hostelType)
        {

        case 'B':
            cout << "\nBoys hostel mess menu\n"
                 << endl;
            if (day == "Sunday")
            {
                cout << "Breakfast:- Sprout, bread, aloo paratha, chutney, tea/coffee, boiled egg/banana.\nLunch:- Rice, Dal, Roti, Sabji, Soyabean, Chutney.\nSnacks:- Tea, Aloo Chop/Bread Pakora.\nDinner:- Pulao, Methi puri, Dal Makhni, Chicken/Paneer." << endl;
            }
            else if (day == "Monday")
            {
                cout << "Breakfast:-Sprout,bread,aloo matar,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Rajma, Chutney\nSnacks:- Tea, Onion Pakora\nDinner:- Rice, Roti, Dal, Egg Curry/Chola Masala." << endl;
            }
            else if (day == "Tuesday")
            {
                cout << "Breakfast:-Sprout,bread,Veg Burger,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Chana Sabji, Chutney\nSnacks:- Tea, Pasta\nDinner:- Rice, Roti, Dal, Butter Chicken/ButterPaneer." << endl;
            }
            else if (day == "Wednesday")
            {
                cout << "Breakfast:-Sprout,bread,chola bhatura,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Dal Pakora, Dahi\nSnacks:- Tea, Poha/Upma\nDinner:- Rice, Roti, Dal, Garlic Chicken/Matar Paneer." << endl;
            }
            else if (day == "Thursday")
            {
                cout << "Breakfast:-Sprout,bread,Idli Sambhar/Curry maggie,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Mixed Veg, Chutney\nSnacks:- Tea, Veg Chow\nDinner:- Rice, Roti, Dal, Shahi Paneer." << endl;
            }
            else if (day == "Friday")
            {
                cout << "Breakfast:-Sprout,bread,Satu Parantha,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Mixed Veg, Chutney\nSnacks:- Tea, Pao/Samosa\nDinner:- Chicken Biryani/Paneer Biryani." << endl;
            }
            else if (day == "Saturday")
            {
                cout << "Breakfast:-Sprout,bread,dosa/uttapam,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Khichdi, Chutney\nSnacks:- Tea, Chat\nDinner:- Rice, Roti, Dal, Fish/Mushroom Matar Masala." << endl;
            }
            else
            {
                cout << "Entered day is invalid.";
            }
            break;

        case 'G':
            cout << "\nGirls hostel mess menu\n"
                 << endl;
            
            if (day == "Sunday")
            {
                cout << "Breakfast:- Sprout, bread, aloo paratha, chutney, tea/coffee, boiled egg/banana.\nLunch:- Rice, Dal, Roti, Sabji, Soyabean, Chutney.\nSnacks:- Tea, Aloo Chop/Bread Pakora.\nDinner:- Pulao, Methi puri, Dal Makhni, Chicken/Paneer." << endl;
            }
            else if (day == "Monday")
            {
                cout << "Breakfast:-Sprout,bread,aloo matar,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Rajma, Chutney\nSnacks:- Tea, Onion Pakora\nDinner:- Rice, Roti, Dal, Egg Curry/Chola Masala." << endl;
            }
            else if (day == "Tuesday")
            {
                cout << "Breakfast:-Sprout,bread,Veg Burger,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Chana Sabji, Chutney\nSnacks:- Tea, Pasta\nDinner:- Rice, Roti, Dal, Butter Chicken/ButterPaneer." << endl;
            }
            else if (day == "Wednesday")
            {
                cout << "Breakfast:-Sprout,bread,chola bhatura,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Dal Pakora, Dahi\nSnacks:- Tea, Poha/Upma\nDinner:- Rice, Roti, Dal, Garlic Chicken/Matar Paneer." << endl;
            }
            else if (day == "Thursday")
            {
                cout << "Breakfast:-Sprout,bread,Idli Sambhar/Curry maggie,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Mixed Veg, Chutney\nSnacks:- Tea, Veg Chow\nDinner:- Rice, Roti, Dal, Shahi Paneer." << endl;
            }
            else if (day == "Friday")
            {
                cout << "Breakfast:-Sprout,bread,Satu Parantha,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Mixed Veg, Chutney\nSnacks:- Tea, Pao/Samosa\nDinner:- Chicken Biryani/Paneer Biryani." << endl;
            }
            else if (day == "Saturday")
            {
                cout << "Breakfast:-Sprout,bread,dosa/uttapam,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Khichdi, Chutney\nSnacks:- Tea, Chat\nDinner:- Rice, Roti, Dal, Fish/Mushroom Matar Masala." << endl;
            }
            else
            {
                cout << "Entered day is invalid.";
            }

            break;

        default:
            cout << "No case is running." << endl;
            break;
        }
    }
};

class MMC : public MessManagement
{
public:
    void showMembers(MessManagement o2)
    {
        cout << "Please report to the following MMC member in case of any complaint regarding hygiene or food quality\n";
         delay();
        switch (o2.hostelType)
        {
        case 'B':
        {
            if (o2.hostelNumber == 1)
            {
                cout << "BH-1-->Arihant" << endl;
            }
            else if (o2.hostelNumber == 2)
            {
                cout << "BH-2-->Bidyut" << endl;
            }
            else if (o2.hostelNumber == 3)
            {
                cout << "BH-3-->Karan" << endl;
            }
            else if (o2.hostelNumber == 4)
            {
                cout << "BH-4-->Diwesh" << endl;
            }
            else if (o2.hostelNumber == 5)
            {
                cout << "BH-5-->Arunit Dey" << endl;
            }
            else if (o2.hostelNumber == 6)
            {
                cout << "BH-6-->Miraj Deka" << endl;
            }
            else if (o2.hostelNumber == 7)
            {
                cout << "BH-7-->Rohit" << endl;
            }
            else if (o2.hostelNumber == 8)
            {
                cout << "BH-8-->Dev Vidit" << endl;
            }
            else if (o2.hostelNumber == 9)
            {
                cout << "BH-9-->Aryan" << endl;
            }
        }
        break;

        case 'G':
        {
            if (o2.hostelNumber == 1)
            {
                cout << "GH-1-->Pallavi Thakur" << endl;
            }
            else if (o2.hostelNumber == 2)
            {
                cout << "GH-2-->Suchita" << endl;
            }
            else if (o2.hostelNumber == 3)
            {
                cout << "GH-3-->Meenakshi Thakur" << endl;
            }
        }
        break;
        }
    }
    void postComplaint()
    {
        string name;
        cout << "Enter your name:- ";
        cin.ignore(1, '\n');
        getline(cin, name);
        int scholarID;
        cout << "Enter your scholar ID:- ";
        cin >> scholarID;

        int choice;
        cout << "\nEnter 1,2 or 3\n1.Quality of food\n2.Mess hygiene\n3.Mess timings\n\n";
        cin >> choice;
         delay();
        switch (choice)
        {
        case 1:
        {
            cout << "\nRaise complaint regarding food served on which day:- ";
            cout<<"\n";
            string timeOfDay;
            cin >> timeOfDay;
            cout<<"\n";
            cout << "I would like to raise complaint regarding the quality of food served during " << timeOfDay << "\n"
                 << name << "\n"
                 << scholarID << endl;
            break;
        }
        case 2:
            cout << "\nI would like to bring to the notice of the authorities about the untidy maintenance of the mess.Kindly keep the serving place clean.\n"
                 << name << "\n"
                 << scholarID << endl;
            break;
        case 3:
            cout << "\nIt is a request to serve the morning meals by 7:45 a.m. positively as we may have classes at 8 a.m. on some days. Also, sometimes,the breakfast isn't even prepared before our 9 a.m class. Kindly implement proper mess timings.\n"
                 << name << "\n"
                 << scholarID << endl;
            break;
        }
    }
};
class Admin : public MessManagement
{
private:
    int daysOfFoodIntake;
    string studentName;
    int scholarID;
    float amount;
    float fine;
    float totalBill;
    float refund;

public:
    void createStudent()
    {
        cout << "Enter student name:- ";
        cin.ignore(1, '\n');
        getline(cin, studentName);
        cout << "Enter scholar ID:- ";
        cin >> scholarID;
        cout << "\nStudent with student name " << studentName << " and scholarID:- " << scholarID << " is created successfully.\n";
    }
    void updateStudent(string a, int ID)
    {
        studentName = a;
        scholarID = ID;
        cout << "\nStudent with student name " << studentName << " and scholarID:- " << scholarID << " is created successfully.\n";
    }
    float prepareMessBill(MessManagement o3)
    {
        cout << "Enter days of food intake:- ";
        cin >> daysOfFoodIntake;

        if (o3.hostelType == 'B')
        {
            amount = 116 * daysOfFoodIntake;
            return amount;
        }
        else
        {
            amount = 100 * daysOfFoodIntake;
            return amount;
        }
    }
    float imposedFine()
    {

        cout << "\nEnter the fine amount imposed:- ";
        cin >> fine;
    }
    float totalMessBill()
    {
        totalBill = amount + fine;
        return totalBill;
    }
    float refundAmount()
    {
        return refund = 18000 - totalBill;
    }
};


int main()
{
    char role;
    cout << "Enter A for admin and S for student:- ";
    cin >> role;
    cout<<"\n";

    if (role == 'A')
    {
        MessManagement mess;
        mess.setHostel();
        mess.setHostelNumber();
        string password;
        cout << "Enter password:- ";
        cin >> password;
        if (password == "admin@NITS")
        {
            while (1)
            {
                Admin admin;
                cout << "\nWelcome to the Hostel Admin portal\n\n";
                cout << "Choose 1,2,3 or 4" << endl;
                cout << "1.Create Student\n2.Update Student\n3.Prepare mess bill,impose fine(if any),total Mess Bill,refund amount\n4.Exit\n\n";
                cout << "Enter your choice:- ";
                int choice;
                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "\n";
                    admin.createStudent();
                    break;
                case 2:
                {
                    cout << "\nEdit student name:- ";
                    string name;
                    cin.ignore(1, '\n');
                    getline(cin, name);
                    cout << "Edit scholar ID:- ";
                    int ID;
                    cin >> ID;
                    admin.updateStudent(name, ID);
                    break;
                }
                case 3:
                {
                    cout << "Mess Bill= " << admin.prepareMessBill(mess);
                    admin.imposedFine();
                    cout << "Total Mess Bill=" << admin.totalMessBill() << endl;
                    cout << "Refund Amount= " << admin.refundAmount() << endl;
                    break;
                }
                case 4:
                    exit(0);
                }
            }
        }
        else
        {
            cout << "Access denied. Retry with correct password." << endl;
        }
    }
    else if (role == 'S')
    {
        MessManagement m;
        m.setHostel();
        m.setHostelNumber();
        while (1)
        {
            int choice;
            cout << "\nWelcome to the Student Portal" << endl;
            cout << "\nEnter 1,2 or 3" << endl;
            cout << "1.Mess Menu\n2.MMC members and complaint section\n3.Exit\n\n";
            cin >> choice;
            cout << "\n";
            switch (choice)
            {
            case 1:
            {
                Menu menu;
                menu.getMenu(m);
                break;
            }
            case 2:
            {
                MMC mmc;
                mmc.showMembers(m);
                cout << "Do you want to raise a complaint? Enter Y or N:- " << endl;
                char complaint;
                cin >> complaint;
                if (complaint == 'Y')
                {
                    mmc.postComplaint();
                }
                break;
            }
            

            case 3:
                exit(0);
            }
        }
    }

    return 0;
}
