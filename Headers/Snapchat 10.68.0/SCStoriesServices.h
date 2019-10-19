//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCStoriesThumbnailCoordinating;

@interface SCStoriesServices : NSObject
{
    SCLazy *_storiesSummaryInfoProvider;
    SCLazy *_storiesDataCoordinator;
    SCLazy *_snapSaveCoordinator;
    SCLazy *_snapDeleteCoordinator;
    SCLazy *_storiesMediaCoordinator;
    id <SCStoriesThumbnailCoordinating> _storiesThumbnailCoordinator;
    SCLazy *_storiesPlaybackDataProvider;
    SCLazy *_tempStoriesPlaybackFetcher;
    SCLazy *_storiesPlaybackSummaryInfoProvider;
    SCLazy *_myStoriesDataCoordinator;
    SCLazy *_snapViewerDataCoordinator;
    SCLazy *_snapPostCoordinator;
}

@property(readonly, nonatomic) SCLazy *snapPostCoordinator; // @synthesize snapPostCoordinator=_snapPostCoordinator;
@property(readonly, nonatomic) SCLazy *snapViewerDataCoordinator; // @synthesize snapViewerDataCoordinator=_snapViewerDataCoordinator;
@property(readonly, nonatomic) SCLazy *myStoriesDataCoordinator; // @synthesize myStoriesDataCoordinator=_myStoriesDataCoordinator;
@property(readonly, nonatomic) SCLazy *storiesPlaybackSummaryInfoProvider; // @synthesize storiesPlaybackSummaryInfoProvider=_storiesPlaybackSummaryInfoProvider;
@property(readonly, nonatomic) SCLazy *tempStoriesPlaybackFetcher; // @synthesize tempStoriesPlaybackFetcher=_tempStoriesPlaybackFetcher;
@property(readonly, nonatomic) SCLazy *storiesPlaybackDataProvider; // @synthesize storiesPlaybackDataProvider=_storiesPlaybackDataProvider;
@property(readonly, nonatomic) id <SCStoriesThumbnailCoordinating> storiesThumbnailCoordinator; // @synthesize storiesThumbnailCoordinator=_storiesThumbnailCoordinator;
@property(readonly, nonatomic) SCLazy *storiesMediaCoordinator; // @synthesize storiesMediaCoordinator=_storiesMediaCoordinator;
@property(readonly, nonatomic) SCLazy *snapDeleteCoordinator; // @synthesize snapDeleteCoordinator=_snapDeleteCoordinator;
@property(readonly, nonatomic) SCLazy *snapSaveCoordinator; // @synthesize snapSaveCoordinator=_snapSaveCoordinator;
@property(readonly, nonatomic) SCLazy *storiesDataCoordinator; // @synthesize storiesDataCoordinator=_storiesDataCoordinator;
@property(readonly, nonatomic) SCLazy *storiesSummaryInfoProvider; // @synthesize storiesSummaryInfoProvider=_storiesSummaryInfoProvider;
- (void).cxx_destruct;
- (id)initWithStoriesDataCoordinator:(id)arg1 snapSaveCoordinator:(id)arg2 snapDeleteCoordinator:(id)arg3 storiesSummaryInfoProvider:(id)arg4 storiesMediaCoordinator:(id)arg5 storiesThumbnailCoordinator:(id)arg6 storiesPlaybackDataProvider:(id)arg7 tempStoriesPlaybackFetcher:(id)arg8 storiesPlaybackSummaryInfoProvider:(id)arg9 myStoriesDataCoordinator:(id)arg10 snapViewerDataCoordinator:(id)arg11 snapPostCoordinator:(id)arg12;

@end

