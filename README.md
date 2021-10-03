## UVA10420_List_of_Conquests_7
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
-----
```c++
map<string,int>country;
```
### #We used map to solve this question ,first one is save country name , and the second one is save how many the country will input.
-----
```c++
for(int i=0;i<c;i++) //중요한건 map임;  
{
  .....
  cin.getline(ch,76);
}
```
The important thing is we have to check the empty in each line.
+ Final -> we use the map -> iterator to print the answer.
