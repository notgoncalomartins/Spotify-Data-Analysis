#pragma once
#include <string>

struct StreamInfo {
    std::string TrackName;
    std::string ArtistName;
    long msPlayed;
    std::string EndTime;
}

struct ArtistStats {
    std::string ArtistName;
    long msPlayed;
    int PlayCount;
}

struct SongStats {
    std::string TrackName;
    std::string ArtistName;
    long msPlayed;
    int PlayCount;
}

struct OverallStats {
    long TotalmsPlayed;
    int TotalSongsPlayed;
    int TotalUniqueSongs;
    int TotalArtistsPlayed;

    std::vector<ArtistStats> top10Artists;
    std::vector<SongStats> top10Songs;
}
