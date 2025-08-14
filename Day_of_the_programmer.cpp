#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    int y = year;
    string ys = to_string(y);
    string ldate = "12.09.";
    string nldate = "13.09.";
    string fdate = "";
    if(y == 1918)
    {
        fdate = "26.09.1918";
    }
    else if(y < 1918)
    {
        if(y % 4 == 0)
        {
            fdate = ldate + ys;
        }
        else
        {
            fdate = nldate + ys;
        }
    }
    else
    {
        if(y % 4 == 0 && (y % 400 == 0 || y % 100!=0))
        {
            fdate = ldate + ys;
        }
        else{
            fdate = nldate + ys;
        }
    }
    return fdate;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
