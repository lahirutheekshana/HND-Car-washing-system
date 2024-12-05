#pragma once
#include "tree.h"
#include "circularQueue.h"


namespace CarWashing {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


///**************ACTUAL LOW.h FORM ***************///

	public ref class Low : public System::Windows::Forms::Form
	{

	private:
	    circularQueue^ vehicleQueue;
		Label^ labelOwner;
		Label^ labelTotal;
		Label^ labelNext;
		Label^ labelast;
		Label^ labelPercentage;
		int place;
		BST^ LowBST;
		BST^ MediumBST;
		BST^ HeavyBST;


	public:
		Low(Label^ labelToUpdate, Label^ labelTot, Label^ lblNext, Label^ lblast, Label^ lblPercentage,int placed, BST^ low, BST^ medium, BST^ heavy, circularQueue^ vehicleQueue) {
			InitializeComponent();
			labelOwner = labelToUpdate;
			labelTotal = labelTot;
			labelNext = lblNext;
			labelast = lblast;
			this->labelPercentage = lblPercentage;
			place = placed;
			LowBST = low;
			MediumBST = medium;
			HeavyBST = heavy;
			this->vehicleQueue = vehicleQueue;
		}

	protected:
		~Low() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtOwner;
	private: System::Windows::Forms::TextBox^ txtYear;
	private: System::Windows::Forms::TextBox^ txtColor;



	private: System::Windows::Forms::TextBox^ txtManufacture;

	private: System::Windows::Forms::TextBox^ txtNumber;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ buttonDequeu;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtOwner = (gcnew System::Windows::Forms::TextBox());
			this->txtYear = (gcnew System::Windows::Forms::TextBox());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtManufacture = (gcnew System::Windows::Forms::TextBox());
			this->txtNumber = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDequeu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(369, 51);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(1, 437);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(369, 37);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Owner :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 320);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Color :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Year :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Manufacture :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Plate Number :";
			// 
			// txtOwner
			// 
			this->txtOwner->Location = System::Drawing::Point(147, 98);
			this->txtOwner->Name = L"txtOwner";
			this->txtOwner->Size = System::Drawing::Size(174, 20);
			this->txtOwner->TabIndex = 7;
			// 
			// txtYear
			// 
			this->txtYear->Location = System::Drawing::Point(147, 258);
			this->txtYear->Name = L"txtYear";
			this->txtYear->Size = System::Drawing::Size(174, 20);
			this->txtYear->TabIndex = 8;
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(147, 316);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(174, 20);
			this->txtColor->TabIndex = 9;
			// 
			// txtManufacture
			// 
			this->txtManufacture->Location = System::Drawing::Point(147, 203);
			this->txtManufacture->Name = L"txtManufacture";
			this->txtManufacture->Size = System::Drawing::Size(174, 20);
			this->txtManufacture->TabIndex = 10;
			// 
			// txtNumber
			// 
			this->txtNumber->Location = System::Drawing::Point(147, 148);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(174, 20);
			this->txtNumber->TabIndex = 11;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(246, 393);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Low::button1_Click);
			// 
			// buttonDequeu
			// 
			this->buttonDequeu->Location = System::Drawing::Point(55, 393);
			this->buttonDequeu->Name = L"buttonDequeu";
			this->buttonDequeu->Size = System::Drawing::Size(75, 23);
			this->buttonDequeu->TabIndex = 13;
			this->buttonDequeu->Text = L"Dequeue";
			this->buttonDequeu->UseVisualStyleBackColor = true;
			this->buttonDequeu->Click += gcnew System::EventHandler(this, &Low::button1_Click_1);
			// 
			// Low
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 471);
			this->Controls->Add(this->buttonDequeu);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtNumber);
			this->Controls->Add(this->txtManufacture);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->txtYear);
			this->Controls->Add(this->txtOwner);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Low";
			this->Text = L"Low";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		System::String^ getType() {
			if (place == 1) {
				return "Low Weight";
			}
			else if (place == 2) {
				return "Medium Weight";
			}
			else {
				return "Heavy Weight";
			}
		}


#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ owner = txtOwner->Text;
		int number = System::Convert::ToInt32(txtNumber->Text);
		System::String^ manufacture = txtManufacture->Text;
		int year = System::Convert::ToInt32(txtYear->Text);
		System::String^ color = txtColor->Text;
		System::String^ type = getType();

		Vehicle^ myVehicle = gcnew Vehicle(owner, number, manufacture, year, color,type);
		vehicleQueue->enqueue(myVehicle);

		Vehicle^ v1 = vehicleQueue->peekFront();
		labelOwner->Text = v1->owner;
		labelNext->Text = v1->number.ToString();
		labelTotal->Text = vehicleQueue->getItems().ToString();

		this->labelPercentage->Text = vehicleQueue->getItems().ToString() + "%";

		Vehicle^ v2 = vehicleQueue->peekRear();
		labelast->Text = v2->number.ToString();


		//INSERT DETAILS TO BST
		if (type == "Low Weight") {
		    LowBST->insertNode(myVehicle);
		}
		else if (type =="Medium Weight") {
			MediumBST->insertNode(myVehicle);
		}
		else {
		    HeavyBST->insertNode(myVehicle);
		}
		
	}
   
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		if (!vehicleQueue->isEmpty()) {
			Vehicle^ v1 = vehicleQueue->dequeue();
			MessageBox::Show("Vehicle with plate number " + v1->number + " has been washed!", "Washing Complete", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No vehicles in the queue.", "Empty Queue", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		Vehicle^ v1 = vehicleQueue->peekFront();
		labelOwner->Text = v1->owner;
		labelTotal->Text = vehicleQueue->getItems().ToString();
		labelNext->Text = v1->number.ToString();
		this->labelPercentage->Text = vehicleQueue->getItems().ToString() + "%";

		Vehicle^ v2 = vehicleQueue->peekRear();
		labelast->Text = v2->number.ToString();
    }
};

}


