#include <QString>
#include <QtTest>
#include <QCoreApplication>

#include "../Calculator/operations.h"

class Calculator_test : public QObject
{
    Q_OBJECT

public:
    Calculator_test();

private Q_SLOTS:
    void plus_test_data();
    void plus_test();
    void minus_test_data();
    void minus_test();
    void multyply_test_data();
    void multyply_test();
    void devide_test_data();
    void devide_test();
};

Calculator_test::Calculator_test()
{
}

void Calculator_test::plus_test_data()
{
    QTest::addColumn<double>("first");
    QTest::addColumn<double>("second");
    QTest::addColumn<double>("result");
    QTest::newRow("4+5") << double(4) << double(5) << double(9);
    QTest::newRow("4+5") << double(-4) << double(5) << double(1);
    QTest::newRow("4+5") << double(0.05) << double(5) << double(5.05);
}

void Calculator_test::plus_test()
{
    QFETCH(double, first);
    QFETCH(double, second);
    QFETCH(double, result);

    QCOMPARE(sum(first, second), result);
    QVERIFY2(true, "Failure");
}

void Calculator_test::minus_test_data()
{
    QTest::addColumn<double>("first");
    QTest::addColumn<double>("second");
    QTest::addColumn<double>("result");
    QTest::newRow("3-2") << double(3) << double(2) << double(1);
    QTest::newRow("0.7-2") << double(0.7) << double(2) << double(-1.3);
    QTest::newRow("(-5)-2") << double(-5) << double(2) << double(-7);
}

void Calculator_test::minus_test()
{
    QFETCH(double, first);
    QFETCH(double, second);
    QFETCH(double, result);

    QCOMPARE(minus(first, second), result);
    QVERIFY2(true, "Failure");
}

void Calculator_test::multyply_test_data()
{
    QTest::addColumn<double>("first");
    QTest::addColumn<double>("second");
    QTest::addColumn<double>("result");
    QTest::newRow("3*2") << double(3) << double(2) << double(6);
    QTest::newRow("0.7*2") << double(0.7) << double(2) << double(1.4);
    QTest::newRow("(-5)*2") << double(-5) << double(2) << double(-10);
}

void Calculator_test::multyply_test()
{
    QFETCH(double, first);
    QFETCH(double, second);
    QFETCH(double, result);

    QCOMPARE(multyply(first, second), result);
    QVERIFY2(true, "Failure");
}

void Calculator_test::devide_test_data()
{
    QTest::addColumn<double>("first");
    QTest::addColumn<double>("second");
    QTest::addColumn<double>("result");
    QTest::newRow("3/2") << double(3) << double(2) << double(1.5);
    QTest::newRow("0.7/2") << double(0.7) << double(2) << double(0.35);
    QTest::newRow("(-5)/2") << double(-5) << double(2) << double(-2.5);
}

void Calculator_test::devide_test()
{
    QFETCH(double, first);
    QFETCH(double, second);
    QFETCH(double, result);

    QCOMPARE(devide(first, second), result);
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(Calculator_test)

#include "tst_calculator_test.moc"
