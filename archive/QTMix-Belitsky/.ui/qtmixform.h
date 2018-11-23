/****************************************************************************
** Form interface generated from reading ui file 'qtmixform.ui'
**
** Created: Wed Feb 9 12:53:20 2005
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef QTMIXFORM_H
#define QTMIXFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "supermix.h"
#include "reduced_nport.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QSplitter;
class QFrame;
class QTabWidget;
class QWidget;
class QGroupBox;
class QDoubleSpinBox;
class QLabel;
class QSpinBox;
class FileChooser;
class QComboBox;
class QLineEdit;
class QCheckBox;
class QPushButton;
class QwtPlot;

class QTMixForm : public QDialog
{
    Q_OBJECT

public:
    QTMixForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~QTMixForm();

    QSplitter* splitter3;
    QFrame* frame4;
    QTabWidget* tabWidget2;
    QWidget* globalsTab;
    QGroupBox* simulationGroupBox;
    QDoubleSpinBox* tDoubleSpinBox;
    QLabel* textLabel6_2;
    QLabel* textLabel5_2;
    QSpinBox* harmonicsSpinBox;
    QLabel* textLabel11;
    QLabel* textLabel1_5;
    QDoubleSpinBox* ifImpDoubleSpinBox;
    QDoubleSpinBox* z0DoubleSpinBox;
    QGroupBox* opPointGroupBox;
    QLabel* textLabel5;
    QLabel* textLabel4_2;
    QLabel* textLabel6;
    QDoubleSpinBox* biasDoubleSpinBox;
    QLabel* textLabel8;
    QLabel* textLabel3_4;
    QDoubleSpinBox* freqDoubleSpinBox;
    QDoubleSpinBox* loPowerDoubleSpinBox;
    QSpinBox* loTempSpinBox;
    QDoubleSpinBox* IFfreqDoubleSpinBox;
    QWidget* junctionTab;
    QGroupBox* junctionGroupBox;
    QLabel* textLabel1_2;
    QLabel* textLabel2_4;
    FileChooser* idcFileChooser;
    FileChooser* ikkFileChooser;
    QLabel* textLabel1_4;
    QLabel* textLabel2_2;
    QLabel* textLabel3_2;
    QDoubleSpinBox* rnJuncDoubleSpinBox;
    QDoubleSpinBox* capJuncDoubleSpinBox;
    QDoubleSpinBox* vGapJuncDoubleSpinBox;
    QWidget* materialsTab;
    QGroupBox* substrateGroupBox;
    QLabel* textLabel1_6;
    QLabel* textLabel2_5;
    QDoubleSpinBox* epsSubstrateDoubleSpinBox;
    QDoubleSpinBox* tandSubstrateDoubleSpinBox;
    QGroupBox* scMaterialGroupBox;
    QLabel* textLabel3_5;
    QLabel* textLabel4_5;
    QLabel* textLabel5_3;
    QDoubleSpinBox* rhoScMetalDoubleSpinBox;
    QDoubleSpinBox* vGapScMetalDoubleSpinBox;
    QDoubleSpinBox* tcScMetalDoubleSpinBox;
    QLabel* textLabel12_2;
    QDoubleSpinBox* thickScMetalDoubleSpinBox;
    QGroupBox* normMetalGroupBox;
    QLabel* textLabel6_3;
    QLabel* textLabel12;
    QDoubleSpinBox* rhoNormMetalDoubleSpinBox;
    QDoubleSpinBox* thickNormMetalDoubleSpinBox;
    QWidget* TabPage;
    QGroupBox* inputGroupBox;
    QLabel* textLabel6_4;
    QComboBox* topInputComboBox;
    QLabel* textLabel7_3;
    QComboBox* groundInputComboBox;
    QLabel* textLabel1_7;
    QLabel* textLabel2_6;
    QLabel* textLabel3_6;
    QLabel* textLabel4_4;
    QLabel* textLabel5_4;
    QDoubleSpinBox* widthInputDoubleSpinBox;
    QDoubleSpinBox* lengthInputDoubleSpinBox;
    QDoubleSpinBox* heightInputDoubleSpinBox;
    QLineEdit* z0InputLineEdit;
    QLineEdit* phaseInputLineEdit;
    QGroupBox* tuningGroupBox;
    QLabel* textLabel6_4_2;
    QComboBox* topTuningComboBox;
    QLabel* textLabel7_3_2;
    QComboBox* groundTuningComboBox;
    QLabel* textLabel1_7_2;
    QLabel* textLabel2_6_2;
    QLabel* textLabel3_6_2;
    QLabel* textLabel4_4_2;
    QLabel* textLabel5_4_2;
    QDoubleSpinBox* widthTuningDoubleSpinBox;
    QDoubleSpinBox* lengthTuningDoubleSpinBox;
    QDoubleSpinBox* heightTuningDoubleSpinBox;
    QLineEdit* z0TuningLineEdit;
    QLineEdit* phaseTuningLineEdit;
    QWidget* tunerTab;
    QCheckBox* rfChokeCheckBox;
    QGroupBox* rfChokeGroupBox;
    QLabel* textLabel5_4_2_2;
    QLineEdit* phaseRadialLineEdit;
    QLabel* textLabel4_4_2_2;
    QLineEdit* z0RadialLineEdit;
    QDoubleSpinBox* angleRfChokeDoubleSpinBox;
    QComboBox* groundRfChokeComboBox;
    QComboBox* topRfChokeComboBox;
    QDoubleSpinBox* heightRfChokeDoubleSpinBox;
    QDoubleSpinBox* lengthRfChokeDoubleSpinBox;
    QDoubleSpinBox* widthRfChokeDoubleSpinBox;
    QDoubleSpinBox* radiusRfChokeDoubleSpinBox;
    QLabel* textLabel7_2;
    QLabel* textLabel8_2;
    QLabel* textLabel9;
    QLabel* textLabel11_2;
    QLabel* textLabel13;
    QLabel* textLabel14;
    QLabel* textLabel10;
    QGroupBox* resultsGroupBox;
    QLineEdit* unpumpLineEdit;
    QLabel* textLabel1_3;
    QLabel* textLabel2_3;
    QLineEdit* pumpedLineEdit;
    QLabel* textLabel3_3;
    QLabel* textLabel3_3_2;
    QLineEdit* lsbGainLineEdit;
    QLineEdit* usbGainLineEdit;
    QLabel* textLabel4_3;
    QLabel* textLabel4_3_2;
    QLineEdit* noiseLineEdit;
    QLineEdit* ifOutputLineEdit;
    QPushButton* resetPushButton;
    QPushButton* calculatePushButton;
    QPushButton* quitPushButton;
    QFrame* frame3;
    QGroupBox* plotControlsGroupBox;
    QLabel* textLabel1;
    QDoubleSpinBox* plotLowDoubleSpinBox;
    QLabel* textLabel2;
    QDoubleSpinBox* plotHighDoubleSpinBox;
    QPushButton* plotRedrawPushButton;
    QPushButton* saveDataPushButton;
    QLabel* textLabel7;
    QComboBox* plotXAxisComboBox;
    QLabel* textLabel3;
    QComboBox* plotLeftComboBox;
    QLabel* textLabel4;
    QComboBox* plotRightComboBox;
    QwtPlot* plot;

    microstrip rfChokeStrip;
    circuit bias;
    circuit ifNoChoke;
    transformer ifNoChokeTrans;
    sis_device sis2;
    circuit rfWithChokeZemb;
    circuit rfWithChoke;
    microstrip tuningStrip;
    normal_film normalconductor;
    super_film superconductor;
    const_diel superstrate;
    zterm rfTerm;
    radial_stub rfChoke;
    branch rfBranch1;
    ivcurve iv;
    generator lo;
    voltage_source biasSource;
    mixer mix;
    QString m_filename;
    long plotRightCurve;
    double plotLow;
    double plotHigh;
    long plotLeftCurve;
    sis_device sis1;
    int initialised;
    int USB_PORT;
    int IF_PORT;
    int LSB_PORT;
    transformer ifWithChokeTrans;
    const_diel substrate;
    Complex Zemb;
    Complex Zstub;
    Complex TwoPiI;
    branch rfBranch2;
    microstrip inputStrip;
    circuit rfNoChoke;
    circuit rfNoChokeZemb;
    circuit ifWithChoke;
    branch biasBranch;
    capacitor juncCap1;
    capacitor juncCap2;

public slots:
    virtual void calculate();
    virtual void init();
    virtual void redrawPlot();
    virtual void setPlotLimits();
    virtual void calcOnMouse( const QMouseEvent & e );
    virtual void fileSaveAs();
    virtual void fileSave();
    virtual void setOperatingPoint();
    virtual void setIFImpedance();
    virtual void setHarmonics( int h );
    virtual void setIVdata();
    virtual void setJunction();
    virtual void setSimParameters();
    virtual void setRfChoke();
    virtual void setPlotXAxis();
    virtual void setNormMetal();
    virtual void setScMetal();
    virtual void setDielectric();
    virtual void setRfChokeDim();
    virtual void setInputDims();
    virtual void setTuningDims();
    virtual void calcStripProperties();

protected:
    QHBoxLayout* QTMixFormLayout;
    QVBoxLayout* frame4Layout;
    QSpacerItem* spacer17_2;
    QVBoxLayout* globalsTabLayout;
    QGridLayout* simulationGroupBoxLayout;
    QSpacerItem* spacer29;
    QSpacerItem* spacer30;
    QSpacerItem* spacer27;
    QSpacerItem* spacer26_2;
    QGridLayout* opPointGroupBoxLayout;
    QSpacerItem* spacer22;
    QSpacerItem* spacer21;
    QSpacerItem* spacer23;
    QSpacerItem* spacer24;
    QSpacerItem* spacer19;
    QVBoxLayout* junctionTabLayout;
    QSpacerItem* spacer28_2;
    QGridLayout* junctionGroupBoxLayout;
    QSpacerItem* spacer18_3;
    QSpacerItem* spacer17_3;
    QSpacerItem* spacer23_2;
    QSpacerItem* spacer24_2;
    QSpacerItem* spacer25;
    QVBoxLayout* materialsTabLayout;
    QGridLayout* substrateGroupBoxLayout;
    QSpacerItem* spacer29_2;
    QSpacerItem* spacer30_2;
    QGridLayout* scMaterialGroupBoxLayout;
    QSpacerItem* spacer31;
    QSpacerItem* spacer32;
    QSpacerItem* spacer33;
    QSpacerItem* spacer38_2;
    QGridLayout* normMetalGroupBoxLayout;
    QSpacerItem* spacer38;
    QSpacerItem* spacer34;
    QVBoxLayout* TabPageLayout;
    QHBoxLayout* inputGroupBoxLayout;
    QVBoxLayout* layout14;
    QSpacerItem* spacer43;
    QVBoxLayout* layout12;
    QVBoxLayout* layout11;
    QVBoxLayout* layout40;
    QVBoxLayout* layout38;
    QHBoxLayout* tuningGroupBoxLayout;
    QVBoxLayout* layout14_2;
    QSpacerItem* spacer43_2;
    QVBoxLayout* layout12_2;
    QVBoxLayout* layout11_2;
    QVBoxLayout* layout42;
    QVBoxLayout* layout41;
    QVBoxLayout* tunerTabLayout;
    QGridLayout* rfChokeGroupBoxLayout;
    QSpacerItem* spacer40_5;
    QSpacerItem* spacer40_4;
    QSpacerItem* spacer40_3;
    QSpacerItem* spacer40_2;
    QSpacerItem* spacer37;
    QSpacerItem* spacer36;
    QSpacerItem* spacer40;
    QHBoxLayout* layout49;
    QHBoxLayout* layout48;
    QGridLayout* resultsGroupBoxLayout;
    QSpacerItem* spacer13;
    QSpacerItem* spacer14;
    QSpacerItem* spacer15;
    QSpacerItem* spacer16_2;
    QSpacerItem* spacer15_2;
    QSpacerItem* spacer16;
    QHBoxLayout* buttonLayout;
    QVBoxLayout* frame3Layout;
    QVBoxLayout* plotControlsGroupBoxLayout;
    QHBoxLayout* layout6;
    QSpacerItem* spacer18;
    QHBoxLayout* layout19;
    QSpacerItem* spacer26;
    QHBoxLayout* layout3;
    QSpacerItem* spacer17;

protected slots:
    virtual void languageChange();

};

#endif // QTMIXFORM_H
