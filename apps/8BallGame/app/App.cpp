#include<iostream>
#include<vector>
#include<string>
#include<time.h>

using namespace std;

const vector<string> anwsers = {"Yes", "Hell yea", "Nigga what?", "...", "Bruh", "Nah", "XD"};

int indicator = 1;

static string generateAnwser() {
    srand(time(0));
    return anwsers[(rand() % anwsers.size())];
}

string question;
char continue_playing;

static void game() {
    while (indicator == 1) {
        cout<<"Ask me anything.."<<endl;
        getline(cin, question);

        if (question != "") {
            string anwser = question + ": " + generateAnwser();
            cout<<anwser<<endl;
            cout<<"Wanna continue? (y/n/p): "<<endl;cin>>continue_playing;

            if (continue_playing == 'y' || continue_playing == 'n' || continue_playing == 'p') {
                switch (continue_playing) {
                    case 'y':
                        question = "";
                        anwser = "";
                        system("cls");
                        break;
                    case 'n':
                        system("cls");
                        indicator = 0;
                        system("exit");
                        break;
                    case 'p':
                        system("cls");
                        system("pause");
                        break;
                }
            } else {
                system("exit");
            }

        } else {
            system("cls");
        }      
    }
} 

int main() {
    game();
    return 0;
}