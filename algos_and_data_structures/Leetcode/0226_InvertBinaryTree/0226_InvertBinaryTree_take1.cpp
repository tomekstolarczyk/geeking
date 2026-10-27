

struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution 
{

public:

    TreeNode* invertTree(TreeNode* root) 
    {
        // warunek wyjscia z rekurencji
        if (root == nullptr) 
        {
            return nullptr;
        }

        // swap
        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;

        // reurencja w dol
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};