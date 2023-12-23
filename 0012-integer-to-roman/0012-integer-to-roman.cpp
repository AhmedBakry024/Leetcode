class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        int numbers[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        
            for(int i = 0; i < 13; i++){
                while(num >= numbers[i]){
                    s += roman[i];
                    num -= numbers[i];
                    
                }
            }
        
        return s;
    }
};