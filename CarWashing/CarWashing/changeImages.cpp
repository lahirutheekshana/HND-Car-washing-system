#include <cliext/list>
#include <msclr\marshal_cppstd.h> 

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


ref class Link {
public:
	String^ label;
	String^ imagePath;
	Link^ next;
	Link^ previous;

	Link(String^ label, String^ imagePath) {
		this->label = label;
		this->imagePath = imagePath;
		next = previous = nullptr;
	}

	void displayNode() {
		Console::WriteLine("Label: " + label + ", Image Path: " + imagePath);
	}
};

ref class LinkList {

private:
	Link^ current;

public:
	Link^ first;
	Link^ last;

	LinkList() {
		first = nullptr;
		last = nullptr;
		current = nullptr;
	}

	void append(String^ label, String^ imagePath) {
		Link^ newLink = gcnew Link(label, imagePath);

		if (first == nullptr) {
			first = newLink;
			last = newLink;
			current = newLink;
		}

		else {
			last->next = newLink;
			newLink->previous = last;
			last = newLink;
		}
	}

	void displayList() {
		Link^ current = first;

		while (current != nullptr) {
			current->displayNode();
			current = current->next;
		}
	}

	void displayNextImage(PictureBox^ pictureBox , Label^ label) {
		if (current != nullptr && current->next != nullptr) {
			// Move to the next link if available
			current = current->next;
			pictureBox->Image = Image::FromFile(current->imagePath);
			label->Text = current->label;
		}
	}

	void displayPreviousImage(PictureBox^ pictureBox, Label^ label) {
		if (current != nullptr && current->previous != nullptr) {
			// Move to the previous link if available
			current = current->previous;
			pictureBox->Image = Image::FromFile(current->imagePath);
			label->Text = current->label;
		}
	}
};