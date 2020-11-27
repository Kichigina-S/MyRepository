#include <QString>
#include <QtTest>
#include <QCoreApplication>

class Calculator_test : public QObject
{
    Q_OBJECT

public:
    Calculator_test();

private Q_SLOTS:
    void plus_test_data();
    void plus_test();
};

Calculator_test::Calculator_test()
{
}

void Calculator_test::plus_test_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void Calculator_test::plus_test()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(Calculator_test)

#include "tst_calculator_test.moc"
