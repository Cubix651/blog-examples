
#ifndef LIBRARY_H
#define LIBRARY_H


constexpr int f(int n, int k)
{
    if (n < 2)
        return n*k;
    return f(n-1, k) + f(n-2, k);
}


template <typename T>
T library_function_0(T arg)
{
    constexpr int value = f(20, 0);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_0(int arg);

template <typename T>
T library_function_1(T arg)
{
    constexpr int value = f(20, 1);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_1(int arg);

template <typename T>
T library_function_2(T arg)
{
    constexpr int value = f(20, 2);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_2(int arg);

template <typename T>
T library_function_3(T arg)
{
    constexpr int value = f(20, 3);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_3(int arg);

template <typename T>
T library_function_4(T arg)
{
    constexpr int value = f(20, 4);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_4(int arg);

template <typename T>
T library_function_5(T arg)
{
    constexpr int value = f(20, 5);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_5(int arg);

template <typename T>
T library_function_6(T arg)
{
    constexpr int value = f(20, 6);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_6(int arg);

template <typename T>
T library_function_7(T arg)
{
    constexpr int value = f(20, 7);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_7(int arg);

template <typename T>
T library_function_8(T arg)
{
    constexpr int value = f(20, 8);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_8(int arg);

template <typename T>
T library_function_9(T arg)
{
    constexpr int value = f(20, 9);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_9(int arg);

template <typename T>
T library_function_10(T arg)
{
    constexpr int value = f(20, 10);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_10(int arg);

template <typename T>
T library_function_11(T arg)
{
    constexpr int value = f(20, 11);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_11(int arg);

template <typename T>
T library_function_12(T arg)
{
    constexpr int value = f(20, 12);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_12(int arg);

template <typename T>
T library_function_13(T arg)
{
    constexpr int value = f(20, 13);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_13(int arg);

template <typename T>
T library_function_14(T arg)
{
    constexpr int value = f(20, 14);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_14(int arg);

template <typename T>
T library_function_15(T arg)
{
    constexpr int value = f(20, 15);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_15(int arg);

template <typename T>
T library_function_16(T arg)
{
    constexpr int value = f(20, 16);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_16(int arg);

template <typename T>
T library_function_17(T arg)
{
    constexpr int value = f(20, 17);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_17(int arg);

template <typename T>
T library_function_18(T arg)
{
    constexpr int value = f(20, 18);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_18(int arg);

template <typename T>
T library_function_19(T arg)
{
    constexpr int value = f(20, 19);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_19(int arg);

template <typename T>
T library_function_20(T arg)
{
    constexpr int value = f(20, 20);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_20(int arg);

template <typename T>
T library_function_21(T arg)
{
    constexpr int value = f(20, 21);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_21(int arg);

template <typename T>
T library_function_22(T arg)
{
    constexpr int value = f(20, 22);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_22(int arg);

template <typename T>
T library_function_23(T arg)
{
    constexpr int value = f(20, 23);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_23(int arg);

template <typename T>
T library_function_24(T arg)
{
    constexpr int value = f(20, 24);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_24(int arg);

template <typename T>
T library_function_25(T arg)
{
    constexpr int value = f(20, 25);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_25(int arg);

template <typename T>
T library_function_26(T arg)
{
    constexpr int value = f(20, 26);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_26(int arg);

template <typename T>
T library_function_27(T arg)
{
    constexpr int value = f(20, 27);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_27(int arg);

template <typename T>
T library_function_28(T arg)
{
    constexpr int value = f(20, 28);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_28(int arg);

template <typename T>
T library_function_29(T arg)
{
    constexpr int value = f(20, 29);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_29(int arg);

template <typename T>
T library_function_30(T arg)
{
    constexpr int value = f(20, 30);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_30(int arg);

template <typename T>
T library_function_31(T arg)
{
    constexpr int value = f(20, 31);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_31(int arg);

template <typename T>
T library_function_32(T arg)
{
    constexpr int value = f(20, 32);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_32(int arg);

template <typename T>
T library_function_33(T arg)
{
    constexpr int value = f(20, 33);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_33(int arg);

template <typename T>
T library_function_34(T arg)
{
    constexpr int value = f(20, 34);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_34(int arg);

template <typename T>
T library_function_35(T arg)
{
    constexpr int value = f(20, 35);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_35(int arg);

template <typename T>
T library_function_36(T arg)
{
    constexpr int value = f(20, 36);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_36(int arg);

template <typename T>
T library_function_37(T arg)
{
    constexpr int value = f(20, 37);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_37(int arg);

template <typename T>
T library_function_38(T arg)
{
    constexpr int value = f(20, 38);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_38(int arg);

template <typename T>
T library_function_39(T arg)
{
    constexpr int value = f(20, 39);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_39(int arg);

template <typename T>
T library_function_40(T arg)
{
    constexpr int value = f(20, 40);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_40(int arg);

template <typename T>
T library_function_41(T arg)
{
    constexpr int value = f(20, 41);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_41(int arg);

template <typename T>
T library_function_42(T arg)
{
    constexpr int value = f(20, 42);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_42(int arg);

template <typename T>
T library_function_43(T arg)
{
    constexpr int value = f(20, 43);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_43(int arg);

template <typename T>
T library_function_44(T arg)
{
    constexpr int value = f(20, 44);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_44(int arg);

template <typename T>
T library_function_45(T arg)
{
    constexpr int value = f(20, 45);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_45(int arg);

template <typename T>
T library_function_46(T arg)
{
    constexpr int value = f(20, 46);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_46(int arg);

template <typename T>
T library_function_47(T arg)
{
    constexpr int value = f(20, 47);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_47(int arg);

template <typename T>
T library_function_48(T arg)
{
    constexpr int value = f(20, 48);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_48(int arg);

template <typename T>
T library_function_49(T arg)
{
    constexpr int value = f(20, 49);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_49(int arg);

template <typename T>
T library_function_50(T arg)
{
    constexpr int value = f(20, 50);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_50(int arg);

template <typename T>
T library_function_51(T arg)
{
    constexpr int value = f(20, 51);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_51(int arg);

template <typename T>
T library_function_52(T arg)
{
    constexpr int value = f(20, 52);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_52(int arg);

template <typename T>
T library_function_53(T arg)
{
    constexpr int value = f(20, 53);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_53(int arg);

template <typename T>
T library_function_54(T arg)
{
    constexpr int value = f(20, 54);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_54(int arg);

template <typename T>
T library_function_55(T arg)
{
    constexpr int value = f(20, 55);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_55(int arg);

template <typename T>
T library_function_56(T arg)
{
    constexpr int value = f(20, 56);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_56(int arg);

template <typename T>
T library_function_57(T arg)
{
    constexpr int value = f(20, 57);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_57(int arg);

template <typename T>
T library_function_58(T arg)
{
    constexpr int value = f(20, 58);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_58(int arg);

template <typename T>
T library_function_59(T arg)
{
    constexpr int value = f(20, 59);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_59(int arg);

template <typename T>
T library_function_60(T arg)
{
    constexpr int value = f(20, 60);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_60(int arg);

template <typename T>
T library_function_61(T arg)
{
    constexpr int value = f(20, 61);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_61(int arg);

template <typename T>
T library_function_62(T arg)
{
    constexpr int value = f(20, 62);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_62(int arg);

template <typename T>
T library_function_63(T arg)
{
    constexpr int value = f(20, 63);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_63(int arg);

template <typename T>
T library_function_64(T arg)
{
    constexpr int value = f(20, 64);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_64(int arg);

template <typename T>
T library_function_65(T arg)
{
    constexpr int value = f(20, 65);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_65(int arg);

template <typename T>
T library_function_66(T arg)
{
    constexpr int value = f(20, 66);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_66(int arg);

template <typename T>
T library_function_67(T arg)
{
    constexpr int value = f(20, 67);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_67(int arg);

template <typename T>
T library_function_68(T arg)
{
    constexpr int value = f(20, 68);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_68(int arg);

template <typename T>
T library_function_69(T arg)
{
    constexpr int value = f(20, 69);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_69(int arg);

template <typename T>
T library_function_70(T arg)
{
    constexpr int value = f(20, 70);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_70(int arg);

template <typename T>
T library_function_71(T arg)
{
    constexpr int value = f(20, 71);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_71(int arg);

template <typename T>
T library_function_72(T arg)
{
    constexpr int value = f(20, 72);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_72(int arg);

template <typename T>
T library_function_73(T arg)
{
    constexpr int value = f(20, 73);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_73(int arg);

template <typename T>
T library_function_74(T arg)
{
    constexpr int value = f(20, 74);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_74(int arg);

template <typename T>
T library_function_75(T arg)
{
    constexpr int value = f(20, 75);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_75(int arg);

template <typename T>
T library_function_76(T arg)
{
    constexpr int value = f(20, 76);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_76(int arg);

template <typename T>
T library_function_77(T arg)
{
    constexpr int value = f(20, 77);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_77(int arg);

template <typename T>
T library_function_78(T arg)
{
    constexpr int value = f(20, 78);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_78(int arg);

template <typename T>
T library_function_79(T arg)
{
    constexpr int value = f(20, 79);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_79(int arg);

template <typename T>
T library_function_80(T arg)
{
    constexpr int value = f(20, 80);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_80(int arg);

template <typename T>
T library_function_81(T arg)
{
    constexpr int value = f(20, 81);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_81(int arg);

template <typename T>
T library_function_82(T arg)
{
    constexpr int value = f(20, 82);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_82(int arg);

template <typename T>
T library_function_83(T arg)
{
    constexpr int value = f(20, 83);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_83(int arg);

template <typename T>
T library_function_84(T arg)
{
    constexpr int value = f(20, 84);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_84(int arg);

template <typename T>
T library_function_85(T arg)
{
    constexpr int value = f(20, 85);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_85(int arg);

template <typename T>
T library_function_86(T arg)
{
    constexpr int value = f(20, 86);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_86(int arg);

template <typename T>
T library_function_87(T arg)
{
    constexpr int value = f(20, 87);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_87(int arg);

template <typename T>
T library_function_88(T arg)
{
    constexpr int value = f(20, 88);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_88(int arg);

template <typename T>
T library_function_89(T arg)
{
    constexpr int value = f(20, 89);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_89(int arg);

template <typename T>
T library_function_90(T arg)
{
    constexpr int value = f(20, 90);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_90(int arg);

template <typename T>
T library_function_91(T arg)
{
    constexpr int value = f(20, 91);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_91(int arg);

template <typename T>
T library_function_92(T arg)
{
    constexpr int value = f(20, 92);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_92(int arg);

template <typename T>
T library_function_93(T arg)
{
    constexpr int value = f(20, 93);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_93(int arg);

template <typename T>
T library_function_94(T arg)
{
    constexpr int value = f(20, 94);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_94(int arg);

template <typename T>
T library_function_95(T arg)
{
    constexpr int value = f(20, 95);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_95(int arg);

template <typename T>
T library_function_96(T arg)
{
    constexpr int value = f(20, 96);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_96(int arg);

template <typename T>
T library_function_97(T arg)
{
    constexpr int value = f(20, 97);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_97(int arg);

template <typename T>
T library_function_98(T arg)
{
    constexpr int value = f(20, 98);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_98(int arg);

template <typename T>
T library_function_99(T arg)
{
    constexpr int value = f(20, 99);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_99(int arg);

template <typename T>
T library_function_100(T arg)
{
    constexpr int value = f(20, 100);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_100(int arg);

template <typename T>
T library_function_101(T arg)
{
    constexpr int value = f(20, 101);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_101(int arg);

template <typename T>
T library_function_102(T arg)
{
    constexpr int value = f(20, 102);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_102(int arg);

template <typename T>
T library_function_103(T arg)
{
    constexpr int value = f(20, 103);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_103(int arg);

template <typename T>
T library_function_104(T arg)
{
    constexpr int value = f(20, 104);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_104(int arg);

template <typename T>
T library_function_105(T arg)
{
    constexpr int value = f(20, 105);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_105(int arg);

template <typename T>
T library_function_106(T arg)
{
    constexpr int value = f(20, 106);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_106(int arg);

template <typename T>
T library_function_107(T arg)
{
    constexpr int value = f(20, 107);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_107(int arg);

template <typename T>
T library_function_108(T arg)
{
    constexpr int value = f(20, 108);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_108(int arg);

template <typename T>
T library_function_109(T arg)
{
    constexpr int value = f(20, 109);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_109(int arg);

template <typename T>
T library_function_110(T arg)
{
    constexpr int value = f(20, 110);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_110(int arg);

template <typename T>
T library_function_111(T arg)
{
    constexpr int value = f(20, 111);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_111(int arg);

template <typename T>
T library_function_112(T arg)
{
    constexpr int value = f(20, 112);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_112(int arg);

template <typename T>
T library_function_113(T arg)
{
    constexpr int value = f(20, 113);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_113(int arg);

template <typename T>
T library_function_114(T arg)
{
    constexpr int value = f(20, 114);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_114(int arg);

template <typename T>
T library_function_115(T arg)
{
    constexpr int value = f(20, 115);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_115(int arg);

template <typename T>
T library_function_116(T arg)
{
    constexpr int value = f(20, 116);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_116(int arg);

template <typename T>
T library_function_117(T arg)
{
    constexpr int value = f(20, 117);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_117(int arg);

template <typename T>
T library_function_118(T arg)
{
    constexpr int value = f(20, 118);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_118(int arg);

template <typename T>
T library_function_119(T arg)
{
    constexpr int value = f(20, 119);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_119(int arg);

template <typename T>
T library_function_120(T arg)
{
    constexpr int value = f(20, 120);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_120(int arg);

template <typename T>
T library_function_121(T arg)
{
    constexpr int value = f(20, 121);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_121(int arg);

template <typename T>
T library_function_122(T arg)
{
    constexpr int value = f(20, 122);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_122(int arg);

template <typename T>
T library_function_123(T arg)
{
    constexpr int value = f(20, 123);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_123(int arg);

template <typename T>
T library_function_124(T arg)
{
    constexpr int value = f(20, 124);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_124(int arg);

template <typename T>
T library_function_125(T arg)
{
    constexpr int value = f(20, 125);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_125(int arg);

template <typename T>
T library_function_126(T arg)
{
    constexpr int value = f(20, 126);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_126(int arg);

template <typename T>
T library_function_127(T arg)
{
    constexpr int value = f(20, 127);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_127(int arg);

template <typename T>
T library_function_128(T arg)
{
    constexpr int value = f(20, 128);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_128(int arg);

template <typename T>
T library_function_129(T arg)
{
    constexpr int value = f(20, 129);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_129(int arg);

template <typename T>
T library_function_130(T arg)
{
    constexpr int value = f(20, 130);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_130(int arg);

template <typename T>
T library_function_131(T arg)
{
    constexpr int value = f(20, 131);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_131(int arg);

template <typename T>
T library_function_132(T arg)
{
    constexpr int value = f(20, 132);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_132(int arg);

template <typename T>
T library_function_133(T arg)
{
    constexpr int value = f(20, 133);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_133(int arg);

template <typename T>
T library_function_134(T arg)
{
    constexpr int value = f(20, 134);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_134(int arg);

template <typename T>
T library_function_135(T arg)
{
    constexpr int value = f(20, 135);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_135(int arg);

template <typename T>
T library_function_136(T arg)
{
    constexpr int value = f(20, 136);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_136(int arg);

template <typename T>
T library_function_137(T arg)
{
    constexpr int value = f(20, 137);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_137(int arg);

template <typename T>
T library_function_138(T arg)
{
    constexpr int value = f(20, 138);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_138(int arg);

template <typename T>
T library_function_139(T arg)
{
    constexpr int value = f(20, 139);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_139(int arg);

template <typename T>
T library_function_140(T arg)
{
    constexpr int value = f(20, 140);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_140(int arg);

template <typename T>
T library_function_141(T arg)
{
    constexpr int value = f(20, 141);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_141(int arg);

template <typename T>
T library_function_142(T arg)
{
    constexpr int value = f(20, 142);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_142(int arg);

template <typename T>
T library_function_143(T arg)
{
    constexpr int value = f(20, 143);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_143(int arg);

template <typename T>
T library_function_144(T arg)
{
    constexpr int value = f(20, 144);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_144(int arg);

template <typename T>
T library_function_145(T arg)
{
    constexpr int value = f(20, 145);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_145(int arg);

template <typename T>
T library_function_146(T arg)
{
    constexpr int value = f(20, 146);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_146(int arg);

template <typename T>
T library_function_147(T arg)
{
    constexpr int value = f(20, 147);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_147(int arg);

template <typename T>
T library_function_148(T arg)
{
    constexpr int value = f(20, 148);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_148(int arg);

template <typename T>
T library_function_149(T arg)
{
    constexpr int value = f(20, 149);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_149(int arg);

template <typename T>
T library_function_150(T arg)
{
    constexpr int value = f(20, 150);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_150(int arg);

template <typename T>
T library_function_151(T arg)
{
    constexpr int value = f(20, 151);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_151(int arg);

template <typename T>
T library_function_152(T arg)
{
    constexpr int value = f(20, 152);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_152(int arg);

template <typename T>
T library_function_153(T arg)
{
    constexpr int value = f(20, 153);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_153(int arg);

template <typename T>
T library_function_154(T arg)
{
    constexpr int value = f(20, 154);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_154(int arg);

template <typename T>
T library_function_155(T arg)
{
    constexpr int value = f(20, 155);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_155(int arg);

template <typename T>
T library_function_156(T arg)
{
    constexpr int value = f(20, 156);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_156(int arg);

template <typename T>
T library_function_157(T arg)
{
    constexpr int value = f(20, 157);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_157(int arg);

template <typename T>
T library_function_158(T arg)
{
    constexpr int value = f(20, 158);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_158(int arg);

template <typename T>
T library_function_159(T arg)
{
    constexpr int value = f(20, 159);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_159(int arg);

template <typename T>
T library_function_160(T arg)
{
    constexpr int value = f(20, 160);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_160(int arg);

template <typename T>
T library_function_161(T arg)
{
    constexpr int value = f(20, 161);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_161(int arg);

template <typename T>
T library_function_162(T arg)
{
    constexpr int value = f(20, 162);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_162(int arg);

template <typename T>
T library_function_163(T arg)
{
    constexpr int value = f(20, 163);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_163(int arg);

template <typename T>
T library_function_164(T arg)
{
    constexpr int value = f(20, 164);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_164(int arg);

template <typename T>
T library_function_165(T arg)
{
    constexpr int value = f(20, 165);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_165(int arg);

template <typename T>
T library_function_166(T arg)
{
    constexpr int value = f(20, 166);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_166(int arg);

template <typename T>
T library_function_167(T arg)
{
    constexpr int value = f(20, 167);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_167(int arg);

template <typename T>
T library_function_168(T arg)
{
    constexpr int value = f(20, 168);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_168(int arg);

template <typename T>
T library_function_169(T arg)
{
    constexpr int value = f(20, 169);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_169(int arg);

template <typename T>
T library_function_170(T arg)
{
    constexpr int value = f(20, 170);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_170(int arg);

template <typename T>
T library_function_171(T arg)
{
    constexpr int value = f(20, 171);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_171(int arg);

template <typename T>
T library_function_172(T arg)
{
    constexpr int value = f(20, 172);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_172(int arg);

template <typename T>
T library_function_173(T arg)
{
    constexpr int value = f(20, 173);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_173(int arg);

template <typename T>
T library_function_174(T arg)
{
    constexpr int value = f(20, 174);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_174(int arg);

template <typename T>
T library_function_175(T arg)
{
    constexpr int value = f(20, 175);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_175(int arg);

template <typename T>
T library_function_176(T arg)
{
    constexpr int value = f(20, 176);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_176(int arg);

template <typename T>
T library_function_177(T arg)
{
    constexpr int value = f(20, 177);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_177(int arg);

template <typename T>
T library_function_178(T arg)
{
    constexpr int value = f(20, 178);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_178(int arg);

template <typename T>
T library_function_179(T arg)
{
    constexpr int value = f(20, 179);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_179(int arg);

template <typename T>
T library_function_180(T arg)
{
    constexpr int value = f(20, 180);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_180(int arg);

template <typename T>
T library_function_181(T arg)
{
    constexpr int value = f(20, 181);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_181(int arg);

template <typename T>
T library_function_182(T arg)
{
    constexpr int value = f(20, 182);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_182(int arg);

template <typename T>
T library_function_183(T arg)
{
    constexpr int value = f(20, 183);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_183(int arg);

template <typename T>
T library_function_184(T arg)
{
    constexpr int value = f(20, 184);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_184(int arg);

template <typename T>
T library_function_185(T arg)
{
    constexpr int value = f(20, 185);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_185(int arg);

template <typename T>
T library_function_186(T arg)
{
    constexpr int value = f(20, 186);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_186(int arg);

template <typename T>
T library_function_187(T arg)
{
    constexpr int value = f(20, 187);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_187(int arg);

template <typename T>
T library_function_188(T arg)
{
    constexpr int value = f(20, 188);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_188(int arg);

template <typename T>
T library_function_189(T arg)
{
    constexpr int value = f(20, 189);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_189(int arg);

template <typename T>
T library_function_190(T arg)
{
    constexpr int value = f(20, 190);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_190(int arg);

template <typename T>
T library_function_191(T arg)
{
    constexpr int value = f(20, 191);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_191(int arg);

template <typename T>
T library_function_192(T arg)
{
    constexpr int value = f(20, 192);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_192(int arg);

template <typename T>
T library_function_193(T arg)
{
    constexpr int value = f(20, 193);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_193(int arg);

template <typename T>
T library_function_194(T arg)
{
    constexpr int value = f(20, 194);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_194(int arg);

template <typename T>
T library_function_195(T arg)
{
    constexpr int value = f(20, 195);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_195(int arg);

template <typename T>
T library_function_196(T arg)
{
    constexpr int value = f(20, 196);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_196(int arg);

template <typename T>
T library_function_197(T arg)
{
    constexpr int value = f(20, 197);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_197(int arg);

template <typename T>
T library_function_198(T arg)
{
    constexpr int value = f(20, 198);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_198(int arg);

template <typename T>
T library_function_199(T arg)
{
    constexpr int value = f(20, 199);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_199(int arg);

template <typename T>
T library_function_200(T arg)
{
    constexpr int value = f(20, 200);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_200(int arg);

template <typename T>
T library_function_201(T arg)
{
    constexpr int value = f(20, 201);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_201(int arg);

template <typename T>
T library_function_202(T arg)
{
    constexpr int value = f(20, 202);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_202(int arg);

template <typename T>
T library_function_203(T arg)
{
    constexpr int value = f(20, 203);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_203(int arg);

template <typename T>
T library_function_204(T arg)
{
    constexpr int value = f(20, 204);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_204(int arg);

template <typename T>
T library_function_205(T arg)
{
    constexpr int value = f(20, 205);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_205(int arg);

template <typename T>
T library_function_206(T arg)
{
    constexpr int value = f(20, 206);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_206(int arg);

template <typename T>
T library_function_207(T arg)
{
    constexpr int value = f(20, 207);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_207(int arg);

template <typename T>
T library_function_208(T arg)
{
    constexpr int value = f(20, 208);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_208(int arg);

template <typename T>
T library_function_209(T arg)
{
    constexpr int value = f(20, 209);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_209(int arg);

template <typename T>
T library_function_210(T arg)
{
    constexpr int value = f(20, 210);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_210(int arg);

template <typename T>
T library_function_211(T arg)
{
    constexpr int value = f(20, 211);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_211(int arg);

template <typename T>
T library_function_212(T arg)
{
    constexpr int value = f(20, 212);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_212(int arg);

template <typename T>
T library_function_213(T arg)
{
    constexpr int value = f(20, 213);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_213(int arg);

template <typename T>
T library_function_214(T arg)
{
    constexpr int value = f(20, 214);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_214(int arg);

template <typename T>
T library_function_215(T arg)
{
    constexpr int value = f(20, 215);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_215(int arg);

template <typename T>
T library_function_216(T arg)
{
    constexpr int value = f(20, 216);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_216(int arg);

template <typename T>
T library_function_217(T arg)
{
    constexpr int value = f(20, 217);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_217(int arg);

template <typename T>
T library_function_218(T arg)
{
    constexpr int value = f(20, 218);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_218(int arg);

template <typename T>
T library_function_219(T arg)
{
    constexpr int value = f(20, 219);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_219(int arg);

template <typename T>
T library_function_220(T arg)
{
    constexpr int value = f(20, 220);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_220(int arg);

template <typename T>
T library_function_221(T arg)
{
    constexpr int value = f(20, 221);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_221(int arg);

template <typename T>
T library_function_222(T arg)
{
    constexpr int value = f(20, 222);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_222(int arg);

template <typename T>
T library_function_223(T arg)
{
    constexpr int value = f(20, 223);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_223(int arg);

template <typename T>
T library_function_224(T arg)
{
    constexpr int value = f(20, 224);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_224(int arg);

template <typename T>
T library_function_225(T arg)
{
    constexpr int value = f(20, 225);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_225(int arg);

template <typename T>
T library_function_226(T arg)
{
    constexpr int value = f(20, 226);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_226(int arg);

template <typename T>
T library_function_227(T arg)
{
    constexpr int value = f(20, 227);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_227(int arg);

template <typename T>
T library_function_228(T arg)
{
    constexpr int value = f(20, 228);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_228(int arg);

template <typename T>
T library_function_229(T arg)
{
    constexpr int value = f(20, 229);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_229(int arg);

template <typename T>
T library_function_230(T arg)
{
    constexpr int value = f(20, 230);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_230(int arg);

template <typename T>
T library_function_231(T arg)
{
    constexpr int value = f(20, 231);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_231(int arg);

template <typename T>
T library_function_232(T arg)
{
    constexpr int value = f(20, 232);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_232(int arg);

template <typename T>
T library_function_233(T arg)
{
    constexpr int value = f(20, 233);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_233(int arg);

template <typename T>
T library_function_234(T arg)
{
    constexpr int value = f(20, 234);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_234(int arg);

template <typename T>
T library_function_235(T arg)
{
    constexpr int value = f(20, 235);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_235(int arg);

template <typename T>
T library_function_236(T arg)
{
    constexpr int value = f(20, 236);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_236(int arg);

template <typename T>
T library_function_237(T arg)
{
    constexpr int value = f(20, 237);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_237(int arg);

template <typename T>
T library_function_238(T arg)
{
    constexpr int value = f(20, 238);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_238(int arg);

template <typename T>
T library_function_239(T arg)
{
    constexpr int value = f(20, 239);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_239(int arg);

template <typename T>
T library_function_240(T arg)
{
    constexpr int value = f(20, 240);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_240(int arg);

template <typename T>
T library_function_241(T arg)
{
    constexpr int value = f(20, 241);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_241(int arg);

template <typename T>
T library_function_242(T arg)
{
    constexpr int value = f(20, 242);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_242(int arg);

template <typename T>
T library_function_243(T arg)
{
    constexpr int value = f(20, 243);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_243(int arg);

template <typename T>
T library_function_244(T arg)
{
    constexpr int value = f(20, 244);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_244(int arg);

template <typename T>
T library_function_245(T arg)
{
    constexpr int value = f(20, 245);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_245(int arg);

template <typename T>
T library_function_246(T arg)
{
    constexpr int value = f(20, 246);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_246(int arg);

template <typename T>
T library_function_247(T arg)
{
    constexpr int value = f(20, 247);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_247(int arg);

template <typename T>
T library_function_248(T arg)
{
    constexpr int value = f(20, 248);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_248(int arg);

template <typename T>
T library_function_249(T arg)
{
    constexpr int value = f(20, 249);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_249(int arg);

template <typename T>
T library_function_250(T arg)
{
    constexpr int value = f(20, 250);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_250(int arg);

template <typename T>
T library_function_251(T arg)
{
    constexpr int value = f(20, 251);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_251(int arg);

template <typename T>
T library_function_252(T arg)
{
    constexpr int value = f(20, 252);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_252(int arg);

template <typename T>
T library_function_253(T arg)
{
    constexpr int value = f(20, 253);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_253(int arg);

template <typename T>
T library_function_254(T arg)
{
    constexpr int value = f(20, 254);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_254(int arg);

template <typename T>
T library_function_255(T arg)
{
    constexpr int value = f(20, 255);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_255(int arg);

template <typename T>
T library_function_256(T arg)
{
    constexpr int value = f(20, 256);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_256(int arg);

template <typename T>
T library_function_257(T arg)
{
    constexpr int value = f(20, 257);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_257(int arg);

template <typename T>
T library_function_258(T arg)
{
    constexpr int value = f(20, 258);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_258(int arg);

template <typename T>
T library_function_259(T arg)
{
    constexpr int value = f(20, 259);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_259(int arg);

template <typename T>
T library_function_260(T arg)
{
    constexpr int value = f(20, 260);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_260(int arg);

template <typename T>
T library_function_261(T arg)
{
    constexpr int value = f(20, 261);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_261(int arg);

template <typename T>
T library_function_262(T arg)
{
    constexpr int value = f(20, 262);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_262(int arg);

template <typename T>
T library_function_263(T arg)
{
    constexpr int value = f(20, 263);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_263(int arg);

template <typename T>
T library_function_264(T arg)
{
    constexpr int value = f(20, 264);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_264(int arg);

template <typename T>
T library_function_265(T arg)
{
    constexpr int value = f(20, 265);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_265(int arg);

template <typename T>
T library_function_266(T arg)
{
    constexpr int value = f(20, 266);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_266(int arg);

template <typename T>
T library_function_267(T arg)
{
    constexpr int value = f(20, 267);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_267(int arg);

template <typename T>
T library_function_268(T arg)
{
    constexpr int value = f(20, 268);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_268(int arg);

template <typename T>
T library_function_269(T arg)
{
    constexpr int value = f(20, 269);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_269(int arg);

template <typename T>
T library_function_270(T arg)
{
    constexpr int value = f(20, 270);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_270(int arg);

template <typename T>
T library_function_271(T arg)
{
    constexpr int value = f(20, 271);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_271(int arg);

template <typename T>
T library_function_272(T arg)
{
    constexpr int value = f(20, 272);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_272(int arg);

template <typename T>
T library_function_273(T arg)
{
    constexpr int value = f(20, 273);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_273(int arg);

template <typename T>
T library_function_274(T arg)
{
    constexpr int value = f(20, 274);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_274(int arg);

template <typename T>
T library_function_275(T arg)
{
    constexpr int value = f(20, 275);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_275(int arg);

template <typename T>
T library_function_276(T arg)
{
    constexpr int value = f(20, 276);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_276(int arg);

template <typename T>
T library_function_277(T arg)
{
    constexpr int value = f(20, 277);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_277(int arg);

template <typename T>
T library_function_278(T arg)
{
    constexpr int value = f(20, 278);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_278(int arg);

template <typename T>
T library_function_279(T arg)
{
    constexpr int value = f(20, 279);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_279(int arg);

template <typename T>
T library_function_280(T arg)
{
    constexpr int value = f(20, 280);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_280(int arg);

template <typename T>
T library_function_281(T arg)
{
    constexpr int value = f(20, 281);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_281(int arg);

template <typename T>
T library_function_282(T arg)
{
    constexpr int value = f(20, 282);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_282(int arg);

template <typename T>
T library_function_283(T arg)
{
    constexpr int value = f(20, 283);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_283(int arg);

template <typename T>
T library_function_284(T arg)
{
    constexpr int value = f(20, 284);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_284(int arg);

template <typename T>
T library_function_285(T arg)
{
    constexpr int value = f(20, 285);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_285(int arg);

template <typename T>
T library_function_286(T arg)
{
    constexpr int value = f(20, 286);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_286(int arg);

template <typename T>
T library_function_287(T arg)
{
    constexpr int value = f(20, 287);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_287(int arg);

template <typename T>
T library_function_288(T arg)
{
    constexpr int value = f(20, 288);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_288(int arg);

template <typename T>
T library_function_289(T arg)
{
    constexpr int value = f(20, 289);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_289(int arg);

template <typename T>
T library_function_290(T arg)
{
    constexpr int value = f(20, 290);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_290(int arg);

template <typename T>
T library_function_291(T arg)
{
    constexpr int value = f(20, 291);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_291(int arg);

template <typename T>
T library_function_292(T arg)
{
    constexpr int value = f(20, 292);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_292(int arg);

template <typename T>
T library_function_293(T arg)
{
    constexpr int value = f(20, 293);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_293(int arg);

template <typename T>
T library_function_294(T arg)
{
    constexpr int value = f(20, 294);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_294(int arg);

template <typename T>
T library_function_295(T arg)
{
    constexpr int value = f(20, 295);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_295(int arg);

template <typename T>
T library_function_296(T arg)
{
    constexpr int value = f(20, 296);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_296(int arg);

template <typename T>
T library_function_297(T arg)
{
    constexpr int value = f(20, 297);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_297(int arg);

template <typename T>
T library_function_298(T arg)
{
    constexpr int value = f(20, 298);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_298(int arg);

template <typename T>
T library_function_299(T arg)
{
    constexpr int value = f(20, 299);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_299(int arg);

template <typename T>
T library_function_300(T arg)
{
    constexpr int value = f(20, 300);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_300(int arg);

template <typename T>
T library_function_301(T arg)
{
    constexpr int value = f(20, 301);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_301(int arg);

template <typename T>
T library_function_302(T arg)
{
    constexpr int value = f(20, 302);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_302(int arg);

template <typename T>
T library_function_303(T arg)
{
    constexpr int value = f(20, 303);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_303(int arg);

template <typename T>
T library_function_304(T arg)
{
    constexpr int value = f(20, 304);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_304(int arg);

template <typename T>
T library_function_305(T arg)
{
    constexpr int value = f(20, 305);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_305(int arg);

template <typename T>
T library_function_306(T arg)
{
    constexpr int value = f(20, 306);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_306(int arg);

template <typename T>
T library_function_307(T arg)
{
    constexpr int value = f(20, 307);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_307(int arg);

template <typename T>
T library_function_308(T arg)
{
    constexpr int value = f(20, 308);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_308(int arg);

template <typename T>
T library_function_309(T arg)
{
    constexpr int value = f(20, 309);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_309(int arg);

template <typename T>
T library_function_310(T arg)
{
    constexpr int value = f(20, 310);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_310(int arg);

template <typename T>
T library_function_311(T arg)
{
    constexpr int value = f(20, 311);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_311(int arg);

template <typename T>
T library_function_312(T arg)
{
    constexpr int value = f(20, 312);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_312(int arg);

template <typename T>
T library_function_313(T arg)
{
    constexpr int value = f(20, 313);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_313(int arg);

template <typename T>
T library_function_314(T arg)
{
    constexpr int value = f(20, 314);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_314(int arg);

template <typename T>
T library_function_315(T arg)
{
    constexpr int value = f(20, 315);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_315(int arg);

template <typename T>
T library_function_316(T arg)
{
    constexpr int value = f(20, 316);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_316(int arg);

template <typename T>
T library_function_317(T arg)
{
    constexpr int value = f(20, 317);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_317(int arg);

template <typename T>
T library_function_318(T arg)
{
    constexpr int value = f(20, 318);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_318(int arg);

template <typename T>
T library_function_319(T arg)
{
    constexpr int value = f(20, 319);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_319(int arg);

template <typename T>
T library_function_320(T arg)
{
    constexpr int value = f(20, 320);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_320(int arg);

template <typename T>
T library_function_321(T arg)
{
    constexpr int value = f(20, 321);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_321(int arg);

template <typename T>
T library_function_322(T arg)
{
    constexpr int value = f(20, 322);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_322(int arg);

template <typename T>
T library_function_323(T arg)
{
    constexpr int value = f(20, 323);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_323(int arg);

template <typename T>
T library_function_324(T arg)
{
    constexpr int value = f(20, 324);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_324(int arg);

template <typename T>
T library_function_325(T arg)
{
    constexpr int value = f(20, 325);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_325(int arg);

template <typename T>
T library_function_326(T arg)
{
    constexpr int value = f(20, 326);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_326(int arg);

template <typename T>
T library_function_327(T arg)
{
    constexpr int value = f(20, 327);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_327(int arg);

template <typename T>
T library_function_328(T arg)
{
    constexpr int value = f(20, 328);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_328(int arg);

template <typename T>
T library_function_329(T arg)
{
    constexpr int value = f(20, 329);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_329(int arg);

template <typename T>
T library_function_330(T arg)
{
    constexpr int value = f(20, 330);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_330(int arg);

template <typename T>
T library_function_331(T arg)
{
    constexpr int value = f(20, 331);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_331(int arg);

template <typename T>
T library_function_332(T arg)
{
    constexpr int value = f(20, 332);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_332(int arg);

template <typename T>
T library_function_333(T arg)
{
    constexpr int value = f(20, 333);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_333(int arg);

template <typename T>
T library_function_334(T arg)
{
    constexpr int value = f(20, 334);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_334(int arg);

template <typename T>
T library_function_335(T arg)
{
    constexpr int value = f(20, 335);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_335(int arg);

template <typename T>
T library_function_336(T arg)
{
    constexpr int value = f(20, 336);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_336(int arg);

template <typename T>
T library_function_337(T arg)
{
    constexpr int value = f(20, 337);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_337(int arg);

template <typename T>
T library_function_338(T arg)
{
    constexpr int value = f(20, 338);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_338(int arg);

template <typename T>
T library_function_339(T arg)
{
    constexpr int value = f(20, 339);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_339(int arg);

template <typename T>
T library_function_340(T arg)
{
    constexpr int value = f(20, 340);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_340(int arg);

template <typename T>
T library_function_341(T arg)
{
    constexpr int value = f(20, 341);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_341(int arg);

template <typename T>
T library_function_342(T arg)
{
    constexpr int value = f(20, 342);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_342(int arg);

template <typename T>
T library_function_343(T arg)
{
    constexpr int value = f(20, 343);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_343(int arg);

template <typename T>
T library_function_344(T arg)
{
    constexpr int value = f(20, 344);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_344(int arg);

template <typename T>
T library_function_345(T arg)
{
    constexpr int value = f(20, 345);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_345(int arg);

template <typename T>
T library_function_346(T arg)
{
    constexpr int value = f(20, 346);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_346(int arg);

template <typename T>
T library_function_347(T arg)
{
    constexpr int value = f(20, 347);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_347(int arg);

template <typename T>
T library_function_348(T arg)
{
    constexpr int value = f(20, 348);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_348(int arg);

template <typename T>
T library_function_349(T arg)
{
    constexpr int value = f(20, 349);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_349(int arg);

template <typename T>
T library_function_350(T arg)
{
    constexpr int value = f(20, 350);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_350(int arg);

template <typename T>
T library_function_351(T arg)
{
    constexpr int value = f(20, 351);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_351(int arg);

template <typename T>
T library_function_352(T arg)
{
    constexpr int value = f(20, 352);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_352(int arg);

template <typename T>
T library_function_353(T arg)
{
    constexpr int value = f(20, 353);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_353(int arg);

template <typename T>
T library_function_354(T arg)
{
    constexpr int value = f(20, 354);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_354(int arg);

template <typename T>
T library_function_355(T arg)
{
    constexpr int value = f(20, 355);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_355(int arg);

template <typename T>
T library_function_356(T arg)
{
    constexpr int value = f(20, 356);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_356(int arg);

template <typename T>
T library_function_357(T arg)
{
    constexpr int value = f(20, 357);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_357(int arg);

template <typename T>
T library_function_358(T arg)
{
    constexpr int value = f(20, 358);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_358(int arg);

template <typename T>
T library_function_359(T arg)
{
    constexpr int value = f(20, 359);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_359(int arg);

template <typename T>
T library_function_360(T arg)
{
    constexpr int value = f(20, 360);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_360(int arg);

template <typename T>
T library_function_361(T arg)
{
    constexpr int value = f(20, 361);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_361(int arg);

template <typename T>
T library_function_362(T arg)
{
    constexpr int value = f(20, 362);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_362(int arg);

template <typename T>
T library_function_363(T arg)
{
    constexpr int value = f(20, 363);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_363(int arg);

template <typename T>
T library_function_364(T arg)
{
    constexpr int value = f(20, 364);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_364(int arg);

template <typename T>
T library_function_365(T arg)
{
    constexpr int value = f(20, 365);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_365(int arg);

template <typename T>
T library_function_366(T arg)
{
    constexpr int value = f(20, 366);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_366(int arg);

template <typename T>
T library_function_367(T arg)
{
    constexpr int value = f(20, 367);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_367(int arg);

template <typename T>
T library_function_368(T arg)
{
    constexpr int value = f(20, 368);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_368(int arg);

template <typename T>
T library_function_369(T arg)
{
    constexpr int value = f(20, 369);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_369(int arg);

template <typename T>
T library_function_370(T arg)
{
    constexpr int value = f(20, 370);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_370(int arg);

template <typename T>
T library_function_371(T arg)
{
    constexpr int value = f(20, 371);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_371(int arg);

template <typename T>
T library_function_372(T arg)
{
    constexpr int value = f(20, 372);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_372(int arg);

template <typename T>
T library_function_373(T arg)
{
    constexpr int value = f(20, 373);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_373(int arg);

template <typename T>
T library_function_374(T arg)
{
    constexpr int value = f(20, 374);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_374(int arg);

template <typename T>
T library_function_375(T arg)
{
    constexpr int value = f(20, 375);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_375(int arg);

template <typename T>
T library_function_376(T arg)
{
    constexpr int value = f(20, 376);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_376(int arg);

template <typename T>
T library_function_377(T arg)
{
    constexpr int value = f(20, 377);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_377(int arg);

template <typename T>
T library_function_378(T arg)
{
    constexpr int value = f(20, 378);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_378(int arg);

template <typename T>
T library_function_379(T arg)
{
    constexpr int value = f(20, 379);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_379(int arg);

template <typename T>
T library_function_380(T arg)
{
    constexpr int value = f(20, 380);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_380(int arg);

template <typename T>
T library_function_381(T arg)
{
    constexpr int value = f(20, 381);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_381(int arg);

template <typename T>
T library_function_382(T arg)
{
    constexpr int value = f(20, 382);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_382(int arg);

template <typename T>
T library_function_383(T arg)
{
    constexpr int value = f(20, 383);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_383(int arg);

template <typename T>
T library_function_384(T arg)
{
    constexpr int value = f(20, 384);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_384(int arg);

template <typename T>
T library_function_385(T arg)
{
    constexpr int value = f(20, 385);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_385(int arg);

template <typename T>
T library_function_386(T arg)
{
    constexpr int value = f(20, 386);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_386(int arg);

template <typename T>
T library_function_387(T arg)
{
    constexpr int value = f(20, 387);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_387(int arg);

template <typename T>
T library_function_388(T arg)
{
    constexpr int value = f(20, 388);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_388(int arg);

template <typename T>
T library_function_389(T arg)
{
    constexpr int value = f(20, 389);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_389(int arg);

template <typename T>
T library_function_390(T arg)
{
    constexpr int value = f(20, 390);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_390(int arg);

template <typename T>
T library_function_391(T arg)
{
    constexpr int value = f(20, 391);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_391(int arg);

template <typename T>
T library_function_392(T arg)
{
    constexpr int value = f(20, 392);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_392(int arg);

template <typename T>
T library_function_393(T arg)
{
    constexpr int value = f(20, 393);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_393(int arg);

template <typename T>
T library_function_394(T arg)
{
    constexpr int value = f(20, 394);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_394(int arg);

template <typename T>
T library_function_395(T arg)
{
    constexpr int value = f(20, 395);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_395(int arg);

template <typename T>
T library_function_396(T arg)
{
    constexpr int value = f(20, 396);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_396(int arg);

template <typename T>
T library_function_397(T arg)
{
    constexpr int value = f(20, 397);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_397(int arg);

template <typename T>
T library_function_398(T arg)
{
    constexpr int value = f(20, 398);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_398(int arg);

template <typename T>
T library_function_399(T arg)
{
    constexpr int value = f(20, 399);
    static_assert(value >= 0, "non-negative");
    return arg + value;
}
extern template int library_function_399(int arg);

#endif