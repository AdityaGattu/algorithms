#include <bits/stdc++.h>
 
using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {

 vector<vector<int>>  s1 = {{8,1,6,3,5,7,4,9,2},{8,3,4,1,5,9,6,7,2},{2,7,6,9,5,1,4,3,8},{2,9,4,7,5,3,6,1,8}, {6,1,8,7,5,3,2,9,4},{6,7,2,1,5,9,8,3,4},{4,3,8,9,5,1,2,7,6},{4,9,2,3,5,7,8,1,6}};
            vector<int> s2;
            for(int i=0;i<s.size();i++)
             {
                 for(int j=0;j<s.size();j++)
                 {
                       s2.push_back(s[i][j]);
                 }
             }
           
            int best=9999999;
           
            for(int i=0;i<8;i++)
            { int diff=0;
                for(int j=0;j<9;j++)
                {
                    diff+=abs(s1[i][j]-s2[j]);
                }
                if(diff<best)
                {
                    best=diff;
                }
            }
            return best;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
