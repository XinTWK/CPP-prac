#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QDebug>

// 異常的接口聲明

void func() throw(int) // 只允許拋出int 類型異常, 當小括號中沒有寫任何類型 代表不允許拋出任意類型的異常
{

   throw 3.14;

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "exception_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();

    try
    {
        func();
    }
    catch (int)
    {
        qDebug()<<"int類型異常捕獲";
    }
    catch(double)
    {
        qDebug()<<"double類型異常捕獲";
    }
    catch(...)
    {
        qDebug()<<"其他類型異常捕獲";
    }

    return a.exec();
}
