//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString;

@interface YTIChannelCustomGadgetMessageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasLinkText; // @dynamic hasLinkText;
@property(nonatomic) _Bool hasMessageText; // @dynamic hasMessageText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIFormattedString *linkText; // @dynamic linkText;
@property(retain, nonatomic) YTIFormattedString *messageText; // @dynamic messageText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

