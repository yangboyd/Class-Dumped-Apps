//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIRenderer, YTIResponseContext;

@interface YTIGetPhoneVerificationFormResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *contents; // @dynamic contents;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasShouldBypassVerification; // @dynamic hasShouldBypassVerification;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(nonatomic) _Bool shouldBypassVerification; // @dynamic shouldBypassVerification;

@end

