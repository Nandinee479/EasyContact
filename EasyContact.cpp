#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
    string gmail;
};

main()
{
    Contact contacts[1000];
    int count=0;
    string choice;

    do
        {
        cout<<"\n--- EASY CONTACT ---\n";
        cout<<"1. Add Contact"<<endl;
        cout<<"2. Display Contacts"<<endl;
        cout<<"3. Delete Contact"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
         cin.ignore();

        if (choice == "1")
            {

            cout<<"Enter Name: ";
            getline(cin, contacts[count].name);
            cout<<"Enter Phone: ";
            getline(cin, contacts[count].phone);
            cout<<"Enter Gmail: ";
            getline(cin, contacts[count].gmail);

            count++;
            cout<<"Contact added successfully!"<<endl;
        }
        else if(choice == "2")
        {

            if(count ==0)
            {
                cout<<"No contacts available."<<endl;
            }
            else
            {
                cout<<"\n--- Contact List ---\n";
                for(int i=0; i<count; i++)
                {
                    cout << i+1 << " . " << contacts[i].name<< " -- "
                    << contacts[i].phone <<"  --  "<< contacts[i].gmail<<endl;
                }
            }
        }
        else if(choice =="3")
        {

            if(count==0)
            {
                cout<<"No contacts to delete."<<endl;
            }
             else
            {
                int delIndex;
                cout<<"Enter contact number to delete (1-" << count << "): ";
                cin>>delIndex;

                if(delIndex<1 || delIndex>count)
                    {
                    cout<<"Invalid contact number!"<<endl;
                    }
                else
                {

                    for(int i=delIndex-1; i<count-1; i++)
                    {
                        contacts[i]=contacts[i + 1];
                    }
                    count--;
                    cout<<"Contact deleted successfully...!!!"<<endl;
                }
            }
        }
        else if(choice=="4")
        {
           cout<<"Exiting Contact Book... GOOD BYE!!"<<endl;
        }
        else
        {
            cout<<"INVALID CHOICE.....!!"<<endl;
        }


    }
 while (choice !="4");

    return 0;
}
