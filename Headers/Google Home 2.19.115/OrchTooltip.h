//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, OrchImageWithCaption, OrchInfoMessage;

@interface OrchTooltip : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int answerId; // @dynamic answerId;
@property(nonatomic) _Bool hasAnswerId; // @dynamic hasAnswerId;
@property(nonatomic) _Bool hasHelpCenter; // @dynamic hasHelpCenter;
@property(nonatomic) _Bool hasHideTooltipIcon; // @dynamic hasHideTooltipIcon;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasImagePosition; // @dynamic hasImagePosition;
@property(nonatomic) _Bool hasInfoMessage; // @dynamic hasInfoMessage;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *helpCenter; // @dynamic helpCenter;
@property(nonatomic) _Bool hideTooltipIcon; // @dynamic hideTooltipIcon;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *imageArray; // @dynamic imageArray;
@property(readonly, nonatomic) unsigned long long imageArray_Count; // @dynamic imageArray_Count;
@property(nonatomic) int imagePosition; // @dynamic imagePosition;
@property(retain, nonatomic) OrchInfoMessage *infoMessage; // @dynamic infoMessage;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

