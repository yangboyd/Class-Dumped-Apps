//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoDndState_State, DYNProtoPresence, DYNProtoUserId, DYNProtoUserStatus;

@protocol DYNProtoUserPresenceOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoUserStatus *)getUserStatus;
- (_Bool)hasUserStatus;
- (DYNProtoDndState_State *)getDndState;
- (_Bool)hasDndState;
- (long long)getActiveUntil;
- (_Bool)hasActiveUntil;
- (DYNProtoPresence *)getPresence;
- (_Bool)hasPresence;
- (DYNProtoUserId *)getUserId;
- (_Bool)hasUserId;
@end

