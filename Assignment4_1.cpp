/*
Create a cpp class named as Artist having 
data member 
		name , rating (3 ,4) , country 
member function 
		acceptArtistData()
		printArtistData()
		bool isFamous() --> [if rating is 1/2 then not 	Famous ], [if rating is 3/4 then Famous Artist  ]

Create a cpp class named as painter derived from Artist  class having 
data member 
		string type [decorative, commercial]
		PaintingRate [500 per Painting]
		number of Painting.

member function 
		acceptPainterData()
		printPainterData()
		calcuteTotalIncome()
Ex( M_F_Husain , 2 ,India,  commercial, 50000, 250)


Create a cpp class named as singer derived from Artist  class having 
data member 
		number of album 
		RatePerSong [1000 per song]
member function 
		acceptsingerData()
		printsingerData()
		calcuteTotalIncome()
Ex( Michael Jackson, 4 , American ,  70000, 1350)
*/

#include<iostream>
using namespace std; 

class Artist
{
    public:
    string name;
    string country;
    int rating;

    void acceptArtistData()
    {
        cout << "Enter a Name of Artist : " << endl;
        cin >> name;
        cout << "Enter a country name : " << endl;
        cin >> country;
        cout << "enter a rating out of 5 : " << endl;
        cin >> rating;
    }

    bool isFamous()
    {
        if(rating <= 2)
        {
            return false;
        }
        else if(rating >= 3 && rating <= 5)
        {
            return true;
        }
    }

    void printArtistData()
    {
        cout << "Name of Artist = " << name << endl;
        cout << "Name of country = " << country << endl;
    }
};

class painter : public Artist
{
    public:
    string Type;
    int PaintingRate;
    int No_of_Painting;

    void acceptPainterData()
    {
        cout << "Enter a Type of Painting : "<<endl;
        cin >> Type;
        cout << "Enter a Painting rate : " << endl;
        cin >> PaintingRate;
        cout << "Enter a Number of Paintings : "<< endl;
        cin >> No_of_Painting;
    }
    void printPainterData()
    {
        cout << "Type of Painting is : " << Type << endl;
        cout << "Painting Rate per piece is : "<< PaintingRate << endl;
        cout << "Total Paintings available : "<< No_of_Painting << endl;
    }
    void calcuteTotalIncome()
    {
        cout << "Total Calculation of Income = " <<PaintingRate*No_of_Painting << endl;
    }
};

class singer : public Artist
{
    public:
    int No_of_album;
    int Rate_Per_song;

    void acceptsingerData()
    {
        cout << "Enter the Number of album : "<< endl;
        cin >> No_of_album;
        cout << "Enter a Rate for per song : "<< endl;
        cin >> Rate_Per_song;
    }
    void printsingerData()
    {
        cout << "Number of alubums are : "<< No_of_album << endl;
        cout << "Rate for per album : "<< Rate_Per_song << endl;
    }
    void calculateTotalIncome()
    {
        cout << "Total Income = " << No_of_album*Rate_Per_song << endl;
    }

};


int main()
{
    bool Result;
    
    // aobj.acceptArtistData();
    // aobj.printArtistData();
    //aobj.isFamous();
    
    //if(aobj.isFamous() == false)
    
    
    painter pobj;
    pobj.acceptArtistData();
    pobj.printArtistData();
    pobj.isFamous();
    
    //Artist aobj;
    Result = pobj.isFamous();
    if(Result == false)
    {
        cout << "Artist is Not famous" << endl;
    }
    else
    {
        cout << "Artist is famous" << endl;
    }

    pobj.acceptPainterData();
    pobj.printPainterData();
    pobj.calcuteTotalIncome();

    singer sobj;
    sobj.acceptArtistData();
    sobj.printArtistData();
    sobj.isFamous();
    Result = sobj.isFamous();
    if(Result == false)
    {
        cout << "Artist is Not famous" << endl;
    }
    else
    {
        cout << "Artist is famous" << endl;
    }
    sobj.acceptsingerData();
    sobj.printsingerData();
    sobj.calculateTotalIncome();

    
    return 0;
}