#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to calculate the number of subnets and usable hosts per subnet
pair<int, int> calculateSubnetsAndHosts(const string& input) {
    // Split the input into IP and CIDR mask
    size_t slashPos = input.find('/');
    int cidrMask = stoi(input.substr(slashPos + 1));

    // Determine the default mask based on the class of the IP address
    int defaultMask;
    int firstOctet = stoi(input.substr(0, input.find('.')));

    if (firstOctet >= 1 && firstOctet <= 126) {
        defaultMask = 8; // Class A
    } else if (firstOctet >= 128 && firstOctet <= 191) {
        defaultMask = 16; // Class B
    } else if (firstOctet >= 192 && firstOctet <= 223) {
        defaultMask = 24; // Class C
    } else {
        return {-1, -1}; // Invalid IP address class
    }

    // Calculate borrowed bits and remaining host bits
    int borrowedBits = cidrMask - defaultMask;
    int hostBits = 32 - cidrMask;

    // Calculate number of subnets and usable hosts per subnet
    int numberOfSubnets = pow(2, borrowedBits);
    int usableHostsPerSubnet = pow(2, hostBits) - 2;

    return {numberOfSubnets, usableHostsPerSubnet};
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        string input;
        cin >> input;

        auto result = calculateSubnetsAndHosts(input);
        if (result.first == -1) {
            cout << "-1" << endl;
        } else {
            cout << result.first << " " << result.second << endl;
        }
    }

    return 0;
}
