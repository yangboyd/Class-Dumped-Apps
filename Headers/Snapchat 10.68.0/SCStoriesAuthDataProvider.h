//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"

@class CLLocation, NSString, SCDataCoordinatorListenerAnnouncer, SCGCDBlockTimer, SCLazy, SCQueuePerformer;
@protocol SCLocationProvider;

@interface SCStoriesAuthDataProvider : NSObject <SCDataCoordinating>
{
    SCLazy *_lazySessionRequestManager;
    SCLazy *_lazyOurStoriesDescriptionProvider;
    id <SCLocationProvider> _locationProvider;
    SCLazy *_lazyDocObjectContext;
    CLLocation *_lastLocationFetched;
    SCGCDBlockTimer *_locationFetchTimer;
    SCQueuePerformer *_performer;
    SCDataCoordinatorListenerAnnouncer *_updateAnnouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdateWithDataRequest:(id)arg1;
- (void)_storyAuthResponseDidUpdatedDocWithResponse:(id)arg1;
- (void)_handleStoryAuthResponseWithResponse:(id)arg1;
- (void)_fetchStoriesAuthAtLocation:(id)arg1;
- (void)_updateLocationAndFetchStoriesAuthIfNeededWithNewLocation:(id)arg1 isFirstFetch:(_Bool)arg2;
- (void)_fetchAndUpdateLocationIfNeededWithIsFirstFetch:(_Bool)arg1;
- (void)dealloc;
- (id)initWithLocationProvider:(id)arg1 lazyRequestManager:(id)arg2 lazyOurStoriesDescriptionProvider:(id)arg3 lazyDocObjectContext:(id)arg4;
- (void)handleDataRequest:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

