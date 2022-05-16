//
// Created by beloin on 14/05/2022.
//

#include <User.h>
#include "iostream"
#include "chrono"
using namespace std;

Iterator<Video*> *getIterator(User *user, const string& selection) {
    if (selection == "TIMESTAMP")
        return user->getVideoIterator(IteratorType::TIMESTAMP);
    if (selection == "VIEWS")
        return user->getVideoIterator(IteratorType::VIEWS);
    if (selection == "COMMENTS")
        return user->getVideoIterator(IteratorType::COMMENTS);
    return user->getVideoIterator(IteratorType::DEFAULT);
}

int main() {
    User *user = new User((string *) "Luciano Hulk");
    long now = chrono::system_clock::now().time_since_epoch().count();

    user->appendVideo(new Video(new string ("Allergy in All body"), 120, now, 15));
    user->appendVideo(new Video(new string ("Blick Blick!"), 20242534, 1647640887, 32104));
    user->appendVideo(new Video(new string ("Uterus May Obey God's word"), 120000, now-3600*48*1000, 2500));

    cout << "View Order ";
    cout << "options: 'TIMESTAMP', 'VIEWS', 'COMMENTS', 'DEFAULT'" << endl;
    cout << "Select View order: ";
    string viewOrder;
    cin >> viewOrder;

    auto iterator = getIterator(user, viewOrder);

    for (iterator->Fist(); !iterator->IsDone(); iterator->Next()) {
        auto v = iterator->CurrentItem();
        cout << "Name: " << *v->getTitle() <<  endl;
        cout << " - Views: " << v->getViewsCount() << endl;
        cout << " - Comments: " << v->getCommentsCount() << endl;
        cout << " - Timestamp: " << v->getTimestamp() << endl;
    }

    return 0;
}