#include<bits/stdc++.h>
using namespace std;

//enum genre{pop,jazz,classic};

struct album
{
    string album_name;
    string genre;
    int track_number;
    string track[5];
    string track_location;
};
vector<album>music;
void add()
{
    album new1;
    cout<<"enter Album name"<<endl;
    string s;
    cin>>s;
    new1.album_name=s;
    cout<<"enter genre  from these pop, jazz, classic in string form (means name of genre): "<<endl;
    string x;
    cin>>x;

    new1.genre=x;
    cout<<"enter no of tracks in album max 5 : "<<endl;
    int y;
    cin>>y;
    new1.track_number=y;
//    string new1.track[y];
    int i=0;
    cout<<"enter name of these "<<y<<" tracks: "<<endl;
    while(y--)
    {
        string r;
        cin>>r;
        new1.track[i]=r;
        i++;
    }
    cout<<"enter files location of these trackes: "<<endl;
    string f;
    cin>>f;
    new1.track_location=f;
    music.push_back(new1);
    cout<<endl;
    cout<<"album successful added in list: "<<endl;
}
void print()
{
   int i,j;
   for(i=0;i<music.size();i++)
   {
       cout<<"Name of the album : "<<music[i].album_name<<endl;
       cout<<"genre of album : "<<music[i].genre<<endl;
       cout<<"nos of tracks : "<<music[i].track_number<<endl;
       cout<<"Tracks are :"<<endl;
       for(j=0;j<music[i].track_number;j++)
       {
           cout<<music[i].track[j]<<endl;
       }
       cout<<"track location is : "<<music[i].track_location<<endl;
       cout<<endl;
   }
   cout<<endl;
   cout<<endl;
}
void play()
{
    cout<<"enter to album to play :"<<endl;
    int i;
    string h;
    cin>>h;
    int y=0;
    int b=0;
    for(i=0;i<music.size();i++)
    {
        if(music[i].album_name==h)
        {
        y++;
        b=i;
        break;
        }
    }
    if(y==0)
    {
        cout<<"album does not exit :"<<endl;
        return;
    }
    cout<<"this album contain "<<music[b].track_number<<" tracks"<<endl;
    cout<<"tracks are :"<<endl;
    for(i=0;i<music[b].track_number;i++)
    {
        cout<<music[b].track[i]<<endl;
    }
    cout<<"please select an track to play from above list : "<<endl;
    string d;
    cin>>d;
    for(i=0;i<music[b].track_number;i++)
    {

        if(d==music[b].track[i])
        {
            cout<<"the track you selected is "<<d<<".mp3"<<"  from album "<<music[b].album_name<<" is now playing from file location "<<music[b].track_location<<endl;
            break;
        }
    }
    cout<<endl;
}
main()
{
    music.clear();
    int n;
    while(1)
    {
    cout<<"1 to add an album"<<endl;
    cout<<"2 to print album details"<<endl;
    cout<<"3 to play an  track from album"<<endl;
    cout<<"4 to Quit"<<endl;
    cin>>n;
    if(n==4)
    break;
    if(n==1)
    add();
    if(n==2)
    print();
    if(n==3)
    play();
    cout<<endl;
    cout<<endl;
    cout<<"for more process: "<<endl;
    }

}
