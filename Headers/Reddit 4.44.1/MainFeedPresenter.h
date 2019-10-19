//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPresenter.h"

@class NSDictionary;
@protocol MainFeedPresentable;

@interface MainFeedPresenter : FeedPresenter
{
}

- (void)checkExperimentsValues;
- (id)preferredTrace;
- (id)listingTraceName;
- (unsigned long long)surfaceType;
@property(readonly, nonatomic) NSDictionary *onboardingAnalyticsParams;
- (id)analyticsScreenViewParams;
- (id)analyticsPageType;
- (id)analyticsScreenViewName;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (unsigned long long)feedBannerType;
@property(readonly, nonatomic) _Bool shouldShowLiveStreamingEntryPoint;
@property(readonly, nonatomic) _Bool shouldShowEmptyNUXView;
@property(readonly, nonatomic) _Bool shouldIncludeBestSort;
- (unsigned long long)userDidFinishSelectingFeedSort:(unsigned long long)arg1 feedRange:(unsigned long long)arg2;
- (_Bool)shouldFilterObject:(id)arg1;
- (id)streamingUnitDataProvider;
- (id)createListingNetworkSourceWithURLString:(id)arg1 parameters:(id)arg2;
- (void)configureWithURLString:(id)arg1 feedSort:(unsigned long long)arg2 params:(id)arg3 shouldManualFetch:(_Bool)arg4;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <MainFeedPresentable> presentable; // @dynamic presentable;

@end

