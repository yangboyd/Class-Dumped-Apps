//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIRenderer;

@interface YTIGuideSigninPromoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *actionText; // @dynamic actionText;
@property(retain, nonatomic) YTIFormattedString *descriptiveText; // @dynamic descriptiveText;
@property(nonatomic) _Bool hasActionText; // @dynamic hasActionText;
@property(nonatomic) _Bool hasDescriptiveText; // @dynamic hasDescriptiveText;
@property(nonatomic) _Bool hasSignInButton; // @dynamic hasSignInButton;
@property(retain, nonatomic) YTIRenderer *signInButton; // @dynamic signInButton;

@end

