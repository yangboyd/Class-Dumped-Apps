//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCBoltResolveContentObjectError, SCBoltResolvedContentObject;

@interface SCBoltResolveContentObjectResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltResolveContentObjectError *resolveContentObjectError; // @dynamic resolveContentObjectError;
@property(retain, nonatomic) SCBoltResolvedContentObject *resolvedContentObject; // @dynamic resolvedContentObject;
@property(readonly, nonatomic) int resultOneOfCase; // @dynamic resultOneOfCase;

@end

