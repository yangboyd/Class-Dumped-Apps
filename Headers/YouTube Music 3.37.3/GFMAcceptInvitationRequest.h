//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiRequestHeader, NSString;

@interface GFMAcceptInvitationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) _Bool forceMasterConsistency; // @dynamic forceMasterConsistency;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasForceMasterConsistency; // @dynamic hasForceMasterConsistency;
@property(nonatomic) _Bool hasInvitationSecret; // @dynamic hasInvitationSecret;
@property(copy, nonatomic) NSString *invitationSecret; // @dynamic invitationSecret;

@end

