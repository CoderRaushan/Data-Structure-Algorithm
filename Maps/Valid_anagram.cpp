// }
    //  // METHOD 2
    //   bool isAnagram(string s, string t) 
    //   {
    //     if(s.length() != t.length())return false;

    //     unordered_map<char,int>m1;
    //     unordered_map<char,int>m2;
    //     for(int i=0;i<s.length();i++)
    //     {
    //        m1[s[i]]++;
    //     }
    //      for(int i=0;i<t.length();i++)
    //     {
    //         m2[t[i]]++;
    //     }
         
    //      for(auto ele:m1)
    //      {
    //         char ch=ele.first;
    //         int freq1=ele.second;

    //         if(m2.find(ch)!=m2.end())
    //         {
    //             int freq2=m2[ch];
    //             if(freq1!=freq2)
    //             {
    //                 return false;
    //             }
    //         }
    //         else 
    //         {
    //             return false;
    //         }
    //      }
    //      return true;
    //   }

      // METHOD 3
      bool isAnagram(string s, string t) 
      {
        if(s.length() != t.length())return false;
        unordered_map<char,int>m1;
        for(int i=0;i<s.length();i++)
        {
           m1[s[i]]++;
        }
        
       for(int i=0;i<t.length();i++)
       {
            char ch=t[i];
            if(m1.find(ch)!=m1.end())
            {
                m1[ch]--;
                if(m1[ch]==0) m1.erase(ch);
            }
            else return false;
       }
        if(m1.size()>0)return false;
         return true;
      }