//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCADClientEnvironment, NSData, NSMutableArray, NSString;

@interface GCADBrowseRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appIdArray; // @dynamic appIdArray;
@property(readonly, nonatomic) unsigned long long appIdArray_Count; // @dynamic appIdArray_Count;
@property(copy, nonatomic) NSString *assistantSettingsVersionInfo; // @dynamic assistantSettingsVersionInfo;
@property(nonatomic) _Bool audioOnly; // @dynamic audioOnly;
@property(copy, nonatomic) NSData *chipContext; // @dynamic chipContext;
@property(retain, nonatomic) GCADClientEnvironment *environment; // @dynamic environment;
@property(nonatomic) _Bool hasAssistantSettingsVersionInfo; // @dynamic hasAssistantSettingsVersionInfo;
@property(nonatomic) _Bool hasAudioOnly; // @dynamic hasAudioOnly;
@property(nonatomic) _Bool hasChipContext; // @dynamic hasChipContext;
@property(nonatomic) _Bool hasEnvironment; // @dynamic hasEnvironment;
@property(nonatomic) _Bool hasIsNewUser; // @dynamic hasIsNewUser;
@property(nonatomic) _Bool hasLiveCardsOnly; // @dynamic hasLiveCardsOnly;
@property(nonatomic) _Bool hasOpenauthStoredTokenVersionInfo; // @dynamic hasOpenauthStoredTokenVersionInfo;
@property(nonatomic) _Bool hasTargetPage; // @dynamic hasTargetPage;
@property(nonatomic) _Bool hasUseTrendiness; // @dynamic hasUseTrendiness;
@property(nonatomic) _Bool isNewUser; // @dynamic isNewUser;
@property(nonatomic) _Bool liveCardsOnly; // @dynamic liveCardsOnly;
@property(copy, nonatomic) NSString *openauthStoredTokenVersionInfo; // @dynamic openauthStoredTokenVersionInfo;
@property(nonatomic) int targetPage; // @dynamic targetPage;
@property(nonatomic) _Bool useTrendiness; // @dynamic useTrendiness;

@end

