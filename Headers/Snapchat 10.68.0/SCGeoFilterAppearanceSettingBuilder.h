//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SCSponsoredSlug, SOJUUnlockableTrackInfo, SOJUUnlockablesAttachment, SOJUUnlockablesCarouselGroup;

@interface SCGeoFilterAppearanceSettingBuilder : NSObject
{
    _Bool _isSponsored;
    _Bool _isUpdatable;
    _Bool _guaranteedDelivery;
    _Bool _isBelowDrawingLayer;
    _Bool _isAnimated;
    _Bool _isFrameFilter;
    _Bool _isActionmoji;
    _Bool _isBitmoji;
    _Bool _isFriendFilter;
    _Bool _eligibleForNotification;
    long long _autoStacking;
    long long _unlockableContentType;
    NSString *_unlockableCategory;
    NSArray *_unlockableAttributes;
    struct CGPoint _updateLabelPosition;
    SCSponsoredSlug *_sponsoredSlug;
    SOJUUnlockableTrackInfo *_unlockableTrackInfo;
    NSString *_dynamicFilterRefreshHint;
    NSString *_dynamicFilterUpdatingMessage;
    NSDictionary *_filterPrompt;
    NSNumber *_filterScore;
    long long _eligibility;
    SOJUUnlockablesCarouselGroup *_carouselGroup;
    SOJUUnlockablesAttachment *_attachment;
}

+ (id)withGeoFilterAppearanceSetting:(id)arg1;
- (void).cxx_destruct;
- (id)setAttachment:(id)arg1;
- (id)setCarouselGroup:(id)arg1;
- (id)setEligibility:(long long)arg1;
- (id)setFilterScore:(id)arg1;
- (id)setFilterPrompt:(id)arg1;
- (id)setDynamicFilterUpdatingMessage:(id)arg1;
- (id)setDynamicFilterRefreshHint:(id)arg1;
- (id)setUnlockableTrackInfo:(id)arg1;
- (id)setSponsoredSlug:(id)arg1;
- (id)setUpdateLabelPosition:(struct CGPoint)arg1;
- (id)setUnlockableAttributes:(id)arg1;
- (id)setUnlockableCategory:(id)arg1;
- (id)setUnlockableContentType:(long long)arg1;
- (id)setAutoStacking:(long long)arg1;
- (id)setEligibleForNotification:(_Bool)arg1;
- (id)setIsFriendFilter:(_Bool)arg1;
- (id)setIsBitmoji:(_Bool)arg1;
- (id)setIsActionmoji:(_Bool)arg1;
- (id)setIsFrameFilter:(_Bool)arg1;
- (id)setIsAnimated:(_Bool)arg1;
- (id)setIsBelowDrawingLayer:(_Bool)arg1;
- (id)setGuaranteedDelivery:(_Bool)arg1;
- (id)setIsUpdatable:(_Bool)arg1;
- (id)setIsSponsored:(_Bool)arg1;
- (id)build;

@end

