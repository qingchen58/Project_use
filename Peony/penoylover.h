#ifndef PENOYLOVER_H
#define PENOYLOVER_H

#endif // PENOYLOVER_H

#include <QObject>
#include <QDebug>

class PenoyLover:public QObject
{
    Q_OBJECT
public:
    PenoyLover(QString name):m_strName(name)
    {

    }
private slots:
    void onPeonyBloom()
    {
        qDebug() <<"peony bloom, let\'s go luoyang";
    }
private:
    QString m_strName;
};
