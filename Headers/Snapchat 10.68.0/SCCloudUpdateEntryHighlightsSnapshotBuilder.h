//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile;

@interface SCCloudUpdateEntryHighlightsSnapshotBuilder : NSObject
{
    id <SCGalleryProfile> _profile;
    NSString *_entryId;
    NSSet *_highlightedSnapIdSet;
    SCCloudSyncTriggerUserContext *_userContext;
}

+ (id)withCloudUpdateEntryHighlightsSnapshot:(id)arg1;
- (void).cxx_destruct;
- (id)setUserContext:(id)arg1;
- (id)setHighlightedSnapIdSet:(id)arg1;
- (id)setEntryId:(id)arg1;
- (id)setProfile:(id)arg1;
- (id)build;

@end

