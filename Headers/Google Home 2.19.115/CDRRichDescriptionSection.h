//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSString;

@interface CDRRichDescriptionSection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) GPBEnumArray *formatsArray; // @dynamic formatsArray;
@property(readonly, nonatomic) unsigned long long formatsArray_Count; // @dynamic formatsArray_Count;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;

@end

