#include <iostream>
#include <algorithm>

using namespace std;
struct stu
{
    int sum;
    int chin;
    int math;
    int eng;
    string name;
};
bool comp(const stu& p, const stu& k)
{
    if(p.sum != k.sum)
        return p.sum > k.sum;
    else if(p.chin != k.chin )
        return p.chin > k.chin;
    else if(p.math != k.math)
        return p.math > k.math;
    else
        return p.eng > k.eng;

}

int main()
{
    int n;
    cin >> n;
    stu *p = new stu[n];
    for(int i=0; i < n; i++ )
        cin >> p[i].name >> p[i].sum >> p[i].chin >>p[i].math >> p[i].eng;

    sort(p,p+n,comp);

    for(int i=0; i < n; i++ )
        cout << p[i].name << ' ' << p[i].sum << ' '<< p[i].chin <<' '<< p[i].math << ' '<< p[i].eng << endl;
    delete []p;
    return 0;
}
