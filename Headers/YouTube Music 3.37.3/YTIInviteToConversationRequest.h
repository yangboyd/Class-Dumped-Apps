//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTIInviteToConversationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(retain, nonatomic) NSMutableArray *inviteeObfGaiaIdsArray; // @dynamic inviteeObfGaiaIdsArray;
@property(readonly, nonatomic) unsigned long long inviteeObfGaiaIdsArray_Count; // @dynamic inviteeObfGaiaIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *serializedContactInviteesArray; // @dynamic serializedContactInviteesArray;
@property(readonly, nonatomic) unsigned long long serializedContactInviteesArray_Count; // @dynamic serializedContactInviteesArray_Count;
@property(retain, nonatomic) NSMutableArray *serializedSuggestedContactsArray; // @dynamic serializedSuggestedContactsArray;
@property(readonly, nonatomic) unsigned long long serializedSuggestedContactsArray_Count; // @dynamic serializedSuggestedContactsArray_Count;
@property(retain, nonatomic) NSMutableArray *suggestionObfGaiaIdsArray; // @dynamic suggestionObfGaiaIdsArray;
@property(readonly, nonatomic) unsigned long long suggestionObfGaiaIdsArray_Count; // @dynamic suggestionObfGaiaIdsArray_Count;

@end

