//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSArray, NSURL;
@protocol SPTCollectionLogger, SPTCollectionPlatform, SPTCollectionPlatformTestManager;

@interface SPTCollectionPlatformAddAllTracksAlbumAction : SPAction
{
    _Bool _allTracksNotInCollection;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTCollectionLogger> _collectionLogger;
    NSURL *_link;
    NSURL *_sourceURL;
    NSURL *_contextURL;
    NSArray *_trackURLs;
}

@property(readonly, nonatomic) _Bool allTracksNotInCollection; // @synthesize allTracksNotInCollection=_allTracksNotInCollection;
@property(readonly, nonatomic) NSArray *trackURLs; // @synthesize trackURLs=_trackURLs;
@property(readonly, copy, nonatomic) NSURL *contextURL; // @synthesize contextURL=_contextURL;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) NSURL *link; // @synthesize link=_link;
@property(readonly, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (void).cxx_destruct;
- (unsigned long long)userIntent;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)style;
- (id)iconColor;
- (long long)icon;
- (id)title;
- (id)initWithLink:(id)arg1 collectionPlatform:(id)arg2 collectionTestManager:(id)arg3 collectionLogger:(id)arg4 logContext:(id)arg5 sourceURL:(id)arg6 contextURL:(id)arg7 trackURLs:(id)arg8 allTracksNotInCollection:(_Bool)arg9;

@end

