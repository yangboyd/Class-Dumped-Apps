//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class FBFunnelPayload, NSString;

@protocol FBInAppPurchaseFunnelLoggerProtocol <NSObject>
@property(readonly, nonatomic) _Bool isFunnelOpen;
- (void)endFunnel;
- (void)addActionWithActionName:(NSString *)arg1 tag:(NSString *)arg2 actionPayload:(FBFunnelPayload *)arg3;
- (void)addActionWithActionName:(NSString *)arg1 tag:(NSString *)arg2;
- (void)addActionWithActionName:(NSString *)arg1;
- (void)addFunnelTag:(NSString *)arg1;
- (void)startFunnelWithSource:(NSString *)arg1 withSessionID:(unsigned long long)arg2 withUserID:(NSString *)arg3;
@end

