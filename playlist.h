//
// Created by Veronica  Soden  on 4/17/21.
//

#ifndef PROJ3_PLAYLIST_H
#define PROJ3_PLAYLIST_H

#include <queue>
#include <string>
#include "song.h"
#include "BST.h"
#include "Survey.h"

using namespace std;

class playlist {
public:
    BST tree;
    queue<song> songQ;
    string playName;

    playlist(vector<song> catalog, Survey surveyRes);

private:
    vector<string> likedGenres;
    string mainGenre;
    vector<bool> songTimes;
    bool instrumental;
    bool energy;
    bool explicits;
    bool fastTempo;
    bool happy;
    bool loud;

};

#endif //PROJ3_PLAYLIST_H
