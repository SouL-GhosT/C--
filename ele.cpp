#include <iostream>
#include <iomanip>
using namespace std;

class Election {
private:
    int votes[5];           // Array to store votes for 5 candidates (index 0-4)
    int spoiltBallots;      // Counter for spoilt ballots
    int totalBallots;       // Counter for total ballots processed
    
public:
    // Constructor to initialize all data members
    Election() {
        spoiltBallots = 0;
        totalBallots = 0;
        
        // Initialize votes array with zero
        for (int i = 0; i < 5; i++) {
            votes[i] = 0;
        }
    }
    
    // Member function to count votes for a candidate
    void countVote(int candidateNumber) {
        totalBallots++;
        
        // Check if the candidate number is in valid range (1-5)
        if (candidateNumber >= 1 && candidateNumber <= 5) {
            votes[candidateNumber - 1]++;  // Increment vote for the candidate
        } 
        else {
            // If outside range, count as spoilt ballot
            spoiltBallots++;
        }
    }
    
    // Member function to display the results
    void displayResults() {
        cout << "\n";
        cout << "=====================================" << endl;
        cout << "        ELECTION RESULTS" << endl;
        cout << "=====================================" << endl;
        cout << "\nTotal Ballots Cast: " << totalBallots << endl;
        
        cout << "\n--- Candidate Votes ---" << endl;
        cout << setw(20) << "Candidate No." << setw(15) << "Votes" << endl;
        cout << "---------------------------------" << endl;
        
        for (int i = 0; i < 5; i++) {
            cout << setw(20) << (i + 1) << setw(15) << votes[i] << endl;
        }
        
        cout << "---------------------------------" << endl;
        cout << setw(20) << "Spoilt Ballots" << setw(15) << spoiltBallots << endl;
        cout << "=====================================" << endl;
    }
    
    // Member function to get votes for a specific candidate
    int getVotes(int candidateNumber) {
        if (candidateNumber >= 1 && candidateNumber <= 5) {
            return votes[candidateNumber - 1];
        }
        return -1;  // Return -1 if invalid candidate number
    }
    
    // Member function to get spoilt ballots count
    int getSpoiltBallots() {
        return spoiltBallots;
    }
    
    // Member function to get total ballots
    int getTotalBallots() {
        return totalBallots;
    }
    
    // Member function to find the winner
    void findWinner() {
        int maxVotes = 0;
        int winner = -1;
        
        for (int i = 0; i < 5; i++) {
            if (votes[i] > maxVotes) {
                maxVotes = votes[i];
                winner = i + 1;
            }
        }
        
        if (winner != -1) {
            cout << "\n*** WINNER: Candidate #" << winner << " with " 
                 << maxVotes << " votes ***" << endl;
        } 
        else {
            cout << "\nNo votes cast!" << endl;
        }
    }
};

int main() {
    Election election;  // Create an object of Election class
    int ballot;
    int numberOfBallots;
    
    cout << "========================================" << endl;
    cout << "     ELECTRONIC VOTING SYSTEM" << endl;
    cout << "========================================" << endl;
    cout << "\nInstructions:" << endl;
    cout << "1. Vote by entering candidate number (1-5)" << endl;
    cout << "2. Invalid entries will be counted as spoilt ballots" << endl;
    cout << "========================================" << endl;
    
    // Input: Number of ballots to process
    cout << "\nEnter the number of ballots to be cast: ";
    cin >> numberOfBallots;
    
    // Process each ballot
    cout << "\nEnter candidate numbers for each ballot:" << endl;
    for (int i = 1; i <= numberOfBallots; i++) {
        cout << "Ballot #" << i << " - Enter candidate number: ";
        cin >> ballot;
        
        election.countVote(ballot);  // Call member function to count vote
    }
    
    // Display results
    election.displayResults();
    
    // Find and display the winner
    election.findWinner();
    
    cout << endl;
    return 0;
}