#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;++i){
        int godzilaSoldiers,enemiesSoldiers,godzilamax=0,enemymax=0;
        cin>>godzilaSoldiers>>enemiesSoldiers;
        int godzilaArmy[godzilaSoldiers],enemiesArmy[enemiesSoldiers];
        for(int j=0;j<godzilaSoldiers;++j){
            cin>>godzilaArmy[j];
            if(godzilaArmy[j]>godzilamax)godzilamax=godzilaArmy[j];
        }
        for(int j=0;j<enemiesSoldiers;++j){
            cin>>enemiesArmy[j];
            if(enemiesArmy[j]>enemymax)enemymax=enemiesArmy[j];
        }
        // All you have to do is just compare the maximum elements of both array and Bang!
        if(godzilamax<enemymax)cout<<"MechaGodzilla\n";
        else cout<<"Godzilla\n";
    }
    return 0;
}
