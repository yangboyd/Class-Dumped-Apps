//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPaymentMoneyDynamicTextFormatter : NSObject
{
    // Error parsing type: , name: moneyFormatter
    // Error parsing type: , name: currencySettings
    // Error parsing type: , name: amountTextViewTheme
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)attributedFormattedStringByAddingCurrencySymbolForNumberString:(id)arg1;
- (id)attributedFormattedStringByAddingCurrencySymbolForNumberString:(id)arg1 charDeleted:(_Bool)arg2 maxWidth:(double)arg3;
- (id)stringFromNumber:(id)arg1;
- (id)numberForFormattedString:(id)arg1;
- (id)formattedStringForAmount_1000:(long long)arg1 locale:(id)arg2;
- (id)formattedStringForAmount_1000:(long long)arg1;
- (id)initWithCurrencySettings:(id)arg1 amountTextViewTheme:(id)arg2;
- (id)init;

@end

