//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSDictionary, NSMutableArray, NSString;

@interface PILGetAssistiveFeaturesResponse : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) NSDictionary *pil_synonymsMap;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *lookupSynonymsArray; // @dynamic lookupSynonymsArray;
@property(readonly, nonatomic) unsigned long long lookupSynonymsArray_Count; // @dynamic lookupSynonymsArray_Count;
@property(copy, nonatomic) NSString *responseId; // @dynamic responseId;
@property(retain, nonatomic) NSMutableArray *waldoResponsesArray; // @dynamic waldoResponsesArray;
@property(readonly, nonatomic) unsigned long long waldoResponsesArray_Count; // @dynamic waldoResponsesArray_Count;

@end

