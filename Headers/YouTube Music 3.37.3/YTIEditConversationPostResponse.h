//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIConversationItemSupportedRenderers, YTIResponseContext;

@interface YTIEditConversationPostResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) NSMutableArray *commandsArray; // @dynamic commandsArray;
@property(readonly, nonatomic) unsigned long long commandsArray_Count; // @dynamic commandsArray_Count;
@property(retain, nonatomic) YTIConversationItemSupportedRenderers *contents; // @dynamic contents;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

