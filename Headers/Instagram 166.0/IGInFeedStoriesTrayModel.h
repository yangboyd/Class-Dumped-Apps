//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGUnitItemInformationProviding-Protocol.h>

@class IGInFeedStoriesEndCard, NSArray, NSNumber, NSString;

@interface IGInFeedStoriesTrayModel : NSObject <IGListDiffable, IGUnitItemInformationProviding>
{
    NSString *_pk;
    _Bool _trayShouldScrollToEndOnDismiss;
    _Bool _isHideable;
    NSString *_title;
    NSString *_filteringTag;
    NSArray *_reelIds;
    NSArray *_reels;
    NSNumber *_positionInFeed;
    NSNumber *_minStoryCount;
    NSString *_trackingToken;
    IGInFeedStoriesEndCard *_endCardModel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IGInFeedStoriesEndCard *endCardModel; // @synthesize endCardModel=_endCardModel;
@property(readonly, copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(readonly, nonatomic) _Bool isHideable; // @synthesize isHideable=_isHideable;
@property(readonly, nonatomic) _Bool trayShouldScrollToEndOnDismiss; // @synthesize trayShouldScrollToEndOnDismiss=_trayShouldScrollToEndOnDismiss;
@property(readonly, copy, nonatomic) NSNumber *minStoryCount; // @synthesize minStoryCount=_minStoryCount;
@property(readonly, copy, nonatomic) NSNumber *positionInFeed; // @synthesize positionInFeed=_positionInFeed;
@property(readonly, copy, nonatomic) NSArray *reels; // @synthesize reels=_reels;
@property(readonly, copy, nonatomic) NSArray *reelIds; // @synthesize reelIds=_reelIds;
@property(readonly, copy, nonatomic) NSString *filteringTag; // @synthesize filteringTag=_filteringTag;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)unitItemType;
- (id)unitItemId;
- (id)initWithPK:(id)arg1 title:(id)arg2 filteringTag:(id)arg3 positionInFeed:(id)arg4 reelIds:(id)arg5 reels:(id)arg6 isHideable:(_Bool)arg7 trackingToken:(id)arg8 endCardModel:(id)arg9 minStoryCount:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

