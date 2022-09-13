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



/*#include<iostream>
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
        /* code here 
        vector<int>nums{5,3,2,1,4};
        cout<<inversion(nums);

    return 0;
}
*/


/*#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void sub(int index, vector<int>&arr, vector<int>ds){
    if(index == arr.size()){
        int sum=0;
        for(auto &it:ds){
            sum+=it;
            cout<<it<<" ";
        }
        cout<<endl;
        cout<<sum<<" ";
        cout<<endl;
        return;
    }
    ds.push_back(arr[index]);
    sub(index+1,arr,ds);
    ds.pop_back();
    sub(index+1,arr,ds);
}
int main()
{
        /* code here */
        /*vector<int>arr{3,1,2};
        vector<int>ds;
        sub(0,arr,ds);

    return 0;

}*/

/*#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void display(vector<int>&ds){
    for(auto it:ds){
        cout<<it<<" ";
    }
    cout<<endl;
}
void s(int index, int sum,vector<int>&arr,vector<int>&ds,int target){
    if(index == arr.size()){
        if(sum==target)
        {
            display(ds);
        }
        return;
    }

    ds.push_back(arr[index]);
    sum = sum+arr[index];
    s(index+1,sum,arr,ds,target);
    sum-=arr[index];
    ds.pop_back();
    s(index+1,sum,arr,ds,target);
}
int main()
{
        /* code here 
        vector<int>arr{1,2,1};
        vector<int>ds;
        s(0,0,arr,ds,2);

    return 0;
}*/



// C++ program for function overloading
#include <bits/stdc++.h>

using namespace std;
class Geeks
{
	public:
	
	// function with 1 int parameter
	int func(int x)
	{
        return x;
	}
	int func(double x)
	{
        return x;
	}
	double func(int x, int y)
	{
		// cout << "value of x and y is " << x << ", " << y << endl;
        return x*y;
	}
};

int main() {
	
	Geeks obj1;
	
	// Which function is called will depend on the parameters passed
	// The first 'func' is called
	cout<<obj1.func(7)<<endl;
	
	// The second 'func' is called
	cout<<obj1.func(9.00)<<endl;
	
	// The third 'func' is called
	cout<<obj1.func(85,64)<<endl;
	return 0;
}
