#include <QCoreApplication>
#include "penoy.h"
#include "penoylover.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Peony *peony = new Peony();
    peony->setBloomDate(QDateTime::currentDateTime().addDays(30));

    PenoyLover *jack = new PenoyLover("Jack");
    QObject::connect(peony, SIGNAL(bloom()), jack, SLOT(onPeonyBloom()));
    PenoyLover *zhangsan = new PenoyLover("ZhangSan");
    QObject::connect(peony, SIGNAL(bloom()),zhangsan, SLOT(onPeonyBloom()));

    return a.exec();
}
