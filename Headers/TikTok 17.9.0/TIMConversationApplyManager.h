//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMConversationApplyProtocol-Protocol.h"

@class NSString, TIMMulticastDelegate;

@interface TIMConversationApplyManager : NSObject <TIMConversationApplyProtocol>
{
    TIMMulticastDelegate *_multicastDelegate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TIMMulticastDelegate *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
- (void).cxx_destruct;
- (void)processPushedApplyContentDic:(id)arg1 type:(int)arg2;
- (void)clearConversationAuditUnreadCountWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLastApplyAndUnreadCountWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchConversationAppliesWithCursor:(long long)arg1 limit:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchConversationApplyWithUserID:(long long)arg1 shortID:(long long)arg2 type:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkConversationApplyWithApplyID:(long long)arg1 applyStatus:(int)arg2 bizExt:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendNewConversationApplyWithShortID:(long long)arg1 conversationType:(int)arg2 bizExt:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateConversationAuditSwitchWithShortID:(long long)arg1 type:(int)arg2 switchStatus:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchConversationAuditSwitchWithShortID:(long long)arg1 type:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeNotifyObserverWithIdentifier:(id)arg1;
- (id)addNotifyObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

