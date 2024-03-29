#ifndef DEFINE_H
#define DEFINE_H


static boost::mutex mutex;


//--------------Defines------------------------//
#define showlidar 1;    //turn on/off the lidar image;
#define showcamera 1;   //turn on/off the camera image;
#define coutpos 1;      //turn on/off cout position of robot
#define TimStamp 10;           //timestamp

// ------------Changes to particelfilter --------------//
#define mapsize 1;     //How many times original map is enlarged (used for precision)
#define totallaserreadingsused 1;   //The number of laser distance that is used for determing the position
                                    //the total way around the robot (2Pi)
#define numberofParticels 1000;     //The number of particels used by the particelfilter;
#define standartdeviation 1 ;       //Taking in to account noise generated by the lidar;

// ------------Changes to postion path --------------//

#define TrackToMap 1.4173       // const used to translate position on the track compared to map
#define MapToTrack 0.705542     //const used to translate map pixels to points in the track
#define mapsizepoints 10        //size of map shown
#define robotprecision 1        //how close should the robot get to the specific point

// ------------ Usefull defines --------------//
#define pi 3.14159265359
#define Pi2 6.283185



#endif
