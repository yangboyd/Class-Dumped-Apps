//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SLOGSocialAffinityExtension_SocialAffinityClientInterface, SLOGSocialAffinityExtension_SocialAffinityMetadata, SLOGSocialAffinityExtension_SocialAffinityScoringInfo;

@interface SLOGSocialAffinityExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SLOGSocialAffinityExtension_SocialAffinityClientInterface *clientInterface; // @dynamic clientInterface;
@property(retain, nonatomic) NSMutableArray *entityArray; // @dynamic entityArray;
@property(readonly, nonatomic) unsigned long long entityArray_Count; // @dynamic entityArray_Count;
@property(nonatomic) long long eventTimestampUsec; // @dynamic eventTimestampUsec;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasClientInterface; // @dynamic hasClientInterface;
@property(nonatomic) _Bool hasEventTimestampUsec; // @dynamic hasEventTimestampUsec;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasScoringInfo; // @dynamic hasScoringInfo;
@property(retain, nonatomic) SLOGSocialAffinityExtension_SocialAffinityMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) SLOGSocialAffinityExtension_SocialAffinityScoringInfo *scoringInfo; // @dynamic scoringInfo;

@end

