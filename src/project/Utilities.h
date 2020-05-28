/* This file is part of AlphaPlot.

   Copyright 2016, Arun Narayanankutty <n.arun.lifescience@gmail.com>

   AlphaPlot is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   AlphaPlot is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with AlphaPlot.  If not, see <http://www.gnu.org/licenses/>.

   Description : AlphaPlot utilities : handle application wide

*/
#include <QColor>
#include <QImage>
#include <QString>

class Utilities
{
public:
    enum class ColorPal { Light, Dark };
    static int getWordSizeApp();
    static QString getOperatingSystem();
    static int getWordSizeOfOS();
    static QColor getRandColorGoldenRatio(ColorPal colpal);
    static QString splitstring(QString string);
    static QString joinstring(QString string);
    static QImage convertToGrayScale(const QImage &srcImage);
    static QImage convertToGrayScaleFast(const QImage &srcImage);

private:
    Utilities() { }
    static double rgbRandomSeed_;
    static int rgbCounter_;
};
