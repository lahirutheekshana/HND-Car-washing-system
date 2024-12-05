#pragma once
#include "vehicle.cpp"
#include "Search.h"


ref class Node {
public:
	Vehicle^ vehicle;
	Node^ left;
	Node^ right;

	Node(Vehicle^ vehicle) {
		this->vehicle = vehicle;
		this->left = nullptr;
		this->right = nullptr;
	}

	void displayVehicle() {
		/////////
	}
};

ref class BST {
public:
	Node^ root;

	BST() {
		root = nullptr;
	}

	bool isEmpty();
	void insertNode(Vehicle^ vehicle);

	//Depth first traversal Approch
	void inOrder(Node^ localRoot);
	void preOrder(Node^ localRoot);
	void postOrder(Node^ localRoot);

	Node^ find(Node^ localRoot, int value);
	Node^ deleteNode(Node^ localRoot, int value);
	Node^ minValueNode(Node^ localRoot);
};


bool BST::isEmpty() {
	return (root == nullptr);
}

void BST::inOrder(Node^ localRoot) {
	if (localRoot != nullptr) {
		inOrder(localRoot->left);
		localRoot->displayVehicle();
		inOrder(localRoot->right);
	}
}

void BST::preOrder(Node^ localRoot) {
	if (localRoot != nullptr) {
		localRoot->displayVehicle();
		preOrder(localRoot->left);
		preOrder(localRoot->right);
	}
}

void BST::postOrder(Node^ localRoot) {
	if (localRoot != nullptr) {
		postOrder(localRoot->left);
		postOrder(localRoot->right);
		localRoot->displayVehicle();
	}
}

void BST::insertNode(Vehicle^ vehicle) {
	Node^ newNode = gcnew Node(vehicle);

	if (root == nullptr) {
		this->root = newNode;
	}
	else {
		Node^ temp = root;
		while (temp != nullptr) {
			if (newNode->vehicle->number == temp->vehicle->number) {
				return;
			}
			else if (newNode->vehicle->number < temp->vehicle->number && temp->left == nullptr) {
				temp->left = newNode;
				break;
			}
			else if (newNode->vehicle->number < temp->vehicle->number) {
				temp = temp->left;
			}
			else if (newNode->vehicle->number > temp->vehicle->number && temp->right == nullptr) {
				temp->right = newNode;
				break;
			}
			else {
				temp = temp->right;
			}
		}
	}
}


Node^ BST::find(Node^ localRoot, int number) {
	if (localRoot == nullptr) {
		return localRoot;
	}
	else {
		Node^ temp = localRoot;

		while (temp != nullptr) {
			if (number == temp->vehicle->number) {
				return temp;
			}
			else if (number < temp->vehicle->number) {
				temp = temp->left;
			}
			else {
				temp = temp->right;
			}
		}
		return nullptr;
	}
}


Node^ BST::deleteNode(Node^ localRoot, int number) {
	if (localRoot == nullptr) {
		return localRoot;
	}
	else if (number < localRoot->vehicle->number) {
		localRoot->left = deleteNode(localRoot->left, number);
	}
	else if (number > localRoot->vehicle->number) {
		localRoot->right = deleteNode(localRoot->right, number);
	}
	else {
		Node^ temp = nullptr;
		if (localRoot->left == nullptr) {
			temp = localRoot->right;
			delete localRoot;
			return temp;
		}
		else if (localRoot->right == nullptr) {
			temp = localRoot->left;
			delete localRoot;
			return temp;
		}
		else {
			temp = minValueNode(localRoot->right);
			localRoot->vehicle = temp->vehicle;
			localRoot->right = deleteNode(localRoot->right, temp->vehicle->number);
		}
	}
	return localRoot;
}

Node^ BST::minValueNode(Node^ localRoot) {
	Node^ current = localRoot;
	while (current->left != nullptr) {
		current = current->left;
	}
	return current;
}
