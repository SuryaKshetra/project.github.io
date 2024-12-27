#include <iostream>
#include <climits>
using namespace std;
class dijik{
    public:
    void read();
    int min(int x, int y);
    void shortest_path(int src,int dest);
    int vertice;
    int vist[100];
    int v[100];
    int dist[100];
    int path[100];
    int cost[100][100];
};

int dijik::min(int x,int y)
{
    if(x<=y)
    {
        return x;
    }
    else if(y<x)
    {
        return y;
    }
}

void dijik::shortest_path(int src,int dest)
{
    dijik obj2;
    src=(obj2.vertice)-1;
    vist[0]=src;
}

void dijik::read()
{
    int src,dest;
    dijik obj;
    int weight;    
    cout<<"ENTER source destination weight\n";
    cin>>src;
    cin>>dest;
    cin>>obj.cost[src][dest];
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    dijik o;
    void displayArray(int arr[], int size);
    int i;
    //INITIALISATION ALL ENTRIES OF COST TO NULL
    for(int count=0;count<100;count++)
    {
        for(int count2=0;count2<100;count2++){
        o.cost[count][count2]=INT_MAX/2;}
    }
    cout<<"Enter no of vertices\n";
    cin>>o.vertice;
    for(i=0;i<o.vertice;i++)
    {
        o.v[i]=i;
    }
    while (1)
    {
        int ch;
        cout<<"Enter choice\n";
        cout<<"1--read\n";
        cout<<"2--Display cost matrix\n";
        cout<<"3--Shortest path\n";
        cout<<"10--extit\n ";
        cin>>ch;
        if(ch==1)
        {
            int no_entries;
            cout<<"Enter no. of weighted entries\n";
            cin>>no_entries;
            for(int temp=0;temp<no_entries;temp++)
            {
                int src,dest;
                cout<<"ENTER source destination weight\n";
                cin>>src;
                cin>>dest;
                cin>>o.cost[src][dest];    
            }
        }
        else if(ch==2)
        {
            cout<<"Cost Matrix is\n";
            int c,d;
            for (c=0;c<o.vertice;c++)
            {
                for(d=0;d<o.vertice;d++)
                {
                if(o.cost[c][d]==INT_MAX/2)
                {cout<<"src: "<<c<<"\tdest: "<<d<<"\tweight: "<<"INFINITY"<<endl;}
                else if(o.cost[c][d]!=INT_MAX/2)
                {cout<<"src: "<<c<<"\tdest: "<<d<<"\tweight: "<<o.cost[c][d]<<endl;}}
            }
            cout<<"Visited array\t"<<o.vist<<endl;
            cout<<"NOT YET Visited array\t"<<o.v<<endl; 
            cout<<"Distance array\t"<<o.dist<<endl;
            cout<<"Path array\t"<<o.path<<endl;

        }
        else if(ch==10)
        {
            exit(0);
        }
    }
return 0;
}
