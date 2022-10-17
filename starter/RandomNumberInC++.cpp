#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<ctime>
using namespace std;
int main()
{
        /* code here */
        // seed here
        srand(time(0));
        string choice = "";
        cout<<"\n\n----------------------------------------------------------------------------------------------\n";
        cout << "\t\t\tDo You Want To Play| Press Y for Yes And N for Quit";
        cout<<"\n------------------------------------------------------------------------------------------------\n\n";
        cin>>choice;
    while(choice=="yes" || choice=="y" || choice=="Y")
    {
        int j = rand()%6+1;
        switch (j)
        {
        case 1:
            cout<<"[\t\t"<<endl;
            cout<<"\t0\t"<<endl;
            cout<<"\t\t]"<<endl;
            break;
        case 2:
            cout<<"[0\t"<<endl;
            cout<<" \t"<<endl;
            cout<<"\t0]"<<endl;
            break;
        case 3:
           cout<<"[0\t"<<endl;
           cout<<" \t0\t"<<endl;
           cout<<"\t\t0]"<<endl;
           break;
        case 4:
           cout<<"[0\t\t0]"<<endl;
           cout<<" \t\t"<<endl;
           cout<<"[0\t\t0]"<<endl;
           break;
        case 5:
           cout<<"[0\t\t0]"<<endl;
           cout<<" \t0\t"<<endl;
           cout<<"[0\t\t0]"<<endl;
           break;
        default:
           cout<<"[0\t0\t0]"<<endl;
           cout<<" \t\t"<<endl;
           cout<<"[0\t0\t0]"<<endl;
           break;
        }

        cout<<"\n\n----------------------------------------------------------------------------------------------\n";
        cout << "|\t\t\tDo You Want To Play | Press Y for Yes And N for Quit\t\t\t|";
        cout<<"\n------------------------------------------------------------------------------------------------\n\n";
        cin>>choice;
        cout<<"\n--------------------------------------- Game is Over ! -------------------------------------\n\n";

    }    
return 0;
}