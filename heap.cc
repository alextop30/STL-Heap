#include "definitions.h"

template < class T > 
void get_list(vector < T >& v, const char* path)
{
	ifstream ifs;

	ifs.open(path, ios::in);

	T temp;

	if (!ifs.is_open()) 
	{
		cout << " Failed to open" << endl;
	}

	v.clear();

	while (ifs >> temp)
	{
		v.push_back(temp);
	}

		ifs.close();

}

template < class T, class P > 
void construct_heap(vector < T >& v, P pred)
{
	make_heap(v.begin(), v.end(), pred);
	sort_heap(v.begin(), v.end(), pred);
}

template < class T > 
bool abs_less < T > :: operator ( ) (const T& x, const T& y) const
{
	if (abs(x) < abs(y))
	{
		return true;
	}
	else
	{
		return false;
	}

}

template < class T, const int W, const int L > 
print_list < T, W, L > ::print_list(const int& s, const int& c)
{
	sz = s;
	cnt = 0;
}

template < class T, const int W, const int L > 
void print_list < T, W, L > :: operator ( ) (const T& x)
{
	cout << " " << setw(W)<< x;
	cnt++;

		if ((cnt%L) == 0)
		{
			cout << endl;
		}

}


int main ( )
{
    vector < int >    v1;   // heap of integers
    vector < float >  v2;   // heap of floating-pt nums
    vector < string > v3;   // heap of strings

    // print header message
    cout << "\t\t\t*** Heap Program ***\n\n";

    // first heap

    cout << "first heap - ascending order:\n\n";
	cout << endl;

    get_list ( v1, D1 );
    construct_heap ( v1, less < int > ( ) );
    print_list < int, INT_SZ, INT_LN > print1 ( v1.size ( ) );
    for_each ( v1.begin ( ), v1.end ( ), print1 );

	cout << endl;
	cout << endl;
	
    cout << "first heap - descending order:\n\n";
    get_list ( v1, D1 );
    construct_heap ( v1, greater < int > ( ) );
    for_each ( v1.begin ( ), v1.end ( ), print1 );

	cout << endl;
	cout << endl;


    cout << "first heap - ascending order with absolute values:\n\n";
    get_list ( v1, D1 );
    construct_heap ( v1, abs_less < int > ( ) );
    for_each ( v1.begin ( ), v1.end ( ), print1 );

	cout << endl;
	cout << endl;

    // second heap

    cout << "second heap - ascending order:\n\n";
    get_list ( v2, D2 );
    construct_heap ( v2, less < float > ( ) );
    print_list < float, FLT_SZ, FLT_LN > print2 ( v2.size ( ) );
    for_each ( v2.begin ( ), v2.end ( ), print2 );

	cout << endl;
	cout << endl;

    cout << "second heap - descending order:\n\n";
    get_list ( v2, D2 );
    construct_heap ( v2, greater < float > ( ) );
    for_each ( v2.begin ( ), v2.end ( ), print2 );

	cout << endl;
	cout << endl;

    cout << "second heap - ascending order with absolute values:\n\n";
    get_list ( v2, D2 );
    construct_heap ( v2, abs_less < float > ( ) );
    for_each ( v2.begin ( ), v2.end ( ), print2 );

	cout << endl;
	cout << endl;

    // third heap

    cout << "third heap - ascending order:\n\n";
    get_list ( v3, D3 );
    construct_heap ( v3, less < string > ( ) );
    print_list < string, STR_SZ, STR_LN > print3 ( v3.size ( ) );
    for_each ( v3.begin ( ), v3.end ( ), print3 );

	cout << endl;
	cout << endl;

    cout << "third heap - descending order:\n\n";
    get_list ( v3, D3 );
    construct_heap ( v3, greater < string > ( ) );
    for_each ( v3.begin ( ), v3.end ( ), print3 );

	cout << endl;
	cout << endl;

    // print termination message
    cout << "\t\t\t*** end of program execution ***\n\n";
	

	system("Pause");
    return 0;
}
