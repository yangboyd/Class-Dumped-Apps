//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentitySuggestedFriendActionResponse-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentitySuggestedFriendActionResponse : NSObject <SOJUIdentitySuggestedFriendActionResponse>
{
    NSArray *_suggestedFriendResults;
    NSString *_message;
    NSNumber *_logged;
    NSArray *_suggestionPlacementToReasonMapping;
    NSArray *_suggestedFriendResultsV2;
    NSArray *_addFriendsFooterOrdering;
    NSArray *_storiesPageOrdering;
    NSArray *_sendToPageOrdering;
    NSArray *_feedPageOrdering;
    NSArray *_searchPageOrdering;
    NSArray *_searchResultPageOrdering;
    NSArray *_fullPageOrdering;
    NSArray *_storiesViewAllPageOrdering;
    NSArray *_friendsHorizontalPageOrdering;
    NSArray *_friendsViewAllPageOrdering;
    NSString *_discoverCarouselStyle;
    NSNumber *_discoverCarouselClientImpression;
    NSNumber *_badgingStartIndex;
    NSNumber *_badgingEndIndex;
    NSString *_badgingType;
    NSArray *_suggestionsWithActiveStoryOrdering;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *suggestionsWithActiveStoryOrdering; // @synthesize suggestionsWithActiveStoryOrdering=_suggestionsWithActiveStoryOrdering;
@property(readonly, copy, nonatomic) NSString *badgingType; // @synthesize badgingType=_badgingType;
@property(readonly, copy, nonatomic) NSNumber *badgingEndIndex; // @synthesize badgingEndIndex=_badgingEndIndex;
@property(readonly, copy, nonatomic) NSNumber *badgingStartIndex; // @synthesize badgingStartIndex=_badgingStartIndex;
@property(readonly, copy, nonatomic) NSNumber *discoverCarouselClientImpression; // @synthesize discoverCarouselClientImpression=_discoverCarouselClientImpression;
@property(readonly, copy, nonatomic) NSString *discoverCarouselStyle; // @synthesize discoverCarouselStyle=_discoverCarouselStyle;
@property(readonly, copy, nonatomic) NSArray *friendsViewAllPageOrdering; // @synthesize friendsViewAllPageOrdering=_friendsViewAllPageOrdering;
@property(readonly, copy, nonatomic) NSArray *friendsHorizontalPageOrdering; // @synthesize friendsHorizontalPageOrdering=_friendsHorizontalPageOrdering;
@property(readonly, copy, nonatomic) NSArray *storiesViewAllPageOrdering; // @synthesize storiesViewAllPageOrdering=_storiesViewAllPageOrdering;
@property(readonly, copy, nonatomic) NSArray *fullPageOrdering; // @synthesize fullPageOrdering=_fullPageOrdering;
@property(readonly, copy, nonatomic) NSArray *searchResultPageOrdering; // @synthesize searchResultPageOrdering=_searchResultPageOrdering;
@property(readonly, copy, nonatomic) NSArray *searchPageOrdering; // @synthesize searchPageOrdering=_searchPageOrdering;
@property(readonly, copy, nonatomic) NSArray *feedPageOrdering; // @synthesize feedPageOrdering=_feedPageOrdering;
@property(readonly, copy, nonatomic) NSArray *sendToPageOrdering; // @synthesize sendToPageOrdering=_sendToPageOrdering;
@property(readonly, copy, nonatomic) NSArray *storiesPageOrdering; // @synthesize storiesPageOrdering=_storiesPageOrdering;
@property(readonly, copy, nonatomic) NSArray *addFriendsFooterOrdering; // @synthesize addFriendsFooterOrdering=_addFriendsFooterOrdering;
@property(readonly, copy, nonatomic) NSArray *suggestedFriendResultsV2; // @synthesize suggestedFriendResultsV2=_suggestedFriendResultsV2;
@property(readonly, copy, nonatomic) NSArray *suggestionPlacementToReasonMapping; // @synthesize suggestionPlacementToReasonMapping=_suggestionPlacementToReasonMapping;
@property(readonly, copy, nonatomic) NSNumber *logged; // @synthesize logged=_logged;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSArray *suggestedFriendResults; // @synthesize suggestedFriendResults=_suggestedFriendResults;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSuggestedFriendResults:(id)arg1 message:(id)arg2 logged:(id)arg3 suggestionPlacementToReasonMapping:(id)arg4 suggestedFriendResultsV2:(id)arg5 addFriendsFooterOrdering:(id)arg6 storiesPageOrdering:(id)arg7 sendToPageOrdering:(id)arg8 feedPageOrdering:(id)arg9 searchPageOrdering:(id)arg10 searchResultPageOrdering:(id)arg11 fullPageOrdering:(id)arg12 storiesViewAllPageOrdering:(id)arg13 friendsHorizontalPageOrdering:(id)arg14 friendsViewAllPageOrdering:(id)arg15 discoverCarouselStyle:(id)arg16 discoverCarouselClientImpression:(id)arg17 badgingStartIndex:(id)arg18 badgingEndIndex:(id)arg19 badgingType:(id)arg20 suggestionsWithActiveStoryOrdering:(id)arg21;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)badgingTypeEnum;
- (int)badgingEndIndexValue;
- (int)badgingStartIndexValue;
- (int)discoverCarouselClientImpressionValue;
- (long long)discoverCarouselStyleEnum;
- (_Bool)loggedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

