//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIEditConnectionStateEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(copy, nonatomic) NSString *contactId; // @dynamic contactId;
@property(nonatomic) _Bool hasContactId; // @dynamic hasContactId;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end

