//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIFormattedString, YTIMusicPassSubscribeButtonSupportedRenderers;

@interface YTIMusicPassSubscribedInfoRenderer_SubscribedInfoCell : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *descriptionsArray; // @dynamic descriptionsArray;
@property(readonly, nonatomic) unsigned long long descriptionsArray_Count; // @dynamic descriptionsArray_Count;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasPurchaseButton; // @dynamic hasPurchaseButton;
@property(retain, nonatomic) YTIFormattedString *header; // @dynamic header;
@property(retain, nonatomic) YTIMusicPassSubscribeButtonSupportedRenderers *purchaseButton; // @dynamic purchaseButton;

@end

