//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMKPrimeMath : NSObject
{
}

+ (_Bool)millerRabinPrimalityTest:(int)arg1 trials:(int)arg2;
+ (int)numTrailingZeros:(int)arg1;
+ (int)powermod:(int)arg1 power:(int)arg2 modulus:(int)arg3;
+ (_Bool)millerRabinPass:(int)arg1 modulus:(int)arg2;
+ (unsigned int)generateRandomPrimeNumber;
+ (unsigned int)generateRandomNumber;

@end

