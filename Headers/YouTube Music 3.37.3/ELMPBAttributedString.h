//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ELMPBAttributedString : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int alignment; // @dynamic alignment;
@property(nonatomic) _Bool androidIncludeFontPadding; // @dynamic androidIncludeFontPadding;
@property(retain, nonatomic) NSMutableArray *attachmentRunsArray; // @dynamic attachmentRunsArray;
@property(readonly, nonatomic) unsigned long long attachmentRunsArray_Count; // @dynamic attachmentRunsArray_Count;
@property(retain, nonatomic) NSMutableArray *commandRunsArray; // @dynamic commandRunsArray;
@property(readonly, nonatomic) unsigned long long commandRunsArray_Count; // @dynamic commandRunsArray_Count;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) _Bool hasAlignment; // @dynamic hasAlignment;
@property(nonatomic) _Bool hasAndroidIncludeFontPadding; // @dynamic hasAndroidIncludeFontPadding;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasLineBreakMode; // @dynamic hasLineBreakMode;
@property(nonatomic) _Bool hasLineSpacing; // @dynamic hasLineSpacing;
@property(nonatomic) int lineBreakMode; // @dynamic lineBreakMode;
@property(nonatomic) float lineSpacing; // @dynamic lineSpacing;
@property(retain, nonatomic) NSMutableArray *styleRunsArray; // @dynamic styleRunsArray;
@property(readonly, nonatomic) unsigned long long styleRunsArray_Count; // @dynamic styleRunsArray_Count;

@end

