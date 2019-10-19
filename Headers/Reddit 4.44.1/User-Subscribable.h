//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/User.h>

#import "Subscribable-Protocol.h"

@class NSString;

@interface User (Subscribable) <Subscribable>
@property(readonly, nonatomic) long long notificationLevel;
@property(readonly, copy, nonatomic) NSString *editString;
@property(readonly, nonatomic) _Bool allowEdit;
@property(readonly, copy, nonatomic) NSString *unsubscribeErrorString;
@property(readonly, copy, nonatomic) NSString *subscribeErrorString;
@property(readonly, copy, nonatomic) NSString *unsubscribeSuccessString;
@property(readonly, copy, nonatomic) NSString *subscribeSuccessString;
- (id)subscriptionStatusStringForSuccess:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *subscribersString;
@property(readonly, copy, nonatomic) NSString *subscribedString;
@property(readonly, copy, nonatomic) NSString *unsubscribeString;
@property(readonly, copy, nonatomic) NSString *subscribeString;
@property(readonly, nonatomic) _Bool allowSubscribe;
@property(readonly, nonatomic) long long subscribersCount;
@property(readonly, nonatomic) _Bool isPromoter;
@property(readonly, copy, nonatomic) NSString *publicDescriptionText;
@property(readonly, copy, nonatomic) NSString *descriptionText;
- (id)supplementalInfoStringWithStyle:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *nonPrefixedTitle;
@property(readonly, copy, nonatomic) NSString *displayTitle;
@property(readonly, copy, nonatomic) NSString *headerTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *subscriptionPk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isSubscribed;
@property(readonly) Class superclass;
@end

