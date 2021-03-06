//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSNumber, NSString;

@interface FBPayVerifyPINStatusResponse : NSObject
{
    NSNumber *_legacyNonceEnabled;
    NSNumber *_clientAuthEnabled;
    NSString *_fbpayPINStatus;
    NSArray *_authTickets;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSArray *authTickets; // @synthesize authTickets=_authTickets;
@property(readonly, copy, nonatomic) NSString *fbpayPINStatus; // @synthesize fbpayPINStatus=_fbpayPINStatus;
@property(readonly, copy, nonatomic) NSNumber *clientAuthEnabled; // @synthesize clientAuthEnabled=_clientAuthEnabled;
@property(readonly, copy, nonatomic) NSNumber *legacyNonceEnabled; // @synthesize legacyNonceEnabled=_legacyNonceEnabled;
- (id)initWithPINStatus:(id)arg1 legacyNonceEnabled:(id)arg2 clientAuthEnabled:(id)arg3 authTickets:(id)arg4 error:(id)arg5;

@end

