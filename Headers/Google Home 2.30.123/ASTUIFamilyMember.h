//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUIFamilyMemberProfile, NSString;

@interface ASTUIFamilyMember : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long gaiaId; // @dynamic gaiaId;
@property(nonatomic) _Bool hasGaiaId; // @dynamic hasGaiaId;
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(nonatomic) _Bool hasRole; // @dynamic hasRole;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) ASTUIFamilyMemberProfile *profile; // @dynamic profile;
@property(nonatomic) int role; // @dynamic role;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

