class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int , string> hash_map;
        hash_map[1] = "I";
        hash_map[2] = "II";
        hash_map[3] = "III";
        hash_map[4] = "IV";
        hash_map[5] = "V";
        hash_map[6] = "VI";
        hash_map[7] = "VII";
        hash_map[8] = "VIII";
        hash_map[9] = "IX";
        hash_map[10] = "X";
        hash_map[40] = "XL";
        hash_map[50] = "L";
        hash_map[90] = "XC";
        hash_map[100] = "C";
        hash_map[400] = "CD";
        hash_map[500] = "D";
        hash_map[900] = "CM";
        hash_map[1000] = "M";
        vector<int> key={1000,900,500,400,100,90,50,40,10,9,8,7,6,5,4,3,2,1};
        string res;
        int i = 0;
        while(1)
        {
            if (num == 0)
                break;
            int j = 0;
            while(j < num / key[i])
             {
                res.append(hash_map[key[i]]);
                j++;
             }
            num = num % key[i];
            i++;
        }
    return (res);
    }
};