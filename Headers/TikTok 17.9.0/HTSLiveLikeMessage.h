//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveUser, NSString;

@interface HTSLiveLikeMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long color; // @dynamic color;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) long long count; // @dynamic count;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(copy, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) long long total; // @dynamic total;
@property(retain, nonatomic) HTSLiveUser *user; // @dynamic user;

@end

