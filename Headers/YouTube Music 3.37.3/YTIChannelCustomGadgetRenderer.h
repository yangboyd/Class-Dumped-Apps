//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIChannelCustomGadgetRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) _Bool appendAnalytics; // @dynamic appendAnalytics;
@property(nonatomic) _Bool hasAppendAnalytics; // @dynamic hasAppendAnalytics;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasVerticalScroll; // @dynamic hasVerticalScroll;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) _Bool verticalScroll; // @dynamic verticalScroll;
@property(retain, nonatomic) NSMutableArray *whitelistedDomainsArray; // @dynamic whitelistedDomainsArray;
@property(readonly, nonatomic) unsigned long long whitelistedDomainsArray_Count; // @dynamic whitelistedDomainsArray_Count;

@end

