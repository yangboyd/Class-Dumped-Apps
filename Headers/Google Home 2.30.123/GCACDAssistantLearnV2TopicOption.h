//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCACDAssistantLearnV2FilterCriteria, NSMutableArray, NSString;

@interface GCACDAssistantLearnV2TopicOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCACDAssistantLearnV2FilterCriteria *filterCriteria; // @dynamic filterCriteria;
@property(nonatomic) _Bool hasFilterCriteria; // @dynamic hasFilterCriteria;
@property(nonatomic) _Bool hasIconBackgroundColor; // @dynamic hasIconBackgroundColor;
@property(nonatomic) _Bool hasIconURL; // @dynamic hasIconURL;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *iconBackgroundColor; // @dynamic iconBackgroundColor;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(nonatomic) int id_p; // @dynamic id_p;
@property(retain, nonatomic) NSMutableArray *queriesArray; // @dynamic queriesArray;
@property(readonly, nonatomic) unsigned long long queriesArray_Count; // @dynamic queriesArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

