//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPCommerceStoreInfo, IMPContentIdentifiersUpdate, IMPContentIdentifiersUpdateV2, IMPDeeplinks, IMPShowDisplayInfo, IMPUpdateBool, IMPUpdateBusinessProfileRequest, IMPUpdateBytes, IMPUpdateInt, IMPUpdateString, NSString;

@interface IMPInternalUpdateBusinessProfileRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) IMPUpdateBool *canEditHighlights; // @dynamic canEditHighlights;
@property(retain, nonatomic) IMPCommerceStoreInfo *commerceStoreInfo; // @dynamic commerceStoreInfo;
@property(retain, nonatomic) IMPContentIdentifiersUpdate *contentIdentifiersUpdate; // @dynamic contentIdentifiersUpdate;
@property(retain, nonatomic) IMPContentIdentifiersUpdateV2 *contentsUpdate; // @dynamic contentsUpdate;
@property(retain, nonatomic) IMPDeeplinks *deeplinks; // @dynamic deeplinks;
@property(nonatomic) long long expectedVersion; // @dynamic expectedVersion;
@property(nonatomic) _Bool hasCanEditHighlights; // @dynamic hasCanEditHighlights;
@property(nonatomic) _Bool hasCommerceStoreInfo; // @dynamic hasCommerceStoreInfo;
@property(nonatomic) _Bool hasContentIdentifiersUpdate; // @dynamic hasContentIdentifiersUpdate;
@property(nonatomic) _Bool hasContentsUpdate; // @dynamic hasContentsUpdate;
@property(nonatomic) _Bool hasDeeplinks; // @dynamic hasDeeplinks;
@property(nonatomic) _Bool hasInitiallyDisplayedContentIndex; // @dynamic hasInitiallyDisplayedContentIndex;
@property(nonatomic) _Bool hasIsOfficial; // @dynamic hasIsOfficial;
@property(nonatomic) _Bool hasPublisherIconURL; // @dynamic hasPublisherIconURL;
@property(nonatomic) _Bool hasPublisherMetadata; // @dynamic hasPublisherMetadata;
@property(nonatomic) _Bool hasShowDisplayInfo; // @dynamic hasShowDisplayInfo;
@property(nonatomic) _Bool hasSubscriberCount; // @dynamic hasSubscriberCount;
@property(nonatomic) _Bool hasSubscriberShardCount; // @dynamic hasSubscriberShardCount;
@property(nonatomic) _Bool hasUpdateBusinessProfile; // @dynamic hasUpdateBusinessProfile;
@property(nonatomic) _Bool hasVerifiedUserEmoji; // @dynamic hasVerifiedUserEmoji;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) IMPUpdateInt *initiallyDisplayedContentIndex; // @dynamic initiallyDisplayedContentIndex;
@property(retain, nonatomic) IMPUpdateBool *isOfficial; // @dynamic isOfficial;
@property(retain, nonatomic) IMPUpdateString *publisherIconURL; // @dynamic publisherIconURL;
@property(retain, nonatomic) IMPUpdateBytes *publisherMetadata; // @dynamic publisherMetadata;
@property(retain, nonatomic) IMPShowDisplayInfo *showDisplayInfo; // @dynamic showDisplayInfo;
@property(retain, nonatomic) IMPUpdateInt *subscriberCount; // @dynamic subscriberCount;
@property(retain, nonatomic) IMPUpdateInt *subscriberShardCount; // @dynamic subscriberShardCount;
@property(retain, nonatomic) IMPUpdateBusinessProfileRequest *updateBusinessProfile; // @dynamic updateBusinessProfile;
@property(retain, nonatomic) IMPUpdateString *verifiedUserEmoji; // @dynamic verifiedUserEmoji;

@end

