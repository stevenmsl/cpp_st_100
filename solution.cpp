#include "solution.h"
#include "util.h"

using namespace sol104;
using namespace std;

/*takeaways
  - use recursion
  - pay attention to edge cases
  - time complexity O(n)
*/
bool Solution::isSameTree(Node *p, Node *q)
{
  /* both are leaf nodes */
  if (p == nullptr && q == nullptr)
    return true;
  if (p == nullptr || q == nullptr)
    return false;

  if (p->val != q->val)
    return false;

  return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}