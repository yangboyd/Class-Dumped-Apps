//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCADClientEnvironment, NSString;

@interface GCADDetailsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *assistantSettingsVersionInfo; // @dynamic assistantSettingsVersionInfo;
@property(copy, nonatomic) NSString *contentId; // @dynamic contentId;
@property(retain, nonatomic) GCADClientEnvironment *environment; // @dynamic environment;
@property(nonatomic) _Bool hasAssistantSettingsVersionInfo; // @dynamic hasAssistantSettingsVersionInfo;
@property(nonatomic) _Bool hasContentId; // @dynamic hasContentId;
@property(nonatomic) _Bool hasEnvironment; // @dynamic hasEnvironment;
@property(nonatomic) _Bool hasOpenauthStoredTokenVersionInfo; // @dynamic hasOpenauthStoredTokenVersionInfo;
@property(copy, nonatomic) NSString *openauthStoredTokenVersionInfo; // @dynamic openauthStoredTokenVersionInfo;

@end

