//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIPRAuthDelegationContext, GIPRGetPeopleRequest, GIPRPeopleContext, NSData, NSString, POEMFieldAcl;

@interface GIPRUpdatePersonPhotoRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPRAuthDelegationContext *authDelegationContext; // @dynamic authDelegationContext;
@property(copy, nonatomic) NSString *containerId; // @dynamic containerId;
@property(retain, nonatomic) GIPRPeopleContext *context; // @dynamic context;
@property(retain, nonatomic) POEMFieldAcl *fieldAcl; // @dynamic fieldAcl;
@property(nonatomic) int format; // @dynamic format;
@property(retain, nonatomic) GIPRGetPeopleRequest *getPeopleRequest; // @dynamic getPeopleRequest;
@property(nonatomic) _Bool hasAuthDelegationContext; // @dynamic hasAuthDelegationContext;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasFieldAcl; // @dynamic hasFieldAcl;
@property(nonatomic) _Bool hasGetPeopleRequest; // @dynamic hasGetPeopleRequest;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(nonatomic) _Bool omitPhotoURLFromResponse; // @dynamic omitPhotoURLFromResponse;
@property(copy, nonatomic) NSData *photoBytes; // @dynamic photoBytes;
@property(nonatomic) int type; // @dynamic type;

@end

