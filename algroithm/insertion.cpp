/*
 * @Descripttion: insertion sort(O(n^2), O(1))
 * @version: v0.1
 * @Author: youngchany
 * @Date: 2019-06-13 10:18:37
 * @LastEditors: youngchany
 * @LastEditTime: 2019-06-16 10:35:22
 */

#include <iostream>
#include <vector>
#include <random>
using std::cout;
using std::default_random_engine;
using std::endl;
using std::vector;

void printf_vec(vector<uint32_t> v)
{
    cout << "hello ~" << endl;
    for (size_t i = 0; i < v.size(); i ++)
    {
        cout << v[i] << endl;
    }
    cout << "world!!!" << endl;
}

void insertionsort(vector<uint32_t> &v)
{
    cout << "insertionsort begin!" << endl;
    for (int i = 1; i < v.size(); i++)
    {
        uint32_t tmp = v[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (tmp < v[j])
            {
                v[j + 1] = v[j];
                
            }
            else 
            {
                break;
            }
        }
        v[j+1] = tmp;
        
    }
    cout << "end!" << endl;
    printf_vec(v);
} 

int main(int argc, char *argv[])
{
    default_random_engine e;
    vector<uint32_t> v;
    for (size_t i = 0; i < 20; i++)
    {
        v.push_back(e());
    }
    printf_vec(v);

    insertionsort(v);
    // cout << "Min random: " << e.min() << endl;
    // cout << "Max random: " << e.max() << endl;
    return 0;
}
