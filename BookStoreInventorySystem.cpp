#include<iostream>
#include<stdbool.h>
#include<string.h>
using namespace std;
class Book
{
    int bookID;
    char title[50];
    char author[50];
    float price;

    public : 
        void inputDetails()
        {
            cout<<"Enter Book ID : ";
            cin>>bookID;
            cout<<"Enter Title : ";
            fflush(stdin);
            scanf("%[^\n]s",title);
            fflush(stdin);
            cout<<"Enter Author Name : ";
            fflush(stdin);
            cin>>author;
            scanf("%[^\n]s",author);
            fflush(stdin);
            cout<<"Enter Price : ";
            cin>>price;
            cout<<endl;
        }


        void displayDetails()
        {
            cout<<"Book ID : "<<bookID<<endl;
            cout<<"Title : ";
            for(int i=0;title[i]!='\0';i++)
            {
                cout<<title[i];
            }
            cout<<endl;
            cout<<"Author : ";
            for(int i=0;author[i]!='\0';i++)
            {
                cout<<author[i];
            }
            cout<<endl;
            cout<<"Price : "<<price<<endl;
            cout<<endl;
        }


        bool isPriceAbove(float value)
        {
            if(price>value) return 1;
            else return 0;
        }


        int book()
        {
            return bookID;
        }


};
int main()
{
    bool c;
    int n,p,num,a;
    float val;
    cout<<"How many no of books you want to add : ";
    cin>>n;
    Book obj[n];
    for(int i=0;i<n;i++)
    {
        obj[i].inputDetails();
    }
    while(1)
    {
        cout<<"\nPress 0 -> To Exit\n";
        cout<<"Press 1 -> To Display all book details\n";
        cout<<"Press 2 -> To display the book that cost more than value\n";
        cin>>p;
        if(p==0)
        {
            cout<<"ThankYou:)\n";
            return 0;
        }
        else if(p==1)
        {
            for(int i=0;i<n;i++)
            {
                obj[i].displayDetails();
                cout<<endl;
            }
        }
        else if(p==2)
        {
            cout<<"Enter the price value : ";
            cin>>val;
            c = 0;
            for(int i=0;i<n;i++)
            {
                a = obj[i].isPriceAbove(val);
                if(a==1)
                {
                    c = 1;
                    obj[i].displayDetails();
                    cout<<endl;
                }
            }
            if(c==0) cout<<"Sorry No book Availabe\n";
        }
    }
    return 0;
}





















