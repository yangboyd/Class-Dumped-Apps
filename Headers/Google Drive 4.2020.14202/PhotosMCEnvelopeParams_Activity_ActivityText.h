//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface PhotosMCEnvelopeParams_Activity_ActivityText : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) NSMutableArray *subtitleArray; // @dynamic subtitleArray;
@property(readonly, nonatomic) unsigned long long subtitleArray_Count; // @dynamic subtitleArray_Count;
@property(retain, nonatomic) NSMutableArray *subtitleSegmentsArray; // @dynamic subtitleSegmentsArray;
@property(readonly, nonatomic) unsigned long long subtitleSegmentsArray_Count; // @dynamic subtitleSegmentsArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

