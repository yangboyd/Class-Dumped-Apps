//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, WHTSafeHtmlProto;

@interface CDRProductDescriptionModule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool expandInline; // @dynamic expandInline;
@property(retain, nonatomic) NSMutableArray *followingRichDescriptionsArray; // @dynamic followingRichDescriptionsArray;
@property(readonly, nonatomic) unsigned long long followingRichDescriptionsArray_Count; // @dynamic followingRichDescriptionsArray_Count;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasExpandInline; // @dynamic hasExpandInline;
@property(nonatomic) _Bool hasHtmlDescription; // @dynamic hasHtmlDescription;
@property(nonatomic) _Bool hasInlineCollapseLabel; // @dynamic hasInlineCollapseLabel;
@property(nonatomic) _Bool hasInlineExpandLabel; // @dynamic hasInlineExpandLabel;
@property(retain, nonatomic) WHTSafeHtmlProto *htmlDescription; // @dynamic htmlDescription;
@property(copy, nonatomic) NSString *inlineCollapseLabel; // @dynamic inlineCollapseLabel;
@property(copy, nonatomic) NSString *inlineExpandLabel; // @dynamic inlineExpandLabel;
@property(retain, nonatomic) NSMutableArray *richDescriptionsArray; // @dynamic richDescriptionsArray;
@property(readonly, nonatomic) unsigned long long richDescriptionsArray_Count; // @dynamic richDescriptionsArray_Count;

@end

