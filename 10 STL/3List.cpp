#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> playlist;

    // Adding songs to the playlist
    playlist.push_back("Song A");
    playlist.push_back("Song B");
    playlist.push_back("Song C");

    // Inserting a song at the beginning
    playlist.push_front("Intro Song");

    // Removing a song
    playlist.remove("Song B");

    // Displaying the playlist
    for (const string &song : playlist) {
        cout << song << " ";
    }
    return 0;
}
