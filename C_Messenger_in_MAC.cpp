#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

class AuthenticationSystem {
private:
    unordered_map<string, bool> loggedInUsers; // username -> loggedIn
    unordered_map<string, string> userPasswords; // username -> password
public:
    vector<string> authenticate(const vector<string>& input) {
        vector<string> output;
        for (const string& operation : input) {
            istringstream iss(operation);
            string action, username, password;
            iss >> action >> username;
            if (action == "register") {
                iss >> password;
                output.push_back(registerUser(username, password));
            } else if (action == "login") {
                iss >> password;
                output.push_back(loginUser(username, password));
            } else if (action == "logout") {
                output.push_back(logoutUser(username));
            }
        }
        return output;
    }

private:
    string registerUser(const string& username, const string& password) {
        if (userPasswords.find(username) != userPasswords.end()) {
            return "Registered Unsuccessful";
        }
        userPasswords[username] = password;
        return "Registered Successfully";
    }

    string loginUser(const string& username, const string& password) {
        if (userPasswords.find(username) == userPasswords.end()) {
            return "Login Unsuccessful";
        }
        if (loggedInUsers.find(username) != loggedInUsers.end()) {
            return "Login Unsuccessful";
        }
        if (userPasswords[username] != password) {
            return "Login Unsuccessful";
        }
        loggedInUsers[username] = true;
        return "Logged IN Successfully";
    }

    string logoutUser(const string& username) {
        if (loggedInUsers.find(username) == loggedInUsers.end()) {
            return "Logout Unsuccessful";
        }
        loggedInUsers.erase(username);
        return "Logged Out Successfully";
    }
};

vector<string> implementAPI(vector<string> &input) {
   AuthenticationSystem authSystem;
    vector<string> output = authSystem.authenticate(input);

    return output;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Consume newline
     cout<<n<<endl;
    vector<string> input;
    string line;
    for (int i = 0; i < n; ++i) {
        getline(cin, line);
        input.push_back(line);
    }
  
    vector<string> r = fun(input);

   

   
    return 0;
}
