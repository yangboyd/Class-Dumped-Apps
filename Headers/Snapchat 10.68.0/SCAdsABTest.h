//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCAdsBudgetAbStudy, SCAdsClientRankingStudy, SCAdsPredictionStudy, SCAdsWebviewPrefetchStudy;

@interface SCAdsABTest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *abTestUserSegment; // @dynamic abTestUserSegment;
@property(copy, nonatomic) NSString *abTestUserSegment20; // @dynamic abTestUserSegment20;
@property(copy, nonatomic) NSString *adLoadTestExperimentGroup; // @dynamic adLoadTestExperimentGroup;
@property(retain, nonatomic) SCAdsBudgetAbStudy *budgetAbStudy; // @dynamic budgetAbStudy;
@property(retain, nonatomic) SCAdsClientRankingStudy *clientRankingAbStudy; // @dynamic clientRankingAbStudy;
@property(nonatomic) _Bool discoverFeedCarouselAdsEnabled; // @dynamic discoverFeedCarouselAdsEnabled;
@property(nonatomic) int discoverFeedCarouselAdsMinFeedAdPositionIndex; // @dynamic discoverFeedCarouselAdsMinFeedAdPositionIndex;
@property(nonatomic) int discoverFeedCarouselAdsNumOrganicTilesBetweenAds; // @dynamic discoverFeedCarouselAdsNumOrganicTilesBetweenAds;
@property(nonatomic) _Bool hasBudgetAbStudy; // @dynamic hasBudgetAbStudy;
@property(nonatomic) _Bool hasClientRankingAbStudy; // @dynamic hasClientRankingAbStudy;
@property(nonatomic) _Bool hasInstallPrediction; // @dynamic hasInstallPrediction;
@property(nonatomic) _Bool hasSkipPrediction; // @dynamic hasSkipPrediction;
@property(nonatomic) _Bool hasSwipePrediction; // @dynamic hasSwipePrediction;
@property(nonatomic) _Bool hasWebviewPrefetchStudy; // @dynamic hasWebviewPrefetchStudy;
@property(retain, nonatomic) SCAdsPredictionStudy *installPrediction; // @dynamic installPrediction;
@property(retain, nonatomic) SCAdsPredictionStudy *skipPrediction; // @dynamic skipPrediction;
@property(nonatomic) _Bool storyAdsDisabled; // @dynamic storyAdsDisabled;
@property(retain, nonatomic) SCAdsPredictionStudy *swipePrediction; // @dynamic swipePrediction;
@property(retain, nonatomic) SCAdsWebviewPrefetchStudy *webviewPrefetchStudy; // @dynamic webviewPrefetchStudy;

@end

