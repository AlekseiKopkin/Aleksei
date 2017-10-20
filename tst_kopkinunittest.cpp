#include <QString>
#include <QtTest>
#include "kopkinclass.h"

class KopkinUnitTest : public QObject
{
    Q_OBJECT


public:
    KopkinUnitTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();
    void TablTestSum_data(); //инициализация набора данных
    void TablTestSum(); // выполнение тестов
    void TestSum();
};

KopkinUnitTest::KopkinUnitTest()
{
}

void KopkinUnitTest::initTestCase()
{
}

void KopkinUnitTest::cleanupTestCase()
{
}

void KopkinUnitTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void KopkinUnitTest::TablTestSum_data()
{
    QTest::addColumn<int>("first");
    QTest::addColumn<int>("second");
    QTest::addColumn<int>("expected");

    QTest::newRow("Test data 1") << 0 << 0 << 0;
    QTest::newRow("Test data 2") << 5 << 10 << 15;
    QTest::newRow("Test data 3") << 10 << 10 << 20;
    QTest::newRow("Test data 4") << -5 << -10 << -14;
    QTest::newRow("Test data 5") << -10 << 5 << -5;
    QTest::newRow("Test data 6") << -25 << -10 << -35;
    QTest::newRow("Test data 7") << 25 << 5 << 30;
}

void KopkinUnitTest::TablTestSum()
{
    KopkinClass mc;
    QFETCH(int, first);
    QFETCH(int, second);
    QFETCH(int, expected);
    int actual = mc.sum(first, second);
    QCOMPARE(actual, expected);
}

void KopkinUnitTest::TestSum()
{
    KopkinClass KopkinClass;      // Создаём экземпляр нашего класса
    QCOMPARE(KopkinClass.sum(25, 0), 25);
    QCOMPARE(KopkinClass.sum(-12, -5), -17);
    QCOMPARE(KopkinClass.sum(20, 2007), 2027);
    QCOMPARE(KopkinClass.sum(-12, 2), -10);
}

int main(int argc, char *argv[]) \
{ \
    KopkinUnitTest tc; \
    QTEST_SET_MAIN_SOURCE_PATH \
    return QTest::qExec(&tc, argc, argv); \
}

#include "tst_kopkinunittest.moc"
