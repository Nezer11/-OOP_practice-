#include <iostream>
#include <vector>
using namespace std;
class BaseSound {
public:
    virtual void ShowDate() = 0;
};

class Song : public BaseSound {
public:
    void ShowDate() override {
        cout << "This is a Song" << endl;
    }
};

class Audiobook : public BaseSound {
public:
    void ShowDate() override {
        cout << "This is an Audiobook" << endl;
    }
};

int main() {
    vector<BaseSound*> soundVector;
    int choice = 1;
    int index = 0;

    while (choice != 0) {
        cout << "1. Add a Song\n";
        cout << "2. Add an Audiobook\n";
        cout << "0. End\n";
        cin >> choice;

        switch (choice) {
        case 1:
            soundVector.push_back(new Song());
            index++;
            break;
        case 2:
            soundVector.push_back(new Audiobook());
            index++;
            break;
        case 0:
            break;
        default:
            std::cout << "There is no such choice\n";
            break;
        }
    }

    cout << "\nSound vector:\n";
    for (int i = 0; i < soundVector.size(); i++) {
        soundVector[i]->ShowDate();
    }

    vector<BaseSound*> sound1(soundVector);
    soundVector.erase(
        remove_if(soundVector.begin(), soundVector.end(),
            [](BaseSound* obj) { return dynamic_cast<Song*>(obj) != nullptr; }),
        soundVector.end()
    );

    sound1.erase(
        remove_if(sound1.begin(), sound1.end(),
            [](BaseSound* obj) { return dynamic_cast<Audiobook*>(obj) != nullptr; }),
        sound1.end()
    );

    cout << "\nSong vector:\n";
    for (int i = 0; i < soundVector.size(); i++) {
        soundVector[i]->ShowDate();
    }

    cout << "\nAudiobook vector:\n";
    for (int i = 0; i < sound1.size(); i++) {
        sound1[i]->ShowDate();
    }

    // Звільнення пам'яті, виділеної під об'єкти
    for (BaseSound* obj : soundVector) {
        delete obj;
    }
    for (BaseSound* obj : sound1) {
        delete obj;
    }

    return 0;
}
