bool areOccurrencesEqual(string s) {
       int first ;
       int hash[26]={0};
       for(int i=0;i<s.length();i++)
       {
           hash[s[i]-97]++;
       }
       for(int i=0;i<25;i++)
       {
           if(hash[i]!=0)
            {
                first = hash[i];
                break;
            }
       }
       for(int i=0;i<26;i++)
       {
           if(hash[i]==0 || hash[i] == first)
                continue;
            else
                return 0;
       }
       return 1;

    }
