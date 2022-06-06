#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol104;

/*
Input:     1         1
          / \       / \
         2   3     2   3

        [1,2,3],   [1,2,3]

Output: true
*/

tuple<Node *, Node *, bool>
testFixture1()
{
  auto p = new Node(1);
  p->left = new Node(2);
  p->right = new Node(3);

  auto q = new Node(1);
  q->left = new Node(2);
  q->right = new Node(3);

  return make_tuple(p, q, true);
}

/*
Input:     1         1
          /           \
         2             2

        [1,2],     [1,null,2]

Output: false
*/

tuple<Node *, Node *, bool>
testFixture2()
{
  auto p = new Node(1);
  p->left = new Node(2);

  auto q = new Node(1);
  q->right = new Node(2);

  return make_tuple(p, q, false);
}

/*
Input:     1         1
          / \       / \
         2   1     1   2

        [1,2,1],   [1,1,2]

Output: false
*/

tuple<Node *, Node *, bool>
testFixture3()
{
  auto p = new Node(1);
  p->left = new Node(2);
  p->right = new Node(1);

  auto q = new Node(1);
  q->left = new Node(1);
  q->right = new Node(2);

  return make_tuple(p, q, false);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  auto path = sol.isSameTree(get<0>(f), get<1>(f));
  cout << "Expect to see :" << get<2>(f) << endl;
  cout << path << endl;
}

void test2()
{
  auto f = testFixture2();
  Solution sol;
  auto path = sol.isSameTree(get<0>(f), get<1>(f));
  cout << "Expect to see :" << get<2>(f) << endl;
  cout << path << endl;
}

void test3()
{
  auto f = testFixture3();
  Solution sol;
  auto path = sol.isSameTree(get<0>(f), get<1>(f));
  cout << "Expect to see :" << get<2>(f) << endl;
  cout << path << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}