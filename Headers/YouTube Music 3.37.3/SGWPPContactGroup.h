//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SGWPPContactGroupId, SGWPPContactGroupName, SGWPPGroupExtendedData, SGWPPGroupType, SGWPPShareState, SGWPPTimestamp;

@interface SGWPPContactGroup : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attributeArray; // @dynamic attributeArray;
@property(readonly, nonatomic) unsigned long long attributeArray_Count; // @dynamic attributeArray_Count;
@property(retain, nonatomic) NSMutableArray *clientDataArray; // @dynamic clientDataArray;
@property(readonly, nonatomic) unsigned long long clientDataArray_Count; // @dynamic clientDataArray_Count;
@property(retain, nonatomic) NSMutableArray *contactArray; // @dynamic contactArray;
@property(readonly, nonatomic) unsigned long long contactArray_Count; // @dynamic contactArray_Count;
@property(retain, nonatomic) SGWPPGroupExtendedData *extendedData; // @dynamic extendedData;
@property(retain, nonatomic) SGWPPGroupType *groupType; // @dynamic groupType;
@property(nonatomic) _Bool hasExtendedData; // @dynamic hasExtendedData;
@property(nonatomic) _Bool hasGroupType; // @dynamic hasGroupType;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMemberCount; // @dynamic hasMemberCount;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasShareState; // @dynamic hasShareState;
@property(nonatomic) _Bool hasUpdated; // @dynamic hasUpdated;
@property(retain, nonatomic) SGWPPContactGroupId *id_p; // @dynamic id_p;
@property(nonatomic) int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) SGWPPContactGroupName *name; // @dynamic name;
@property(retain, nonatomic) SGWPPShareState *shareState; // @dynamic shareState;
@property(retain, nonatomic) SGWPPTimestamp *updated; // @dynamic updated;

@end

