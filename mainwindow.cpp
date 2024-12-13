#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->buttonLeft->setEnabled(false);
    ui->dateEdit->setDate(QDate::currentDate());
    ui->calendarWidget->setSelectedDate(QDate::currentDate());

    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupConnections()
{
    //KWADRAT WARTOSCI
    connect(ui->spinBox,
            QOverload<double>::of(&QDoubleSpinBox::valueChanged),
            this,
            &MainWindow::updateLabelSquare);

    //PRZYCISKI LEWY PRAWY
    connect(ui->buttonRight, &QPushButton::clicked, this, &MainWindow::toggleButtons);
    connect(ui->buttonLeft, &QPushButton::clicked, this, &MainWindow::toggleButtons);

    // DATA KALENDARZ
    connect(ui->dateEdit, &QDateEdit::dateChanged, this, &MainWindow::syncDateEditWithCalendar);
    connect(ui->calendarWidget,
            &QCalendarWidget::clicked,
            this,
            &MainWindow::syncCalendarWithDateEdit);

    // GUZIKI
    connect(ui->radioFirst, &QRadioButton::toggled, this, &MainWindow::updateRadioStatus);
    connect(ui->radioSecond, &QRadioButton::toggled, this, &MainWindow::updateRadioStatus);
    connect(ui->radioThird, &QRadioButton::toggled, this, &MainWindow::updateRadioStatus);

    // RGB
    connect(ui->sliderRed, &QSlider::valueChanged, this, &MainWindow::updateColor);
    connect(ui->spinBoxRed,
            QOverload<int>::of(&QSpinBox::valueChanged),
            this,
            &MainWindow::updateColor);
    connect(ui->sliderGreen, &QSlider::valueChanged, this, &MainWindow::updateColor);
    connect(ui->spinBoxGreen,
            QOverload<int>::of(&QSpinBox::valueChanged),
            this,
            &MainWindow::updateColor);
    connect(ui->sliderBlue, &QSlider::valueChanged, this, &MainWindow::updateColor);
    connect(ui->spinBoxBlue,
            QOverload<int>::of(&QSpinBox::valueChanged),
            this,
            &MainWindow::updateColor);
}

void MainWindow::updateLabelSquare(double value)
{
    double square = value * value;
    ui->labelSquare->setText(QString::number(square, 'f', 4)); //FIXED 4 MIEJSCA PO,
}

void MainWindow::toggleButtons()
{
    bool rightEnabled = ui->buttonRight->isEnabled();
    ui->buttonRight->setEnabled(!rightEnabled);
    ui->buttonLeft->setEnabled(rightEnabled);
}

void MainWindow::syncDateEditWithCalendar(const QDate &date)
{
    ui->calendarWidget->setSelectedDate(date);
}

void MainWindow::syncCalendarWithDateEdit()
{
    ui->dateEdit->setDate(ui->calendarWidget->selectedDate());
}

void MainWindow::updateRadioStatus()
{
    if (ui->radioFirst->isChecked()) {
        statusBar()->showMessage("Pierwszy");
    } else if (ui->radioSecond->isChecked()) {
        statusBar()->showMessage("Drugi");
    } else if (ui->radioThird->isChecked()) {
        statusBar()->showMessage("Trzeci");
    }
}

void MainWindow::updateColor()
{
    int red = ui->sliderRed->value();
    int green = ui->sliderGreen->value();
    int blue = ui->sliderBlue->value();

    // AKTUAL GUZIKI
    ui->spinBoxRed->setValue(red);
    ui->spinBoxGreen->setValue(green);
    ui->spinBoxBlue->setValue(blue);

    //KOLORY AKTUAL
    ui->colorPreview->setStyleSheet(
        QString("background-color: rgb(%1, %2, %3);").arg(red).arg(green).arg(blue));

    qDebug() << "Kolor zaktualizowany na:" << red << green << blue;
}
