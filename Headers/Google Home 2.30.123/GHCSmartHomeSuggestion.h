//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCClientRpcInvocation, GHCFilterCriteria, GHCSmartHomeSuggestion_Deeplink, HomeChipActionContentInfo, NSString;

@interface GHCSmartHomeSuggestion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(retain, nonatomic) GHCSmartHomeSuggestion_Deeplink *deeplink; // @dynamic deeplink;
@property(retain, nonatomic) GHCFilterCriteria *filterCriteria; // @dynamic filterCriteria;
@property(nonatomic) _Bool hasFilterCriteria; // @dynamic hasFilterCriteria;
@property(nonatomic) _Bool hasHomeChipActionContentInfo; // @dynamic hasHomeChipActionContentInfo;
@property(retain, nonatomic) HomeChipActionContentInfo *homeChipActionContentInfo; // @dynamic homeChipActionContentInfo;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(retain, nonatomic) GHCClientRpcInvocation *rpcInvocation; // @dynamic rpcInvocation;
@property(copy, nonatomic) NSString *suggestionId; // @dynamic suggestionId;
@property(copy, nonatomic) NSString *suggestionLabel; // @dynamic suggestionLabel;

@end

