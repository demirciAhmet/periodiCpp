/****************************************************************************
** Meta object code from reading C++ file 'tablesection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../klonx9/periodiCpp-Storage/STAGE4/periodiCpp(Guncel)/tablesection.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablesection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTableSectionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTableSectionENDCLASS = QtMocHelpers::stringData(
    "TableSection",
    "on_colorButton_clicked",
    "",
    "onElementButtonClicked",
    "Element",
    "element",
    "on_SearchBar_textEdited",
    "arg1",
    "on_SearchButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTableSectionENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[8];
    char stringdata5[8];
    char stringdata6[24];
    char stringdata7[5];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTableSectionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTableSectionENDCLASS_t qt_meta_stringdata_CLASSTableSectionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "TableSection"
        QT_MOC_LITERAL(13, 22),  // "on_colorButton_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 22),  // "onElementButtonClicked"
        QT_MOC_LITERAL(60, 7),  // "Element"
        QT_MOC_LITERAL(68, 7),  // "element"
        QT_MOC_LITERAL(76, 23),  // "on_SearchBar_textEdited"
        QT_MOC_LITERAL(100, 4),  // "arg1"
        QT_MOC_LITERAL(105, 23)   // "on_SearchButton_clicked"
    },
    "TableSection",
    "on_colorButton_clicked",
    "",
    "onElementButtonClicked",
    "Element",
    "element",
    "on_SearchBar_textEdited",
    "arg1",
    "on_SearchButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTableSectionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    1,   39,    2, 0x08,    2 /* Private */,
       6,    1,   42,    2, 0x08,    4 /* Private */,
       8,    0,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TableSection::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTableSectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTableSectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTableSectionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TableSection, std::true_type>,
        // method 'on_colorButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onElementButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Element &, std::false_type>,
        // method 'on_SearchBar_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_SearchButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TableSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TableSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_colorButton_clicked(); break;
        case 1: _t->onElementButtonClicked((*reinterpret_cast< std::add_pointer_t<Element>>(_a[1]))); break;
        case 2: _t->on_SearchBar_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_SearchButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *TableSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTableSectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TableSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
