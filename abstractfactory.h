#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include <QString>

class abstractName
{
public:
    virtual QString carName() const = 0;

    virtual ~abstractName(){}
};

class firstCarName : public abstractName
{
public:
    QString carName() const override{
        return "BMW";
    }
};

class secondCarName : public abstractName
{
public:
    QString carName() const override{
        return "Lamborgini";
    }
};

class thirdCarName : public abstractName
{
    QString carName() const override{
        return "Ferrari";
    }
};

// -------------------

class abstractEngine
{
public:
    virtual ~abstractEngine(){}
    virtual QString engineName() const = 0;
};

class firstEngine : public abstractEngine
{
public:

    QString engineName() const override{
        return "BMW Engine";
    }
};

class secondEngine : public abstractEngine
{
public:
    QString engineName() const override{
        return "Lamborgini Engine";
    }
};

class thirdEngine : public abstractEngine
{
public:
    QString engineName() const override{
        return "Ferrari Engine";
    }
};

// ----------------------

class abstractBonnet
{
public:
    virtual ~abstractBonnet(){}
    virtual QString bonnetName() const = 0;
};

class firstBonnet : public abstractBonnet
{
public:
    QString bonnetName() const override{
        return "BWM Bonnet";
    }
};

class secondBonnet : public abstractBonnet
{
public:
    QString bonnetName() const override{
        return "Lamborgini Bonnet";
    }
};

class thirdBonnet : public abstractBonnet
{
public:
    QString bonnetName() const override{
        return "Ferrari Bonnet";
    }
};

//---------------------------

class abstractCarPrice
{
public:
    virtual ~abstractCarPrice(){}
    virtual double carPrice() const = 0;
};

class firstCarPrice : public abstractCarPrice
{
public:
    double carPrice() const override{
        return 19812.12;
    }
};

class secondCarPrice : public abstractCarPrice
{
public:
    double carPrice() const override{
        return 1298.2;
    }
};

class thirdCarPrice : public abstractCarPrice
{
    double carPrice() const override{
        return 92182.0;
    }
};

// ====================

class abstractFactory
{
public:
    virtual abstractName* createName() = 0;
    virtual abstractEngine* createEngine() = 0;
    virtual abstractBonnet* createBonnet() = 0;
    virtual abstractCarPrice* createCarPrice() = 0;

    ~abstractFactory(){}
};

class firstFactory : public abstractFactory
{
public:
    abstractName* createName() override{
        return new firstCarName();
    }

    abstractEngine* createEngine() override{
        return new firstEngine();
    }

    abstractBonnet* createBonnet() override{
        return new firstBonnet();
    }

    abstractCarPrice* createCarPrice() override{
        return new firstCarPrice();
    }
};

class secondFactory : public abstractFactory
{
public:
    abstractName* createName() override{
        return new secondCarName();
    }

    abstractEngine* createEngine() override{
        return new secondEngine();
    }

    abstractBonnet* createBonnet() override{
        return new secondBonnet();
    }

    abstractCarPrice* createCarPrice() override{
        return new secondCarPrice();
    }
};

class thirdFactory : public abstractFactory
{
public:
    abstractName* createName() override{
        return new thirdCarName();
    }

    abstractEngine* createEngine() override{
        return new thirdEngine();
    }

    abstractBonnet* createBonnet() override{
        return new thirdBonnet();
    }

    abstractCarPrice* createCarPrice() override{
        return new thirdCarPrice();
    }
};

//===========-----===========

//class abstractCarFactory
//{
//public:
//    virtual abstractFactory* createFactory() const = 0;
//};

//class firstCarFactory : public abstractCarFactory
//{
//public:
//    abstractFactory* createFactory() const override{
//        return new firstFactory();
//    }
//};

#endif // ABSTRACTFACTORY_H
