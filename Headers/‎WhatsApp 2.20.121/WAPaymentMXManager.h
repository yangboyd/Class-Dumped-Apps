//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/_TtC8Payments16WAPaymentManager.h>

@interface WAPaymentMXManager : _TtC8Payments16WAPaymentManager
{
    // Error parsing type: , name: mxLogger
}

+ (id)banxicoSPEIURL;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)initWithChatStorage:(id)arg1 xmppConnection:(id)arg2 paymentSettings:(id)arg3 dependencyProvider:(id)arg4 persistentKeyValueStore:(id)arg5 persistentRequestManager:(id)arg6;
- (id)coreDataTransactionWith:(id)arg1 messageID:(id)arg2;
- (void)fullyResetStateAndResetTOS:(_Bool)arg1 resetWAPIN:(_Bool)arg2;
@property(nonatomic, readonly) _Bool hasPaymentAccount;
- (id)createRequesterWithPersistentRequestManager:(id)arg1;

@end

