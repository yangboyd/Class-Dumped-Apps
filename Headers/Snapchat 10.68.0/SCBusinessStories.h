//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMyStories.h"

@class NSMutableDictionary, SCScopedAccess, SCUserSession;

@interface SCBusinessStories : SCMyStories
{
    SCUserSession *_userSession;
    SCScopedAccess *_scopedUserSession;
    NSMutableDictionary *_pollersByPostId;
}

- (void).cxx_destruct;
- (void)setStories:(id)arg1;
- (_Bool)removeStory:(id)arg1 didDelete:(_Bool)arg2;
- (void)_storyWasPersisted:(id)arg1 forBusinessId:(id)arg2;
- (void)_updatePollersWithStories:(id)arg1;
- (void)_removePollers;
- (void)_commonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

