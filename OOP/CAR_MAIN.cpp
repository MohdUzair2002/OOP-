#include"bits\stdc++.h"
#include"CAR.cpp"
using namespace std;
int main()
{
    CAR * garage=NULL;
    int menu_choice=0;
    char temp_colour[10];
    while (menu_choice!=3) 
    {
        cout<<"Enter 1 to put car in garage ,2 to remove ,3 to quit";
        cin>>menu_choice;
        if (menu_choice==1 && garage==NULL )
        {
            cout<<"Enter colour of car";
            cin>>temp_colour;
            garage=new CAR(temp_colour);
            cout<<"COLOuR IS"<<garage->getColour()<<endl;
        }
        if (menu_choice==2 && garage!=NULL )
        {
            delete garage;
            garage=NULL;
            cout<<"CAR removed"<<endl;
        }
        

    }
    if(garage!=NULL)
        {
            delete garage;
        }
}
