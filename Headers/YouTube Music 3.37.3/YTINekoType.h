//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTINekoMessageTypeInfo, YTINekoRepeatedTypeInfo;

@interface YTINekoType : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int fieldType; // @dynamic fieldType;
@property(nonatomic) _Bool hasFieldType; // @dynamic hasFieldType;
@property(nonatomic) _Bool hasTypeId; // @dynamic hasTypeId;
@property(readonly, nonatomic) int infoOneOfCase; // @dynamic infoOneOfCase;
@property(retain, nonatomic) YTINekoMessageTypeInfo *messageTypeInfo; // @dynamic messageTypeInfo;
@property(retain, nonatomic) YTINekoRepeatedTypeInfo *repeatedTypeInfo; // @dynamic repeatedTypeInfo;
@property(nonatomic) int typeId; // @dynamic typeId;

@end

