//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Payments/NSDecimalNumberBehaviors-Protocol.h>

@interface WAPaymentAmountPrecisionValidator : NSObject <NSDecimalNumberBehaviors>
{
    // Error parsing type: , name: _scale
}

- (id)init;
- (_Bool)isDecimalNumberLosingPrecision:(id)arg1;
- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;
- (unsigned long long)roundingMode;
- (short)scale;
- (id)initWithScale:(short)arg1;

@end

