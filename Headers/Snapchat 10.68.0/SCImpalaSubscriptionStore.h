//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCSubscriptionStore-Protocol.h"

@class NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCCreatorSettingsDataTracker, SCUserSession;

@interface SCImpalaSubscriptionStore : NSObject <SCCSubscriptionStore>
{
    SCUserSession *_userSession;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
}

- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (CDUnknownBlockType)observeWithCallback:(CDUnknownBlockType)arg1;
- (void)updateHiddenWithEntityID:(id)arg1 isHidden:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateNotificationSubscriptionWithEntityID:(id)arg1 isSubscribedToNotifications:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSubscriptionWithEntityID:(id)arg1 isSubscribed:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getSubscriptionWithEntityID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

