// Passing pointers to arrays
#include <iostream>
#include <string>
using namespace std;


class Car {
   
    private:
        int speed = 0;
   
   
    public:
        string brand;
        
        void vroom(){
            cout << "Vroom Vroom" << endl;
        }
        
        void printBrand(){
            cout << "The brand is: " << brand << endl;
        }
        
        void increaseSpeed(int increment){
            speed = speed + increment;
        }
        
        void printSpeed(){
            cout << "The speed is: " << speed << endl;
        }
       
};

int main()
{
    Car myCar;
    myCar.brand = "Toyota";
    myCar.printBrand();
    myCar.printSpeed();
    myCar.increaseSpeed(10);
    myCar.printSpeed();
    myCar.vroom();
    return 0;
}

#include <iostream>
using namespace std;


// Basic syntax of a class
class ClassName{
    // Public members
    public:
        void publicOutput(){
            cout << "void" << endl;
        }
        
    private:
        int privateOutput;
        
};

int main(){
    ClassName myClass;
    myClass.publicOutput();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Create a class called Car
// It should have one private variable: year
// It should have two public variables make and model
// It should have a public function to getYear
// It should a public function to display the info of the car
// It should have a public function to set the year of the car. Add a check and only allow
// the year to be updated if it is in the range of 1950 to 2024. If not output an error.

class Car {
    private:
        int year;
        
    public:
        string make;
        string model;
        
        int getYear(){
            return this->year;
        }
        
        void displayInfo(){
            cout << "The year: " << this->year << " " << "The make: " << this->make << "The model: " << this->model << endl;
        }
        
        void setYear(int givenYear){
            if(givenYear >= 1960 && givenYear <= 2024){
                this->year = givenYear;
            } else{
                cout << "Invalid Year." << endl;
            }
        }


};


int main() {
	// Create a car object. Call it car 1
    Car car1;
    
	// Set the make and model for it.
    car1.make = "Toyota";
    car1.model = "Corolla";

	// Try to update the year with a invalid year.
    car1.setYear(1800);
	// Update the year with a valid year.
    car1.setYear(2000);


	// Display the information
    car1.displayInfo();



	// Create another car object. Call it car 2.
    Car car2;

	// Set the year to 2021
    car2.setYear(2021);

	// Display the information
	car2.model = "Mustang";
	car2.make = "Ford";
	car2.displayInfo();

}

#include <iostream>
#include <string>
using namespace std;


// Create a class called BaseballTeam

// Three private variables: establishedYear, players (which is an array of string of size 9)
// and playerCount
// Make playerCount 0 in the beginning

// Two public variables: teamName and homeCity

// Public function: setEstablishedYear. Ensure it is between 1850 and 2024. Print error otherwise.
// Public function: getEstablishedYear

// Public function: addPlayer. Add the newPlayer to the array of strings.
// If playerCount > 9, then cout cannot add more player.

// Public function: displayTeamInfo. Shows the team name, home city, established year and a for loop showing BaseballTeam
// the players.

class BaseballTeam{
    private:
    int establishedYear;
    string players[9];
    int playerCount = 0;
    
    public:
    string teamName;
    string homeCity;

    void setEstablishedYear(int establishedYear){
        if(establishedYear >= 1850 && establishedYear <= 2024){
           this->establishedYear = establishedYear;
        } else {
            cout << "Not a valid year." << endl;
        }
    }
    int getEstablishedYear(){
        return this->establishedYear;
    }
    void addPlayer(string addNewPlayer){
        if(this->playerCount < 9){
            this->players[this->playerCount] = addNewPlayer;
            this->playerCount++;
        } else {
            cout << "There is no more room on the roster." << endl;
        }
    }
    void displayTeamInfo(){
        cout << "Team name: " << this->teamName << endl;
        cout << "Home city: " << this->homeCity << endl;
        cout << "The year established: " << this->establishedYear << endl; 
        cout << "Players: " << endl;
        for(int i = 0; i < this->playerCount; i++){
            cout << this->players[i] << endl;
        }
        cout << endl << endl << endl;
    }
    cout << "add to class of 'baseball team'" << endl;
};


int main() {
       // Create a basebasll team called baseball1
   BaseballTeam baseball1;
    // Update team name
    baseball1.teamName = "New York Mets";
    // Update home city
    baseball1.homeCity = "New York";
    // Set established year
    baseball1.setEstablishedYear(1962);
    // Add three players
    baseball1.addPlayer("Fransisco Lindor");
    baseball1.addPlayer("Mark Vientos");
    baseball1.addPlayer("Brandom Nimmo");

    // Display Team Info
    baseball1.displayTeamInfo();
cout << "Add to main of baseball team" << endl;
}

#include <iostream>
#include <string>
using namespace std;

// Three private variables: totalCountries, countries (string array of size 50), countryCount

// Three public variables: continentName, area (in square kilometers), population (in millions)

// Public method: addCountry
// Public method: setTotalCountries. Check if it is within 1 and 50
// Public method: getTotalCountries
// Public method: displayInfo (shows continent name, area, population, total countries, countries added)
class Continent{
    private:
    int totalCountries;
    string countries[50];
    int countryCount = 0;
    
    public:
    string continentName;
    double area;
    long population;

    void addCountry(string newCountry){
        if(countryCount < 50){
            this->countries[this->countryCount] = newCountry;
            this->countryCount++;
        } else {
            cout << "Invalid, exceeding maximum." << endl;
        }
    }
    void setTotalCountries(int totalCountries){
        if(totalCountries > 0 && totalCountries <= 50){
            this->totalCountries = totalCountries;
        } else {
            cout << "Invalid total countries." << endl;
        }
    }
    int getTotalCountries(){
        return this->totalCountries;
    }
    void displayInfo(){
        cout << "Continent Name: " << this->continentName << endl;
        cout << "Continent Area: " << this->area << endl;
        cout << "Contient Population: " << this->population << endl;
        cout << "Total Conutries: " << this->totalCountries << endl;
        for(int i = 0; i < this->countryCount; i++){
            cout << "-" << this->countries[i] << endl;
        }
    }
};

int main() {
    // Create a continent object from the class called myContinent
    Continent myContinent;
    // Set the name, area, population and total countries
    myContinent.continentName = "Asia";
    myContinent.area = 1.68;
    myContinent.population = 4815;
    myContinent.setTotalCountries(48);
    // Add 3 countries
    myContinent.addCountry("India");
    myContinent.addCountry("Mongolia");
    myContinent.addCountry("Pakistan");
    // Displaying continent info
    myContinent.displayInfo();
}

#include <iostream>
#include <string>
using namespace std;

// Create a transaction class
// it should be able to store the amount and type of a transaction
// it should have get and set for amount and type as public variables
class Transaction {
    private:
        float amount;
        string type;
    
    public:
        float getAmount(){
            return this-> amount;
        }
        
        void setAmount(float amount){
            this->amount = amount;
        }
        
        string getType(){
            return this-> type;
        }
        
        void setType(string type){
            this->type = type;
        }
};

// Create a function that calculates the net amount
float calculateNetAmount(Transaction transaction[], int size){
    float netAmount = 0;
    for(int i = 0; i < size; i++){
        if(transaction[i].getType() == "Income"){
           netAmount += transaction[i].getAmount();
        } else {
            netAmount -= transaction[i].getAmount();
        }
    }
    return netAmount;
}

int main() {
    // Create a transaction of type Income with amount 100.00
    Transaction transaction1;
    transaction1.setAmount(100.00);
    transaction1.setType("Income");

    // Create a transaction of type Expense with amount 20.00
    Transaction transaction2;
    transaction2.setAmount(20.00);
    transaction2.setType("Expense");
   
    // Create an array of Transaction class that has two elements
    Transaction transArray[2] = {transaction1, transaction2};
   
   
    // Now pass that array to calculate the net amount
    cout << "The New Amount:" << calculateNetAmount(transArray, 2) << endl;
   
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Bank Account class
class BankAccount{
  private:
  double balance;
  string accountName;
 
  public:
    //   Empty constructor
    BankAccount(){
    cout << "This is an empty constructor" << endl;
    }
 
    // Parameterized constructor
    BankAccount(double balance, string accountName){
        this->balance = balance;
        this->accountName = accountName;
    }

    // Getters
    double getBalance(){
        return this->balance;
    }
    
    string getAccountName(){
        return this->accountName;
    }
   
    
   
    // Destructor
    ~BankAccount(){
        cout << "Destructor is called." << endl;
    }

};


int main() {
    // Without constructor we had to set each value once.
    // BankAccount b1;
    // b1.setBalance(100);
    // b1.setAccountName("Deposit Account");
   
   
    // With constructor we just have to pass the values in the initial call
    BankAccount b1(100, "Deposit");
    cout << "Balance: " << b1.getBalance() << endl;
    cout << "Account Name: " << b1.getAccountName() << endl;
   
   
    // Object that calls empty constructor
    BankAccount b2;
   
   
    return 0; 
}

#include <iostream>
#include <string>
using namespace std;

// Class to represent a political candidate
class Candidate{
    public:
    string name;
    string party;
    int votes;

// Empty Constructor
    Candidate(){
        
    }

    // Parameterized constructor
    Candidate(string n, string p, int v){
        this->name = n;
        this->party = p;
        this->votes = v;
    }

    // Function to display candidate information
    void displayInfo(){
        cout << "Name: " << name << ", Party: " << party << ", Votes: " << votes << endl;
    }
};

// Function to find the candidate with the most votes
Candidate findTopCandidate(Candidate candidates[], int numCandidates){
    Candidate topCandidate = candidates[0];
    for(int i = 0; i < numCandidates; i++){
        if(candidates[i].votes > topCandidate.votes){
            topCandidate = candidates[i];
        }
    }
    return topCandidate;
}

// Function to display candidates with votes greater than a given number
void displayCandidatesWithMinVotes(Candidate candidates[], int numCandidates, int minVotes){
    cout << "The candidates with more than" << minVotes << "votes: " << endl;
    for(int i = 0; i < numCandidates; i++){
        if(candidates[i].votes > minVotes){
            candidates[i].displayInfo();
        }
    }
}

int main() {
    int numCandidates;
    cout << "Enter number of candidates: " << endl;
    cin >> numCandidates;

    // Declare an array of Candidate objects
    Candidate candidates[numCandidates];

    // Input candidate details
    for(int i = 0; i < numCandidates; i++){
        string name, party;
        int votes;

        cout << "\n Enter details for candidates: " << i + 1 << ": \n";

        // Using cin for single-word inputs (name and party)
        cout << "Name: " << endl;
        cin >> name;
        
        cout << "Party: " << endl;
        cin >> party;
        
         cout << "Votes: " << endl;
         cin >> votes;
         
        // Create candidate object and assign to the array
        candidates[i] = Candidate(name, party, votes);
    }

// Display all candidates' information
    cout << "\n --- All Election Candidate --- \n" << endl;
    for(int i = 0; i < numCandidates; i++){
        candidates[i].displayInfo();
    }

    // Find the candidate with the most votes
    Candidate topCandidates = findTopCandidate(candidates, numCandidates);
    cout << "\n Candidate with most: \n" << endl;
    topCandidates.displayInfo();

    // Display candidates who received more than a certain number of votes
    int minVotes;
    cout << "\n Enter the mimimum number of votes to filter candidate: \n" << endl;
    cin >> minVotes;
    displayCandidatesWithMinVotes(candidates, numCandidates, minVotes);

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Class to represent an NFL player
class NFLPlayer {
public:
    string name;
    string position;
    int touchdowns;

    // Empty Constructor
    NFLPlayer() {
       
    }

    // Parameterized constructor
    NFLPlayer(string n, string p, int t){
        this->name = n;
        this->position = p;
        this->touchdowns = t;
    }

    // Function to display player information
    void displayInfo() {
        cout << "Name: " << name << ", Position: " << position << ", Touchdowns: " << touchdowns << endl;
    }
};


// Function to find the player with the most touchdowns
NFLPlayer findTopScorer(NFLPlayer players[], int numPlayers) {
    NFLPlayer topScorer = players[0];
    for (int i = 1; i < numPlayers; i++) {
        if (players[i].touchdowns > topScorer.touchdowns) {
            topScorer = players[i];
        }
    }
    return topScorer;
}
