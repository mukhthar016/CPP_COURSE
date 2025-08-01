#include<iostream>
#include<vector>
using namespace std;

class phones {
public:
    string phone_name;
    string display_type;
    string display_quality;

    phones(string p, string dt, string dq) {
        phone_name = p;
        display_type = dt;
        display_quality = dq;
    }

    void display() {
        cout << phone_name << " has " << display_type << " display " << display_quality << "\n";
    }
};

int main() {
    vector<phones> phone;

    while (true) {
        string name;
        string type;
        string quality;

        cout << "enter phone name:\n";
        getline(cin, name);

        if (name == "stop") {
            break;
        }

        cout << "enter display type:\n";
        getline(cin, type);

        cout << "enter display quality:\n";
        getline(cin, quality);

        phone.push_back(phones(name, type, quality));
    }

    // printing the objects
    cout << "<-----before update:----->\n";
    for (phones p : phone) {
        p.display();
    }

    // changing the value of objects 
    for (phones &p : phone) {
        if (p.display_type == "amoled" || p.display_type == "oled" || p.display_type == "led") {
            p.display_quality = "good";
        }
        else {
            p.display_quality = "average";
        }
    }

    // printing after the updation
    cout << "<-----after updation------>:\n";
    for (phones p : phone) {
        p.display();
    }

    return 0;
}
