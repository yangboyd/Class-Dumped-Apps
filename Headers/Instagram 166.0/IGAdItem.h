//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGAdGapRuleEnforceable-Protocol.h>
#import <FBSharedFramework/IGAdPlatformSponsoredItemInfoProviding-Protocol.h>
#import <FBSharedFramework/IGFeedItemContaining-Protocol.h>
#import <FBSharedFramework/IGHasAttachedMedia-Protocol.h>
#import <FBSharedFramework/IGIntentTransitionFocusItem-Protocol.h>
#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGRequestManagementItemType-Protocol.h>
#import <FBSharedFramework/IGSponsoredInfoProviding-Protocol.h>
#import <FBSharedFramework/IGStoryItemType-Protocol.h>
#import <FBSharedFramework/IGUnitItemInformationProviding-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGAdPlatformGapRules, IGCTDAdsInfo, IGClickToMessagingAdsInfo, IGMedia, IGProfileVisitAdsInfo, IGTVAdsMetadata, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface IGAdItem : IGValueObject <IGRequestManagementItemType, IGStoryItemType, IGAdPlatformSponsoredItemInfoProviding, IGHasAttachedMedia, IGAdGapRuleEnforceable, IGFeedItemContaining, IGIntentTransitionFocusItem, IGSponsoredInfoProviding, IGUnitItemInformationProviding, IGListDiffable, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)mediaForPrefetch;
- (id)votersModels;
- (id)viewers;
- (long long)viewerCount;
- (id)video;
- (id)user;
- (double)totalDurationWithExperimentSetProvider:(id)arg1;
- (id)tapModelArray;
- (id)takenAtDate;
- (_Bool)supportsStoryReactions;
- (id)storyLinkUrl;
- (_Bool)shouldLoop;
- (id)photo;
- (id)pendingUploadId;
- (long long)mediaType;
- (id)storyAssetManagerOverlay;
- (id)mediaID;
- (long long)mediaAudience;
- (_Bool)isSponsored;
- (_Bool)isIGInternal;
- (_Bool)isFBOnly;
- (_Bool)isBrandedContent;
- (_Bool)hasShoppingStoryLink;
- (id)felixLinkMediaId;
- (id)expiringAtDate;
- (id)crossPostDenyReason;
- (id)ringBadgeURL;
- (id)customRingSpec;
- (_Bool)containsPrideMedia;
- (_Bool)canSendCustomEmoji;
- (id)arEffectStoryLink;
- (long long)numberOfAdsInAdPod;
- (long long)indexInAdPod;
- (id)adPodId;
- (id)adTrackingToken;
- (id)mediaPk;
- (id)adPlatformInvalidationInfo;
- (id)adPlatformSponsoredItemId;
@property(readonly, nonatomic) long long priorityIndex;
- (id)videosWithSelectType:(long long)arg1;
- (id)secondaryImageURLs;
- (id)photosWithCount:(long long)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)intentTransitionFocusIdentifier;
- (_Bool)hasSubmittedLeadGenFormForSession:(id)arg1;
- (_Bool)isLeadGenAd;
@property(readonly, nonatomic) IGProfileVisitAdsInfo *profileVisitAdsInfo;
@property(readonly, nonatomic) IGCTDAdsInfo *ctdAdsInfo;
@property(readonly, nonatomic) _Bool shouldShowSecondaryCtaOnProfile;
@property(readonly, copy, nonatomic) NSURL *facebookPageURL;
@property(readonly, copy, nonatomic) NSDictionary *directResponseInfoDictionary;
@property(readonly, copy, nonatomic) NSString *timeSinceInteraction;
@property(readonly, nonatomic) long long ctaStyle;
@property(retain, nonatomic) NSArray *possibleHideAnswers;
@property(readonly, nonatomic) IGClickToMessagingAdsInfo *clickToMessagingAdsInfo;
@property(readonly, nonatomic) IGTVAdsMetadata *tvAdsMetadata;
@property(readonly, nonatomic) _Bool forceDisplayFBPageName;
@property(readonly, copy, nonatomic) NSString *politicalAdHeaderInfo;
@property(readonly, copy, nonatomic) NSString *politicalContextText;
@property(readonly, nonatomic) _Bool isAutomaticallyTranslated;
@property(readonly, nonatomic) _Bool showFBPageNameHeadline;
@property(readonly, nonatomic) _Bool displayViewabilityEligible;
@property(readonly, copy, nonatomic) NSArray *cookies;
@property(readonly, copy, nonatomic) NSString *aboutAdsServerParams;
@property(readonly, nonatomic) long long hideFlowVersion;
@property(readonly, copy, nonatomic) NSString *trackingToken;
@property(readonly, nonatomic) _Bool showAdChoicesIcon;
@property(readonly, nonatomic) _Bool isPreviewableVideoAd;
@property(readonly, nonatomic) _Bool isHoldout;
@property(readonly, nonatomic) _Bool isDemoAd;
@property(readonly, nonatomic) _Bool allowDirectShare;
@property(readonly, nonatomic) _Bool hideUsername;
@property(readonly, nonatomic) _Bool showIcon;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSString *adTitle;
@property(readonly, copy, nonatomic) NSString *adId;
- (unsigned long long)unitItemType;
- (id)unitItemId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) IGAdPlatformGapRules *gapRules;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDate *instantiatedAtDate;
@property(readonly, nonatomic) IGMedia *media;
@property(readonly) Class superclass;

@end

