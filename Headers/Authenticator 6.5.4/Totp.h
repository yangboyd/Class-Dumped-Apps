//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Totp : NSObject
{
}

+ (unsigned long long)getCurrentOathCounter;
+ (id)getValidationCode:(id)arg1 oathCounter:(id)arg2;
+ (id)getCurrentCode:(id)arg1 length:(unsigned int)arg2 time:(double)arg3;

@end

