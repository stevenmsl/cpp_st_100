#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol104;
using namespace std;

/*takeaways
  - use recursion
  - pay attention to edge cases
*/
bool Solution::isSameTree(Node *p, Node *q)
{
  /* both are leaf nodes */
  if (p == nullptr && q == nullptr)
    return true;
  if ((p == nullptr && q != nullptr) ||
      (p != nullptr && q == nullptr))
    return false;

  if (p->val != q->val)
    return false;

  return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}