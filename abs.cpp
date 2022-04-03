#include <iostream>

using namespace std;

class Movie
{
public:
    string title, genre, director, award;
    int year;
    void setData(string t, string g, string v, string a, int y)
    {
        title = t;
        genre = g;
        director=v;
        award = a;
        year = y;
    }

    void search(string s)
    {
        if (title == s)
        {
            cout << title << endl;
            cout << genre << endl;
            cout << year << endl;
            cout<<director<<endl;
            cout << award << endl;
        }
    }
};

int main()
{
    string s1;
    cin >> s1;

    TV t1[5];
    t1[0].title = "Quantico";
    t1[0].genre = "Drama";
    t1[0].year = 2015;
    t1[0].award = "Peoples Choice Award";

    t1[1].title = "Inception";
    t1[1].genre = "Action";
    t1[1].director="Christopher Nolan"
    t1[1].year = 2010;
    t1[1].award = "Peoples Choice Award";

    t1[2].title = "Friends";
    t1[2].genre = "Comedy";
    t1[2].year = 1994;
    t1[2].award = "Golden Globe Award";

    t1[3].title = "fjbjsfb";
    t1[3].genre = "Drama";
    t1[3].year = 2014;
    t1[3].award = "Peoples Choice Award";

    t1[4].title = "dfkidifj";
    t1[4].genre = "Drama";
    t1[4].year = 2016;
    t1[4].award = "Peoples Choice Award";

    for (int i = 0; i < 5; i++)
    {
        t1[i].search(s1);
    }
    
    return 0;
}


