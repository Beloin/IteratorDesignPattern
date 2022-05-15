//
// Created by beloin on 14/05/2022.
//

#include <User.h>
#include "iostream"
#include "chrono"
using namespace std;

int main() {
    User *user = new User((string *) "Luciano Hulk");
    long now = chrono::system_clock::now().time_since_epoch().count();

    user->appendVideo(new Video(new string ("Allergy in All body"), 120, now, 15));
    user->appendVideo(new Video(new string ("Uterus May Obey God's word"), 120000, now-3600*48, 2500));
    user->appendVideo(new Video(new string ("Blick Blick!"), 20242534, 1647640887, 32104));

    auto iterator = user->getVideoIterator(IteratorType::VIEWS);

    for (iterator->Fist(); !iterator->IsDone(); iterator->Next()) {
        auto v = iterator->CurrentItem();
        cout << "Name: " << *v->getTitle() <<  endl;
        cout << " - Views: " << v->getViewsCount() << endl;
        cout << " - Comments: " << v->getCommentsCount() << endl;
        cout << " - Timestamp: " << v->getTimestamp() << endl;
    }

    return 0;
}