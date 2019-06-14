 map<string, string> test;
    test.insert(pair<string, string>("1", "hello"));
    test.insert(pair<string, string>("2", "world"));

    map<string, string>::iterator iter = test.find("1");
    cout << iter->second << endl;
    std::map<string,int> test;
    test.insert(make_pair("test1",1));//test["test1"]=1
    test.insert(make_pair("test2",2));//test["test2"]=2
    map<string,int>::iterator it;
    it=test.find("test0");
    cout<<"test0 find:";
    if(it==test.end()){
        cout<<"test0 not found"<<endl;
    }
    else{
        cout<<it->second<<endl;
    }
    cout<<"test0 count:";
    cout<<test.count("test1")<<endl;