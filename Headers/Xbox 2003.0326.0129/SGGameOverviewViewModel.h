//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGOverviewViewModel.h"

#import "SGDDetailDataModelDelegate-Protocol.h"
#import "_TtP10SmartGlass26SGProductOwnershipDelegate_-Protocol.h"
#import "_TtP10SmartGlass33SGProductOwnershipInstallDelegate_-Protocol.h"

@class NSArray, NSDictionary, NSString, SGCircleStatesButtonDataContext, XBXFilterOption, XBXGame;

@interface SGGameOverviewViewModel : SGOverviewViewModel <_TtP10SmartGlass26SGProductOwnershipDelegate_, _TtP10SmartGlass33SGProductOwnershipInstallDelegate_, SGDDetailDataModelDelegate>
{
    int _currentFilterType;
    NSString *_developer;
    NSString *_publisher;
    NSString *_genre;
    NSString *_releaseDate;
    NSString *_ratingId;
    NSString *_ratingImageUrl;
    NSString *_ratingSystem;
    NSArray *_ratingDescriptors;
    NSArray *_ratingDisclaimers;
    NSString *_multiplayer;
    NSString *_coop;
    NSString *_goldWarning;
    NSArray *_filterOptions;
    XBXFilterOption *_selectedFilterOption;
    NSArray *_orderedMinimumRequirementsKeys;
    NSDictionary *_minimumRequirementsDictionary;
    NSArray *_orderedRecommendedRequirementsKeys;
    NSDictionary *_recommendedRequirementsDictionary;
    NSString *_backgroundImageUrl;
    NSString *_imageUrl;
    NSArray *_mergedAchievements;
    SGCircleStatesButtonDataContext *_helpButtonDataContext;
    SGCircleStatesButtonDataContext *_gameHubButtonDataContext;
}

@property(retain, nonatomic) SGCircleStatesButtonDataContext *gameHubButtonDataContext; // @synthesize gameHubButtonDataContext=_gameHubButtonDataContext;
@property(retain, nonatomic) SGCircleStatesButtonDataContext *helpButtonDataContext; // @synthesize helpButtonDataContext=_helpButtonDataContext;
@property(retain, nonatomic) NSArray *mergedAchievements; // @synthesize mergedAchievements=_mergedAchievements;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *backgroundImageUrl; // @synthesize backgroundImageUrl=_backgroundImageUrl;
@property(retain, nonatomic) NSDictionary *recommendedRequirementsDictionary; // @synthesize recommendedRequirementsDictionary=_recommendedRequirementsDictionary;
@property(retain, nonatomic) NSArray *orderedRecommendedRequirementsKeys; // @synthesize orderedRecommendedRequirementsKeys=_orderedRecommendedRequirementsKeys;
@property(retain, nonatomic) NSDictionary *minimumRequirementsDictionary; // @synthesize minimumRequirementsDictionary=_minimumRequirementsDictionary;
@property(retain, nonatomic) NSArray *orderedMinimumRequirementsKeys; // @synthesize orderedMinimumRequirementsKeys=_orderedMinimumRequirementsKeys;
@property(nonatomic) int currentFilterType; // @synthesize currentFilterType=_currentFilterType;
@property(retain, nonatomic) XBXFilterOption *selectedFilterOption; // @synthesize selectedFilterOption=_selectedFilterOption;
@property(retain, nonatomic) NSArray *filterOptions; // @synthesize filterOptions=_filterOptions;
@property(retain, nonatomic) NSString *goldWarning; // @synthesize goldWarning=_goldWarning;
@property(retain, nonatomic) NSString *coop; // @synthesize coop=_coop;
@property(retain, nonatomic) NSString *multiplayer; // @synthesize multiplayer=_multiplayer;
@property(retain, nonatomic) NSArray *ratingDisclaimers; // @synthesize ratingDisclaimers=_ratingDisclaimers;
@property(retain, nonatomic) NSArray *ratingDescriptors; // @synthesize ratingDescriptors=_ratingDescriptors;
@property(retain, nonatomic) NSString *ratingSystem; // @synthesize ratingSystem=_ratingSystem;
@property(retain, nonatomic) NSString *ratingImageUrl; // @synthesize ratingImageUrl=_ratingImageUrl;
@property(retain, nonatomic) NSString *ratingId; // @synthesize ratingId=_ratingId;
@property(retain, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(retain, nonatomic) NSString *developer; // @synthesize developer=_developer;
- (void).cxx_destruct;
- (void)onWebBlendPurchaseSuccess:(id)arg1;
- (void)onFilterOptionSelected:(id)arg1;
- (void)updateGoldWarningMessage:(id)arg1;
- (void)processCapabilities:(id)arg1;
- (_Bool)isOnlineCoop:(id)arg1;
- (_Bool)isOnlineMultiplayer:(id)arg1;
- (void)installPressed;
- (void)buyPressed;
- (void)gameHubPressed;
- (void)helpPressed;
- (void)onDetailDataAvailable:(id)arg1;
- (id)currentUser;
- (void)setupDataContext;
- (void)onDestroy;
- (void)refresh;
- (void)onDeactivate;
- (void)onActivate;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *descriptionString; // @dynamic descriptionString;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) XBXGame *mediaItem; // @dynamic mediaItem;
@property(readonly) Class superclass;

@end

