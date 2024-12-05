#pragma once
#include <cliext/list>
#include "changeImages.cpp"
#include "Low.h"
#include "circularQueue.h"


namespace CarWashing {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
///**************ACTUAL CarWashing.h FORM ***************///

	public ref class CarWashing : public System::Windows::Forms::Form
	{
    private:
		LinkList^ linkList;
		Low^ lowForm;
		circularQueue^ vehicleQueue = gcnew circularQueue(100);
		int place = 1;
		BST^ LowBST;
		BST^ MediumBST;
		BST^ HeavyBST;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblPercentage;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ lblLast;


	private: System::Windows::Forms::Label^ lblTot;
	private: System::Windows::Forms::Label^ lblNext;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lblDecision;

	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::TextBox^ txtNumber1;
	private: System::Windows::Forms::TextBox^ txtManufacture1;
	private: System::Windows::Forms::TextBox^ txtColor1;




	private: System::Windows::Forms::TextBox^ txtYear1;

	private: System::Windows::Forms::TextBox^ txtOwner1;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ label1;
		   

	public:
		CarWashing(void)
		{
			InitializeComponent();
			linkList = gcnew LinkList();
			LowBST = gcnew BST();
		    MediumBST = gcnew BST();
			HeavyBST = gcnew BST();
			InitializeLinkList();
		}
	protected:
		~CarWashing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnPrevious;

	private: System::Windows::Forms::Button^ btnNext;

	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeLinkList() {
			linkList->append("Low Weight", "C:\\Users\\A$iri\\source\\repos\\CarWashing\\Images\\1.png");
			linkList->append("Medium Weight", "C:\\Users\\A$iri\\source\\repos\\CarWashing\\Images\\2.png");
			linkList->append("Heavy Weight", "C:\\Users\\A$iri\\source\\repos\\CarWashing\\Images\\3.png");
		}

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CarWashing::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnPrevious = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lblNext = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblLast = (gcnew System::Windows::Forms::Label());
			this->lblTot = (gcnew System::Windows::Forms::Label());
			this->lblPercentage = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblDecision = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->txtNumber1 = (gcnew System::Windows::Forms::TextBox());
			this->txtManufacture1 = (gcnew System::Windows::Forms::TextBox());
			this->txtColor1 = (gcnew System::Windows::Forms::TextBox());
			this->txtYear1 = (gcnew System::Windows::Forms::TextBox());
			this->txtOwner1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(910, 46);
			this->panel1->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(7, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(236, 37);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Vehical Management";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->btnPrevious);
			this->panel2->Controls->Add(this->btnNext);
			this->panel2->Location = System::Drawing::Point(0, 439);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(422, 33);
			this->panel2->TabIndex = 1;
			// 
			// btnPrevious
			// 
			this->btnPrevious->Location = System::Drawing::Point(7, 5);
			this->btnPrevious->Name = L"btnPrevious";
			this->btnPrevious->Size = System::Drawing::Size(75, 23);
			this->btnPrevious->TabIndex = 11;
			this->btnPrevious->Text = L"Previous";
			this->btnPrevious->UseVisualStyleBackColor = true;
			this->btnPrevious->Click += gcnew System::EventHandler(this, &CarWashing::button2_Click);
			this->btnPrevious->MouseEnter += gcnew System::EventHandler(this, &CarWashing::btnPrevious_MouseEnter);
			this->btnPrevious->MouseLeave += gcnew System::EventHandler(this, &CarWashing::btnPrevious_MouseLeave);
			this->btnPrevious->MouseHover += gcnew System::EventHandler(this, &CarWashing::btnPrevious_MouseHover);
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(338, 5);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(75, 23);
			this->btnNext->TabIndex = 10;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &CarWashing::button1_Click);
			this->btnNext->MouseEnter += gcnew System::EventHandler(this, &CarWashing::btnNext_MouseEnter);
			this->btnNext->MouseLeave += gcnew System::EventHandler(this, &CarWashing::btnNext_MouseLeave);
			this->btnNext->MouseHover += gcnew System::EventHandler(this, &CarWashing::button1_MouseHover);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(68, 87);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(299, 191);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(164, 313);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Low Weight";
			this->label2->Click += gcnew System::EventHandler(this, &CarWashing::label2_Click);
			this->label2->MouseEnter += gcnew System::EventHandler(this, &CarWashing::label2_MouseEnter);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &CarWashing::label2_MouseLeave);
			this->label2->MouseHover += gcnew System::EventHandler(this, &CarWashing::label2_MouseHover);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Controls->Add(this->lblNext);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->lblLast);
			this->panel3->Controls->Add(this->lblTot);
			this->panel3->Controls->Add(this->lblPercentage);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(419, 40);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(219, 432);
			this->panel3->TabIndex = 10;
			// 
			// lblNext
			// 
			this->lblNext->AutoSize = true;
			this->lblNext->BackColor = System::Drawing::Color::Gray;
			this->lblNext->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNext->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lblNext->Location = System::Drawing::Point(119, 150);
			this->lblNext->Name = L"lblNext";
			this->lblNext->Size = System::Drawing::Size(45, 19);
			this->lblNext->TabIndex = 9;
			this->lblNext->Text = L"None";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gray;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->label12->Location = System::Drawing::Point(21, 150);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 19);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Next Vehicle :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gray;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label10->Location = System::Drawing::Point(166, 263);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 19);
			this->label10->TabIndex = 7;
			this->label10->Text = L"None";
			// 
			// lblLast
			// 
			this->lblLast->AutoSize = true;
			this->lblLast->BackColor = System::Drawing::Color::Gray;
			this->lblLast->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLast->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lblLast->Location = System::Drawing::Point(113, 188);
			this->lblLast->Name = L"lblLast";
			this->lblLast->Size = System::Drawing::Size(45, 19);
			this->lblLast->TabIndex = 6;
			this->lblLast->Text = L"None";
			// 
			// lblTot
			// 
			this->lblTot->AutoSize = true;
			this->lblTot->BackColor = System::Drawing::Color::Gray;
			this->lblTot->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTot->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lblTot->Location = System::Drawing::Point(130, 112);
			this->lblTot->Name = L"lblTot";
			this->lblTot->Size = System::Drawing::Size(17, 19);
			this->lblTot->TabIndex = 5;
			this->lblTot->Text = L"0";
			// 
			// lblPercentage
			// 
			this->lblPercentage->AutoSize = true;
			this->lblPercentage->BackColor = System::Drawing::Color::Gray;
			this->lblPercentage->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPercentage->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lblPercentage->Location = System::Drawing::Point(151, 77);
			this->lblPercentage->Name = L"lblPercentage";
			this->lblPercentage->Size = System::Drawing::Size(29, 19);
			this->lblPercentage->TabIndex = 4;
			this->lblPercentage->Text = L"0%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gray;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->label6->Location = System::Drawing::Point(21, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 19);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Total Vehicles :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->label5->Location = System::Drawing::Point(19, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 19);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Last Vehicle :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->label3->Location = System::Drawing::Point(21, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Next Vehicle Owner :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->label1->Location = System::Drawing::Point(19, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Queue Filled Rate ;";
			// 
			// lblDecision
			// 
			this->lblDecision->AutoSize = true;
			this->lblDecision->BackColor = System::Drawing::Color::Snow;
			this->lblDecision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDecision->ForeColor = System::Drawing::Color::Red;
			this->lblDecision->Location = System::Drawing::Point(699, 409);
			this->lblDecision->Name = L"lblDecision";
			this->lblDecision->Size = System::Drawing::Size(175, 29);
			this->lblDecision->TabIndex = 41;
			this->lblDecision->Text = L"XXXXXXXXX";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(838, 67);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(56, 20);
			this->btnSearch->TabIndex = 40;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &CarWashing::btnSearch_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(655, 70);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 13);
			this->label8->TabIndex = 39;
			this->label8->Text = L"SEARCH";
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(712, 67);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(112, 20);
			this->txtSearch->TabIndex = 38;
			// 
			// txtNumber1
			// 
			this->txtNumber1->Location = System::Drawing::Point(748, 197);
			this->txtNumber1->Name = L"txtNumber1";
			this->txtNumber1->Size = System::Drawing::Size(137, 20);
			this->txtNumber1->TabIndex = 37;
			// 
			// txtManufacture1
			// 
			this->txtManufacture1->Location = System::Drawing::Point(748, 240);
			this->txtManufacture1->Name = L"txtManufacture1";
			this->txtManufacture1->Size = System::Drawing::Size(137, 20);
			this->txtManufacture1->TabIndex = 36;
			// 
			// txtColor1
			// 
			this->txtColor1->Location = System::Drawing::Point(748, 327);
			this->txtColor1->Name = L"txtColor1";
			this->txtColor1->Size = System::Drawing::Size(137, 20);
			this->txtColor1->TabIndex = 35;
			// 
			// txtYear1
			// 
			this->txtYear1->Location = System::Drawing::Point(748, 284);
			this->txtYear1->Name = L"txtYear1";
			this->txtYear1->Size = System::Drawing::Size(137, 20);
			this->txtYear1->TabIndex = 34;
			// 
			// txtOwner1
			// 
			this->txtOwner1->Location = System::Drawing::Point(748, 153);
			this->txtOwner1->Name = L"txtOwner1";
			this->txtOwner1->Size = System::Drawing::Size(137, 20);
			this->txtOwner1->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(653, 201);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Plate Number :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(653, 244);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Manufacture :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(653, 288);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Year :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(653, 331);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Color :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(653, 157);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Owner :";
			// 
			// CarWashing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(906, 469);
			this->Controls->Add(this->lblDecision);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->txtOwner1);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtNumber1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtManufacture1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtYear1);
			this->Controls->Add(this->txtColor1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CarWashing";
			this->Text = L"CarWashing";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		lowForm = gcnew Low(label10,lblTot,lblNext,lblLast,lblPercentage,place,LowBST,MediumBST,HeavyBST,vehicleQueue);
		lowForm->Show();
	}

    //Link List For Traverse and change image and label contents
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e){
		linkList->displayPreviousImage(pictureBox2,label2);
		if (place > 1) {
			place--;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e){
		linkList->displayNextImage(pictureBox2,label2);
		if (place < 3) {
			place++;
		}
	}
    //END

	private: System::Void label2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->label2->Cursor = Cursors::Hand;
	}

    private: System::Void label2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBox2->Cursor = Cursors::Hand;
		this->label2->ForeColor = System::Drawing::Color::Orange;
    }

    private: System::Void label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label2->ForeColor = System::Drawing::Color::Black;
    }

    private: System::Void button1_MouseHover(System::Object^ sender, System::EventArgs^ e) { }

    private: System::Void btnPrevious_MouseHover(System::Object^ sender, System::EventArgs^ e) { }

    private: System::Void btnNext_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->btnNext->ForeColor = System::Drawing::Color::White;
		this->btnNext->BackColor = System::Drawing::Color::OrangeRed;
    }   

    private: System::Void btnPrevious_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->btnPrevious->ForeColor = System::Drawing::Color::White;
		this->btnPrevious->BackColor = System::Drawing::Color::OrangeRed;
    }

    private: System::Void btnNext_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnNext->ForeColor = System::Drawing::Color::Black;
		this->btnNext->BackColor = System::Drawing::Color::White;
    }

    private: System::Void btnPrevious_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnPrevious->ForeColor = System::Drawing::Color::Black;
		this->btnPrevious->BackColor = System::Drawing::Color::White;
    }

    private: System::Void btnDequeue_Click(System::Object^ sender, System::EventArgs^ e) {	 
    }

    private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		Node^ vehi = LowBST->find(LowBST->root,System::Convert::ToInt32(this->txtSearch->Text));
		Node^ vehi1 = MediumBST->find(MediumBST->root, System::Convert::ToInt32(this->txtSearch->Text));
		Node^ vehi2 = HeavyBST->find(HeavyBST->root, System::Convert::ToInt32(this->txtSearch->Text));

		if (vehi != nullptr) {
			this->lblDecision->Text = "Low Weight";
			this->txtOwner1->Text = vehi->vehicle->owner;
			this->txtNumber1->Text = System::Convert::ToString(vehi->vehicle->number);
			this->txtManufacture1->Text = vehi->vehicle->manufacture;
			this->txtYear1->Text = System::Convert::ToString(vehi->vehicle->year);
			this->txtColor1->Text = vehi->vehicle->color;
		}
		else if (vehi1 != nullptr) {
			this->lblDecision->Text = "Medium Weight";
			this->txtOwner1->Text = vehi1->vehicle->owner;
			this->txtNumber1->Text = System::Convert::ToString(vehi1->vehicle->number);
			this->txtManufacture1->Text = vehi1->vehicle->manufacture;
			this->txtYear1->Text = System::Convert::ToString(vehi1->vehicle->year);
			this->txtColor1->Text = vehi1->vehicle->color;
		}
		else if (vehi2 != nullptr) {
			this->lblDecision->Text = "Heavy Weight";
			this->txtOwner1->Text = vehi2->vehicle->owner;
			this->txtNumber1->Text = System::Convert::ToString(vehi2->vehicle->number);
			this->txtManufacture1->Text = vehi2->vehicle->manufacture;
			this->txtYear1->Text = System::Convert::ToString(vehi2->vehicle->year);
			this->txtColor1->Text = vehi2->vehicle->color;
		}
		else {
			MessageBox::Show("No Such a Vehicle Registered", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
    }
};
}

