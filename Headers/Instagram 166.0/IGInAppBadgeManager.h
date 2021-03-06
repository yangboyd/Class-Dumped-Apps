//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol IGInAppBadgeAnnouncer;

@interface IGInAppBadgeManager : NSObject
{
    NSMutableDictionary *_badgeDict;
    id <IGInAppBadgeAnnouncer> _announcer;
}

- (void).cxx_destruct;
- (void)_notifyObserversOfBadgeCountUpdate:(long long)arg1 forBadgeName:(id)arg2;
- (long long)badgeCountForBadgeName:(id)arg1;
- (void)updatePaymentsBadgeForCategory:(id)arg1;
- (void)updateBadgeCount:(long long)arg1 forBadgeName:(id)arg2;
- (id)initPrivateWithAnnouncer:(id)arg1;

@end

