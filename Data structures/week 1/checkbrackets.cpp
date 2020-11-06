#include<bits/stdc++.h>
using namespace std;
int main()
{
  int print=true;
  string s;
  cin>>s;
  char top;
  int i,aopenindex;
  std::stack<char>open;//to store open brackets
  for(i= 0;i<s.size();i++)
  {
      if(open.empty())
      aopenindex=i;//unmatched open bracket which will be first always
     if(s.at(i)=='('||s.at(i)=='{'||s.at(i)=='[')
     {         open.push(s[i]);
     }
     else 
     {
         if(s.at(i)==')'||s.at(i)=='}'||s.at(i)==']')
         {
             if(open.empty())//unmatched closed bracket
             {
                 print=false;
                 break;
             }
             else
             {
                 top=open.top();
                 open.pop();
                 if((top=='('&&s[i]!=')')||(top=='{'&&s[i]!='}')||(top=='['&&s[i]!=']'))
                 {
                 print=false;
                 break;
             }
             }
         }
     }
  }
  if(print==true&&open.empty())
  {
      cout<<"Success"<<"\n";
  }
  else
  {
      if(i>=s.size()&&!open.empty())
      cout<<aopenindex+1<<"\n";
      else
      cout<<i+1<<"\n";
  }

    
    
    return 0;
}
