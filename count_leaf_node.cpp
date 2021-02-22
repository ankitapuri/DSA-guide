// C++ program to count leaf nodes in a Binary Tree
#include <bits/stdc++.h>
using namespace std;

/* A binary tree Node has data, pointer to left
child and a pointer to right child */
struct Node
{
	int data;
	struct Node* left, *right;
};

/* Function to get the count of leaf Nodes in
a binary tree*/
unsigned int getLeafCount(struct Node* node)
{
	// If tree is empty
	if (!node)
		return 0;

	// Initialize empty queue.
	queue<Node *> q;

	// Do level order traversal starting from root
	int count = 0; // Initialize count of leaves
	q.push(node);
	while (!q.empty())
	{
		struct Node *temp = q.front();
		q.pop();

		if (temp->left != NULL)
			q.push(temp->left);
		if (temp->right != NULL)
			q.push(temp->right);
		if (temp->left == NULL && temp->right == NULL)
			count++;
	}
	return count;
}

/* function that allocates a new Node with the
given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

int main()
{

	struct Node *root = newNode(1);
	root->left	 = newNode(2);
	root->right	 = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	/* leaf count of the above created binaary tree */
	cout << "Leaf count in the binary tree is :"<<getLeafCount(root);

	return 0;
}
