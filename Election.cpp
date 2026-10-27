#include <iostream>
using namespace std;

class Election
{
    private:
    int votes[5];      
    int spoiltVotes; 
    int totalVotes; 
    public:
    Election()
    {
        for (int i = 0; i < 5; i++)
        {
           votes[i] = 0;
        }
        spoiltVotes = 0;
        totalVotes = 0;
    }

    void countVote(int candidate)
    {
        totalVotes++;
        if (candidate >= 1 && candidate <= 5)
            votes[candidate - 1]++;
        else
            spoiltVotes++;
    }

    void displayResult()
    {
        cout << "=====================================" << endl;
        cout << "        ELECTION RESULTS" << endl;
        cout << "=====================================" << endl;
        cout << "\nTotal Ballots Cast: " << totalVotes << endl; 
        for (int i = 0; i < 5; i++)
        {
            cout << "Candidate " << i + 1 << " : "<< votes[i] << " votes" << endl;
        }
        cout << "Spoilt Ballots : " << spoiltVotes << endl;
    }
};

int main()
{
    cout<<"Name: Nafisa"<<endl;
    cout<<"Registration No.: 25BHI10131"<<endl;
    Election e;
    int n, vote;
    cout << "Enter total number of ballots: ";
    cin >> n;
    cout << "Enter candidate numbers(1-5) for each ballot:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "Ballot #" << i << " - Enter candidate number: ";
        cin >> vote;
        e.countVote(vote);
    }
    e.displayResult();
    return 0;
}