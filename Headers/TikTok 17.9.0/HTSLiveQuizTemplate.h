//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface HTSLiveQuizTemplate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool canModify; // @dynamic canModify;
@property(nonatomic) long long duration; // @dynamic duration;
@property(nonatomic) long long id_p; // @dynamic id_p;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(nonatomic) long long status; // @dynamic status;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

