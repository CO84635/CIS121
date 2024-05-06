#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

double CalculateAverage( const std::vector<double>& data) {
    double sum = 0;
    for(int i = 0; i < data.size(); i++) {
        sum+= data.at(i);
    }
    return sum / data.size();
}

using namespace std;

int main() {
    ifstream csvFile;
    std::ofstream updatedCsvFile("faithful_updated.csv");
    csvFile.open("C:\\Users\\blake\\Documents\\CIS121\\Week 12\\April 29th Participation\\faithful.csv");

    int sum = 0;

    vector<int> id;
    vector <double> time;
    vector<double> wait;
    vector<string> headers;

    bool has_passed_headers = false;
    if (csvFile.is_open())
    {
        string line;
        while (getline(csvFile, line))
        {
            stringstream ss(line);
            string data_point;
            if(has_passed_headers) {
                while (getline(ss, data_point, ',')) {
                    ++sum;
                    if (sum % 3 == 0) {
                        id.push_back(stoi(data_point));
                    } else if (sum % 3 == 1) {
                        time.push_back(stod(data_point));
                    } else if (sum % 3 == 2) {
                        wait.push_back(stoi(data_point));
                    }
                }
            } else {
                has_passed_headers = true;
            }
        }
    } else {
        cout << "Sorry, the CSV file is not opening." << endl;
    }

    if (!updatedCsvFile.is_open()) {
        cout << "Unable to create a new csv file!" << endl;
    }

    cout << "Average Time: " << CalculateAverage(time) << endl;
    cout << "Average Wait: " << CalculateAverage(wait) << endl;

    csvFile.close();

    return 0;
}
