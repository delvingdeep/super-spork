/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompts the user for the length of a room.
 **Then prompts for the width of the room.
 **Prints out the area of the room. 
 */

 #include <iostream>
 #include <string>
 #include <sstream>

 using namespace std;

 int main(){

     //defining variable datatypes
     string roomLength, roomWidth;
     float length=0, width=0, area=0;

     //asking user for length of a room
     cout<<"Enter the length of room \n";
     getline(cin, roomLength);

     //asking user for width of the room
     cout<<"Enter the width of room \n";
     getline(cin, roomWidth);

     //converting string length and width to float
     stringstream(roomLength)>>length;
     stringstream(roomWidth)>>width;

     //computing the area of room
     area = length*width;

     //display area on the console
     cout<<"Area for the room with length "<<length<<" and width "<<width<<" is "<<area;

     return 0;
 }
