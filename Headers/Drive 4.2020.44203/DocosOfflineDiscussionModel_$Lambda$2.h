//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangRunnable-Protocol.h"

@class NSString;
@protocol ComGoogleCommonCollectMultimap, DocosDiscussionModel_DiscussionModelListener, JavaUtilSet;

@interface DocosOfflineDiscussionModel_$Lambda$2 : NSObject <JavaLangRunnable>
{
    id <DocosDiscussionModel_DiscussionModelListener> val$listener_;
    id <JavaUtilSet> val$discussions_;
    _Bool val$isUnsupportedContentWarningUserApplied_;
    id <ComGoogleCommonCollectMultimap> val$granularChanges_;
    _Bool val$isUserInitiated_;
}

- (void)dealloc;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

