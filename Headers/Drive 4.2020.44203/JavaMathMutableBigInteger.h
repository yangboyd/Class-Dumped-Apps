//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSIntArray;

@interface JavaMathMutableBigInteger : NSObject
{
    IOSIntArray *value_;
    int intLen_;
    int offset_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)fixupWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2 withInt:(int)arg3;
+ (id)modInverseBP2WithJavaMathMutableBigInteger:(id)arg1 withInt:(int)arg2;
+ (int)inverseMod32WithInt:(int)arg1;
+ (int)binaryGcdWithInt:(int)arg1 withInt:(int)arg2;
+ (long long)divWordWithLong:(long long)arg1 withInt:(int)arg2;
+ (void)copyAndShiftWithIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withIntArray:(id)arg4 withInt:(int)arg5 withInt:(int)arg6;
- (void)dealloc;
- (id)euclidModInverseWithInt:(int)arg1;
- (id)modInverseWithJavaMathMutableBigInteger:(id)arg1;
- (id)modInverseMP2WithInt:(int)arg1;
- (id)mutableModInverseWithJavaMathMutableBigInteger:(id)arg1;
- (id)binaryGCDWithJavaMathMutableBigInteger:(id)arg1;
- (id)hybridGCDWithJavaMathMutableBigInteger:(id)arg1;
- (_Bool)unsignedLongCompareWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)mulsubLongWithIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
- (int)divaddLongWithInt:(int)arg1 withInt:(int)arg2 withIntArray:(id)arg3 withInt:(int)arg4;
- (id)divideLongMagnitudeWithLong:(long long)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (id)divideMagnitudeWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2 withBoolean:(_Bool)arg3;
- (long long)divideWithLong:(long long)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (long long)bitLength;
- (id)getBlockWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)divide3n2nWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (id)divide2n1nWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (id)divideAndRemainderBurnikelZieglerWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (id)divideKnuthWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2 withBoolean:(_Bool)arg3;
- (id)divideKnuthWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (id)divideWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2 withBoolean:(_Bool)arg3;
- (id)divideWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (int)divideOneWordWithInt:(int)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (void)mulWithInt:(int)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (void)multiplyWithJavaMathMutableBigInteger:(id)arg1 withJavaMathMutableBigInteger:(id)arg2;
- (int)differenceWithJavaMathMutableBigInteger:(id)arg1;
- (int)subtractWithJavaMathMutableBigInteger:(id)arg1;
- (void)addLowerWithJavaMathMutableBigInteger:(id)arg1 withInt:(int)arg2;
- (void)addDisjointWithJavaMathMutableBigInteger:(id)arg1 withInt:(int)arg2;
- (void)addShiftedWithJavaMathMutableBigInteger:(id)arg1 withInt:(int)arg2;
- (void)addWithJavaMathMutableBigInteger:(id)arg1;
- (void)keepLowerWithInt:(int)arg1;
- (id)getLowerWithInt:(int)arg1;
- (void)primitiveLeftShiftWithInt:(int)arg1;
- (void)primitiveRightShiftWithInt:(int)arg1;
- (int)mulsubBorrowWithIntArray:(id)arg1 withIntArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
- (int)mulsubWithIntArray:(id)arg1 withIntArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
- (int)divaddWithIntArray:(id)arg1 withIntArray:(id)arg2 withInt:(int)arg3;
- (void)leftShiftWithInt:(int)arg1;
- (void)safeLeftShiftWithInt:(int)arg1;
- (void)rightShiftWithInt:(int)arg1;
- (void)safeRightShiftWithInt:(int)arg1;
- (id)description;
- (_Bool)isNormal;
- (_Bool)isOdd;
- (_Bool)isEven;
- (_Bool)isZero;
- (_Bool)isOne;
- (void)copyValueWithIntArray:(id)arg1;
- (void)copyValueWithJavaMathMutableBigInteger:(id)arg1;
- (void)setValueWithIntArray:(id)arg1 withInt:(int)arg2;
- (void)setIntWithInt:(int)arg1 withInt:(int)arg2;
- (id)toIntArray;
- (void)ensureCapacityWithInt:(int)arg1;
- (void)normalize;
- (long long)getLongWithInt:(int)arg1;
- (int)getIntWithInt:(int)arg1;
- (int)getLowestSetBit;
- (int)compareHalfWithJavaMathMutableBigInteger:(id)arg1;
- (int)compareShiftedWithJavaMathMutableBigInteger:(id)arg1 withInt:(int)arg2;
- (int)compareWithJavaMathMutableBigInteger:(id)arg1;
- (void)reset;
- (void)clear;
- (long long)toCompactValueWithInt:(int)arg1;
- (id)toBigDecimalWithInt:(int)arg1 withInt:(int)arg2;
- (id)toBigInteger;
- (id)toBigIntegerWithInt:(int)arg1;
- (long long)toLong;
- (id)getMagnitudeArray;
- (void)onesWithInt:(int)arg1;
- (id)initPackagePrivateWithJavaMathMutableBigInteger:(id)arg1;
- (id)initPackagePrivateWithJavaMathBigInteger:(id)arg1;
- (id)initPackagePrivateWithIntArray:(id)arg1;
- (id)initPackagePrivateWithInt:(int)arg1;
- (id)initPackagePrivate;

@end

