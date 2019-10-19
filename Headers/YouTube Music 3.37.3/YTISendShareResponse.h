//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIResponseContext;

@interface YTISendShareResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) NSMutableArray *commandsArray; // @dynamic commandsArray;
@property(readonly, nonatomic) unsigned long long commandsArray_Count; // @dynamic commandsArray_Count;
@property(retain, nonatomic) NSMutableArray *conversationRenderersArray; // @dynamic conversationRenderersArray;
@property(readonly, nonatomic) unsigned long long conversationRenderersArray_Count; // @dynamic conversationRenderersArray_Count;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasReadReceiptText; // @dynamic hasReadReceiptText;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) NSMutableArray *newConversationItemsArray; // @dynamic newConversationItemsArray;
@property(readonly, nonatomic) unsigned long long newConversationItemsArray_Count; // @dynamic newConversationItemsArray_Count;
@property(retain, nonatomic) YTIFormattedString *readReceiptText; // @dynamic readReceiptText;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

