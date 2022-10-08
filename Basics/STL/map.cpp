#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	// freopen("cpp_Cp.txt","r",stdin);

	int test_cases; 
	cin >> test_cases;

	/* Declaring a map of string and int*/
	map<string,int> name_mark;
	string name;
	int op,mark;

	for(int i = 0; i < test_cases ; i++)
	{
		cin >> op;
		(op==1)?cin>>name>>mark:cin>>name;
		// Insert an element in the hashmap
		if(op == 1)
		{
			/* Checking if the name is already present in the map. */
			if(name_mark.find(name) != name_mark.end())
			{
				name_mark[name] += mark;
			}
			else
			{
				/* Inserting a pair of name and mark in the map. */
				name_mark.insert({name,mark});
			}
		}
		// Remove an element from the hashmap 
		else if(op == 2)
		{
			/* Removing the element from the map. */
			name_mark.erase(name);
		}
		// Display the mark of a name that exist in the hashmap
		else
		{
			/* Checking if the name is present in the map. If it is present, it will print the mark of the name.
			If it is not present, it will print 0. */
			cout << (name_mark.find(name) == name_mark.end()?0:name_mark[name]) << "\n";
		}	
	}
}