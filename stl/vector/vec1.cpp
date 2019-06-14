#include <iostream>
#include <map>
#include <string>
#include <cstring>
#include<queue>
#include<algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    std::map<string,int> test;
    test.insert(make_pair("test1",1));//test["test1"]=1
    test.insert(make_pair("test2",2));//test["test2"]=2
    // test["hehehe"] = 3;
    // test["test2"] = 4;
    map<string,int>::iterator it;
    it=test.find("test0");
    cout<<"test0 find:";
    if(it==test.end()){
        cout<<"test0 not found"<<endl;
    }
    else{
        cout<<it->second<<endl;
    }
    cout<<"test1 count:";
    cout<<test.count("test1")<<endl;

    return 0;
}
