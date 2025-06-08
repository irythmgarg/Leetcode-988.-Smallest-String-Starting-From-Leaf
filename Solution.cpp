/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;               // Value between 0 and 25 representing 'a' to 'z'
    TreeNode *left;        // Left child
    TreeNode *right;       // Right child

    // Constructors
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    string mainans = "";  // To store the lexicographically smallest string

    /**
     * Helper function to recursively build strings from leaf to root.
     * 
     * @param root Current node
     * @param st Current string being formed from the leaf to this node
     */
    void hlo(TreeNode* root, string st) {
        if (!root) return;

        // Convert integer to character and prepend to string (leaf to root)
        st = char(root->val + 'a') + st;

        // If it's a leaf node, compare and store the smallest string
        if (!root->left && !root->right) {
            if (mainans == "" || mainans > st) {
                mainans = st;
            }
        }

        // Continue traversal to left and right subtrees
        if (root->left) hlo(root->left, st);
        if (root->right) hlo(root->right, st);
    }

    /**
     * Returns the lexicographically smallest string from any leaf to the root.
     * 
     * @param root Root of the binary tree
     * @return Smallest string starting from any leaf
     */
    string smallestFromLeaf(TreeNode* root) {
        string st = "";
        hlo(root, st);
        return mainans;
    }
};
