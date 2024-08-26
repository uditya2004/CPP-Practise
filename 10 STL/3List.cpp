#include <iostream>
#include <list>       //Including header file "list"

using namespace std;

// Displaying the playlist
void Display(list<string> &playlist){

    for (const string &song : playlist){   //list container does not support random access using the [] operator. You can use an iterator to iterate over the elements of the list.
        cout<<song<<" ";
    }
}

int main() { 
    list<string> playlist;     // We created an object "playlist" for the template class list.

    // Adding songs to the end
    playlist.push_back("Song A");
    playlist.push_back("Song B");
    playlist.push_back("Song C");

    Display(playlist);
    cout<<endl;

    // Adding a song at the beginning
    playlist.push_front("Intro-Song");

    //Deleting element from the front
    playlist.pop_front();

    //Deleting element from the back
    playlist.pop_back();

    // Removing a particular element
    playlist.remove("Song B");

    //Finding the size
    cout<<"size: "<<playlist.size()<<endl;

    Display(playlist);
    
    return 0;
}
