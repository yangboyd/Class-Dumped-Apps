//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIVideoMastheadAdRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *closeAdText; // @dynamic closeAdText;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(nonatomic) _Bool hasCloseAdText; // @dynamic hasCloseAdText;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasShowAdText; // @dynamic hasShowAdText;
@property(retain, nonatomic) YTIFormattedString *showAdText; // @dynamic showAdText;

@end

