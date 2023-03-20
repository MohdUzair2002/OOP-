#include "CAR.cpp"

using namespace std;
int main()
{
    CAR * garages[10];
    for (int i=0;i<10;i++)
    {
        garages[i]=NULL;
    }
    int menu_choice=0;
    char temp_colour[10];
    int garage_no;
    while(menu_choice!=3)
    {
        cout<<"Enter 1 to put car in garage ,2 to remove ,3 to quit";
        cin>>menu_choice;
        if (menu_choice==1)
        {
            cout<<"The following garage no are empty";
            for (int i=0;i<10;i++)
            {
                if(garages[i]!=0)
                {
                    cout<<i+1<<", ";
                }
            }
            cout<<"Enter the garge  no to occupy";
        cin>>garage_no;
        if(garages[garage_no-1]==NULL)
        {
            cout<<"Enter colour of car";
            cin>>temp_colour;
            garages[garage_no-1]=new CAR(temp_colour);
            cout<<"COLOuR IS"<<garages[garage_no-1]->getColour()<<endl;
        }
        }
        
        else{
            cout<< "The garage is full"<<endl;
        }
       
        if(menu_choice==2)
        {
            cout<<"The following garage no are occupied";
            for (int i=0;i<10;i++)
            {
                if(garages[i]!=NULL)
                {
                    cout<<i+1<<", ";
                }
            }
            cout<<"Enter the garge  no to empty";
        cin>>garage_no;
        if(garages[garage_no-1]!=NULL)
        {
            cout<<"Enter garage no to empty"<<garages[garage_no-1]->getColour()<<endl;;
            delete garages[garage_no-1];
        }
        else{
            cout<<"the garage is unoccupied";
        }
        }

    }
    for(int i=0;i<10;i++)
    {
        if(garages[i]!=NULL)
        {
            delete garages[i];
        }
    }

}