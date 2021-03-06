//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class JavaUtilCurrency, JavaUtilLocale, NSString;

@interface JavaTextDecimalFormatSymbols : NSObject <NSCopying, JavaIoSerializable>
{
    unsigned short zeroDigit_;
    unsigned short groupingSeparator_;
    unsigned short decimalSeparator_;
    unsigned short perMill_;
    unsigned short percent_;
    unsigned short digit_;
    unsigned short patternSeparator_;
    NSString *infinity_;
    NSString *NaN_;
    unsigned short minusSign_;
    NSString *currencySymbol_;
    NSString *intlCurrencySymbol_;
    unsigned short monetarySeparator_;
    unsigned short exponential_;
    NSString *exponentialSeparator_;
    JavaUtilLocale *locale_;
    JavaUtilCurrency *currency_;
    int serialVersionOnStream_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (unsigned short)maybeStripMarkersWithNSString:(id)arg1 withChar:(unsigned short)arg2;
+ (id)getInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getInstance;
+ (id)getAvailableLocales;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (void)initialize__WithJavaUtilLocale:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)java_clone;
- (void)setExponentSeparatorWithNSString:(id)arg1;
- (void)setExponentialSymbolWithChar:(unsigned short)arg1;
- (id)getExponentSeparator;
- (unsigned short)getExponentialSymbol;
- (void)setMonetaryDecimalSeparatorWithChar:(unsigned short)arg1;
- (unsigned short)getMonetaryDecimalSeparator;
- (void)setCurrencyWithJavaUtilCurrency:(id)arg1;
- (id)getCurrency;
- (void)setInternationalCurrencySymbolWithNSString:(id)arg1;
- (id)getInternationalCurrencySymbol;
- (void)setCurrencySymbolWithNSString:(id)arg1;
- (id)getCurrencySymbol;
- (void)setMinusSignWithChar:(unsigned short)arg1;
- (id)getMinusSignString;
- (unsigned short)getMinusSign;
- (void)setNaNWithNSString:(id)arg1;
- (id)getNaN;
- (void)setInfinityWithNSString:(id)arg1;
- (id)getInfinity;
- (void)setPatternSeparatorWithChar:(unsigned short)arg1;
- (unsigned short)getPatternSeparator;
- (void)setDigitWithChar:(unsigned short)arg1;
- (unsigned short)getDigit;
- (void)setPercentWithChar:(unsigned short)arg1;
- (id)getPercentString;
- (unsigned short)getPercent;
- (void)setPerMillWithChar:(unsigned short)arg1;
- (unsigned short)getPerMill;
- (void)setDecimalSeparatorWithChar:(unsigned short)arg1;
- (unsigned short)getDecimalSeparator;
- (void)setGroupingSeparatorWithChar:(unsigned short)arg1;
- (unsigned short)getGroupingSeparator;
- (void)setZeroDigitWithChar:(unsigned short)arg1;
- (unsigned short)getZeroDigit;
- (id)initWithJavaUtilLocale:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

