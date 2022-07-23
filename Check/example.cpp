// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// string numberToInteger(int number){

//     vector<int>intcode={1000,900,500,400,100,90,50,40,10,9,5,4,1};
//     vector<string>code={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
//     string roman="";
//         for(int i=0;i<intcode.size();i++)
//         {
//         while(number >= intcode[i])
//         {
//                 roman= roman+ code[i];
//                 number-=intcode[i];
//             }
//         }
//     // cout<<roman;
//     return roman;
// }
// int main()
// {
//         /* code here */
//         cout<<numberToInteger(1000);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// string result(string s)
// {
//     int left = 0;
//     int right = s.length()-1;
    
//     string temp="";
//     string ans="";
    
//     //Iterate the string and keep on adding to form a word
//     //If empty space is encountered then add the current word to the result
//     while (left <= right) {
//         char ch= s[left];
//         if (ch != ' ') {
//             temp += ch;
//         } else if (ch == ' ') {
//             if (ans!="") ans = temp + " " + ans;
//             else ans = temp;
//             temp = "";
//         }
//         left++;
//     }
    
//     //If not empty string then add to the result(Last word is added)
//     if (temp!="") {
//         if (ans!="") ans = temp + " " + ans;
//         else ans = temp;
//     }
    
//     return ans;    
// }
// int main()
// {
//     string st="     TUF is great for interview preparation    ";
//     cout<<"Before reversing words: "<<endl;
//     cout<<st<<endl;
//     cout<<"After reversing words: "<<endl;
//     cout<<result(st);
//     return 0;
// }



#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int inversion(vector<int>& num){
    int n = num.size(),cnt=0;
    for(int i=0;i<n;i++){
        for(int j = i+1; j<n;j++)
        {
            if(num[i]>num[j]){
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
        /* code here */
        vector<int>nums{5,3,2,1,4};
        cout<<inversion(nums);

    return 0;
}