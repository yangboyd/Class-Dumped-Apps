//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol AWLoginTransaction;

@interface AWLoginTransactionValidator : NSObject
{
    int _scheduleLoopCount;
    id <AWLoginTransaction> _loginTransaction;
    NSArray *_authCookies;
}

+ (void)beginValidationWithLoginTransaction:(id)arg1 withAuthCookies:(id)arg2;
@property(nonatomic) int scheduleLoopCount; // @synthesize scheduleLoopCount=_scheduleLoopCount;
@property(readonly, nonatomic) NSArray *authCookies; // @synthesize authCookies=_authCookies;
@property(readonly, nonatomic) id <AWLoginTransaction> loginTransaction; // @synthesize loginTransaction=_loginTransaction;
- (void).cxx_destruct;
- (_Bool)cookie:(id)arg1 isEqualToCookie:(id)arg2;
- (void)validationSucceeded;
- (void)scheduleNextAuthCookieCheck;
- (void)authCookiesExistInWKLand;
- (void)beginValidation;
- (id)initWithLoginTransaction:(id)arg1 authCookies:(id)arg2;

@end

