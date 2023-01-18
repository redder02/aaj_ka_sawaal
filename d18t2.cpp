bool lemonadeChange(vector<int>& bills) {
        int tens = 0,fives = 0,twenty = 0;

        for(auto i : bills)//int i=0;i<bills.size();i++)
        {
            if(i==5)
            {
                fives++;
            }
            else if(i==10)
            {
                tens++;
                if(fives>=1)
                    fives--;
                else
                    return 0;
            }
            else if(i == 20)
            {
                if(tens>=1)
                {    
                    tens--;
                    if(fives>=1)
                        fives--;
                    else
                        return 0;
                }
                else if(fives>=3)
                {
                    fives-= 3;
                }
                else
                    return 0;
            }
        }
        return 1;
    }
