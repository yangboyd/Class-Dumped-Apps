//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface OrchKey : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(copy, nonatomic) NSString *eesSessionMaterial; // @dynamic eesSessionMaterial;
@property(nonatomic) _Bool hasEesSessionMaterial; // @dynamic hasEesSessionMaterial;
@property(nonatomic) _Bool hasKeyType; // @dynamic hasKeyType;
@property(readonly, nonatomic) int keyContentOneOfCase; // @dynamic keyContentOneOfCase;
@property(nonatomic) int keyType; // @dynamic keyType;
@property(copy, nonatomic) NSString *secureContent; // @dynamic secureContent;

@end

