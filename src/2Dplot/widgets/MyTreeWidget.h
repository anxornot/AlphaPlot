#ifndef MYTREEWIDGET_H
#define MYTREEWIDGET_H

#include <QMenu>
#include <QMouseEvent>
#include <QTreeWidget>
#include <QTreeWidgetItem>

#include "2Dplot/AxisRect2D.h"

class AxisRect2D;
class QCustomPlot;

class MyTreeWidget : public QTreeWidget
{
    Q_OBJECT

public:
    enum class PropertyItemType : int {
        MyWidgetWindow = 0,
        Plot2DCanvas = 1,
        Plot2DLayout = 2,
        Plot2DGrid = 3,
        Plot2DAxis = 4,
        Plot2DLegend = 5,
        Plot2DTextItem = 6,
        Plot2DLineItem = 7,
        Plot2DImageItem = 8,
        Plot2DLSGraph = 9,
        Plot2DChannelGraph = 10,
        Plot2DCurve = 11,
        Plot2DStatBox = 12,
        Plot2DVector = 13,
        Plot2DBarGraph = 14,
        Plot2DPieGraph = 15,
        Plot2DColorMap = 16,
        Plot2DErrorBar = 17,
        Plot3DCanvas = 18,
        Plot3DTheme = 19,
        Plot3DAxisValue = 20,
        Plot3DAxisCatagory = 21,
        Plot3DSurface = 22,
        Plot3DBar = 23,
        Plot3DScatter = 24,
        Plot3DSurfaceDataBlock = 25,
        Plot3DBarDataBlock = 26,
        Plot3DScatterDataBlock = 27,
        TableWindow = 28,
        MatrixWindow = 29,
    };
    MyTreeWidget(QWidget *parent = nullptr);
    ~MyTreeWidget();
signals:
    void adderrorbar();
private slots:
    void CurrentItemChanged(QTreeWidgetItem *current);
    void showContextMenu(const QPoint &pos);
    void addfunctionplot();
    void addplot();
    void addAxis2D();
    void cloneAxis2D();
    void removeAxis2D();
    void removeLineSpecial2D();
    void removeLineSpecialChannel2D();
    void removeCurve2D();
    void removeBar2D();
    void removeVector2D();
    void removeStatBox2D();
    void removeErrorBar2D();
    void removeTextItem2D();
    void removeLineItem2D();
    void removeImageItem2D();

private:
    template<class T>
    void moveplottablelayer(QAction *action,
                            const QCustomPlot::LayerInsertMode &mode);
    template<class T>
    void moveitemlayer(QAction *action,
                       const QCustomPlot::LayerInsertMode &mode);

private:
    QWidget *widget_;
    QAction *addgraph_;
    QAction *addfunctionplot_;
    QAction *leftvalueaxis_;
    QAction *leftlogaxis_;
    QAction *leftpiaxis_;
    QAction *lefttextaxis_;
    QAction *lefttimeaxis_;
    QAction *leftdatetimeaxis_;
    QAction *bottomvalueaxis_;
    QAction *bottomlogaxis_;
    QAction *bottompiaxis_;
    QAction *bottomtextaxis_;
    QAction *bottomtimeaxis_;
    QAction *bottomdatetimeaxis_;
    QAction *rightvalueaxis_;
    QAction *rightlogaxis_;
    QAction *rightpiaxis_;
    QAction *righttextaxis_;
    QAction *righttimeaxis_;
    QAction *rightdatetimeaxis_;
    QAction *topvalueaxis_;
    QAction *toplogaxis_;
    QAction *toppiaxis_;
    QAction *toptextaxis_;
    QAction *toptimeaxis_;
    QAction *topdatetimeaxis_;
    QAction *removeaxis_;
    QAction *removels_;
    QAction *removechannel_;
    QAction *removecurve_;
    QAction *removebar_;
    QAction *removevector_;
    QAction *removestatbox_;
    QAction *removeerrorbar_;
    QAction *removetextitem_;
    QAction *removelineitem_;
    QAction *removeimageitem_;
    //  clone axis
    QAction *clonetotopaxis_;
    QAction *clonetobottomaxis_;
    QAction *clonetoleftaxis_;
    QAction *clonetorightaxis_;
    // Errorbar
    QAction *adderrorbar_;
    // move layer up
    QAction *moveupls_;
    QAction *moveupchannel_;
    QAction *moveupcurve_;
    QAction *moveupbar_;
    QAction *moveupvector_;
    QAction *moveupstatbox_;
    QAction *moveuppie_;
    QAction *moveupcolormap_;
    QAction *moveuptextitem_;
    QAction *moveuplineitem_;
    QAction *moveupimageitem_;
    // move layer down
    QAction *movedownls_;
    QAction *movedownchannel_;
    QAction *movedowncurve_;
    QAction *movedownbar_;
    QAction *movedownvector_;
    QAction *movedownstatbox_;
    QAction *movedownpie_;
    QAction *movedowncolormap_;
    QAction *movedowntextitem_;
    QAction *movedownlineitem_;
    QAction *movedownimageitem_;
};

#endif // MYTREEWIDGET_H
