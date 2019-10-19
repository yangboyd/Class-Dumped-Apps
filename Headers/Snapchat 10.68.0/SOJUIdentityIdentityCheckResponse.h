//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityIdentityCheckResponse-Protocol.h"

@class NSNumber, NSString, SOJUIdentityTrophyCase, SOJUIdentityUserSegmentsResponse;

@interface SOJUIdentityIdentityCheckResponse : NSObject <SOJUIdentityIdentityCheckResponse>
{
    NSNumber *_isEmailVerified;
    NSString *_emailPendingVerification;
    NSNumber *_requirePhonePasswordConfirmed;
    NSNumber *_redGearDurationMillis;
    NSNumber *_suggestedFriendSyncVersion;
    NSNumber *_suggestedFriendFetchThresholdHours;
    NSNumber *_isAddNearbyEnabled;
    NSNumber *_isHighAccuracyRequiredForNearby;
    SOJUIdentityTrophyCase *_trophyCase;
    NSNumber *_lastCheckedTrophiesTimestamp;
    SOJUIdentityUserSegmentsResponse *_userSegmentsResponse;
    NSNumber *_forceAddressbookFullSync;
    NSNumber *_displayNamePopUpCount;
    NSNumber *_isSnapchatContactPermissionIosV2Enabled;
    NSNumber *_maxSuggestionsInQuickAdd;
    NSNumber *_maxSuggestionsInSearchResult;
    NSNumber *_isUserSearchabilityPromptEnabled;
    NSNumber *_maxSuggestionsInFullPage;
    NSNumber *_wasSnapchatContactPermissionNeverGranted;
    NSNumber *_shouldShowQuickAddUnit;
    NSNumber *_isContactSyncEnabled;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *isContactSyncEnabled; // @synthesize isContactSyncEnabled=_isContactSyncEnabled;
@property(readonly, copy, nonatomic) NSNumber *shouldShowQuickAddUnit; // @synthesize shouldShowQuickAddUnit=_shouldShowQuickAddUnit;
@property(readonly, copy, nonatomic) NSNumber *wasSnapchatContactPermissionNeverGranted; // @synthesize wasSnapchatContactPermissionNeverGranted=_wasSnapchatContactPermissionNeverGranted;
@property(readonly, copy, nonatomic) NSNumber *maxSuggestionsInFullPage; // @synthesize maxSuggestionsInFullPage=_maxSuggestionsInFullPage;
@property(readonly, copy, nonatomic) NSNumber *isUserSearchabilityPromptEnabled; // @synthesize isUserSearchabilityPromptEnabled=_isUserSearchabilityPromptEnabled;
@property(readonly, copy, nonatomic) NSNumber *maxSuggestionsInSearchResult; // @synthesize maxSuggestionsInSearchResult=_maxSuggestionsInSearchResult;
@property(readonly, copy, nonatomic) NSNumber *maxSuggestionsInQuickAdd; // @synthesize maxSuggestionsInQuickAdd=_maxSuggestionsInQuickAdd;
@property(readonly, copy, nonatomic) NSNumber *isSnapchatContactPermissionIosV2Enabled; // @synthesize isSnapchatContactPermissionIosV2Enabled=_isSnapchatContactPermissionIosV2Enabled;
@property(readonly, copy, nonatomic) NSNumber *displayNamePopUpCount; // @synthesize displayNamePopUpCount=_displayNamePopUpCount;
@property(readonly, copy, nonatomic) NSNumber *forceAddressbookFullSync; // @synthesize forceAddressbookFullSync=_forceAddressbookFullSync;
@property(readonly, copy, nonatomic) SOJUIdentityUserSegmentsResponse *userSegmentsResponse; // @synthesize userSegmentsResponse=_userSegmentsResponse;
@property(readonly, copy, nonatomic) NSNumber *lastCheckedTrophiesTimestamp; // @synthesize lastCheckedTrophiesTimestamp=_lastCheckedTrophiesTimestamp;
@property(readonly, copy, nonatomic) SOJUIdentityTrophyCase *trophyCase; // @synthesize trophyCase=_trophyCase;
@property(readonly, copy, nonatomic) NSNumber *isHighAccuracyRequiredForNearby; // @synthesize isHighAccuracyRequiredForNearby=_isHighAccuracyRequiredForNearby;
@property(readonly, copy, nonatomic) NSNumber *isAddNearbyEnabled; // @synthesize isAddNearbyEnabled=_isAddNearbyEnabled;
@property(readonly, copy, nonatomic) NSNumber *suggestedFriendFetchThresholdHours; // @synthesize suggestedFriendFetchThresholdHours=_suggestedFriendFetchThresholdHours;
@property(readonly, copy, nonatomic) NSNumber *suggestedFriendSyncVersion; // @synthesize suggestedFriendSyncVersion=_suggestedFriendSyncVersion;
@property(readonly, copy, nonatomic) NSNumber *redGearDurationMillis; // @synthesize redGearDurationMillis=_redGearDurationMillis;
@property(readonly, copy, nonatomic) NSNumber *requirePhonePasswordConfirmed; // @synthesize requirePhonePasswordConfirmed=_requirePhonePasswordConfirmed;
@property(readonly, copy, nonatomic) NSString *emailPendingVerification; // @synthesize emailPendingVerification=_emailPendingVerification;
@property(readonly, copy, nonatomic) NSNumber *isEmailVerified; // @synthesize isEmailVerified=_isEmailVerified;
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
- (id)initWithIsEmailVerified:(id)arg1 emailPendingVerification:(id)arg2 requirePhonePasswordConfirmed:(id)arg3 redGearDurationMillis:(id)arg4 suggestedFriendSyncVersion:(id)arg5 suggestedFriendFetchThresholdHours:(id)arg6 isAddNearbyEnabled:(id)arg7 isHighAccuracyRequiredForNearby:(id)arg8 trophyCase:(id)arg9 lastCheckedTrophiesTimestamp:(id)arg10 userSegmentsResponse:(id)arg11 forceAddressbookFullSync:(id)arg12 displayNamePopUpCount:(id)arg13 isSnapchatContactPermissionIosV2Enabled:(id)arg14 maxSuggestionsInQuickAdd:(id)arg15 maxSuggestionsInSearchResult:(id)arg16 isUserSearchabilityPromptEnabled:(id)arg17 maxSuggestionsInFullPage:(id)arg18 wasSnapchatContactPermissionNeverGranted:(id)arg19 shouldShowQuickAddUnit:(id)arg20 isContactSyncEnabled:(id)arg21;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isContactSyncEnabledValue;
- (_Bool)shouldShowQuickAddUnitValue;
- (_Bool)wasSnapchatContactPermissionNeverGrantedValue;
- (int)maxSuggestionsInFullPageValue;
- (_Bool)isUserSearchabilityPromptEnabledValue;
- (int)maxSuggestionsInSearchResultValue;
- (int)maxSuggestionsInQuickAddValue;
- (_Bool)isSnapchatContactPermissionIosV2EnabledValue;
- (int)displayNamePopUpCountValue;
- (_Bool)forceAddressbookFullSyncValue;
- (long long)lastCheckedTrophiesTimestampValue;
- (_Bool)isHighAccuracyRequiredForNearbyValue;
- (_Bool)isAddNearbyEnabledValue;
- (int)suggestedFriendFetchThresholdHoursValue;
- (long long)suggestedFriendSyncVersionValue;
- (long long)redGearDurationMillisValue;
- (_Bool)requirePhonePasswordConfirmedValue;
- (_Bool)isEmailVerifiedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

