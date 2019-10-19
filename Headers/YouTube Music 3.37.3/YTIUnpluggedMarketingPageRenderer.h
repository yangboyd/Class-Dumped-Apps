//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers;

@interface YTIUnpluggedMarketingPageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *alreadySubscribedButton; // @dynamic alreadySubscribedButton;
@property(retain, nonatomic) NSMutableArray *carouselScreensArray; // @dynamic carouselScreensArray;
@property(readonly, nonatomic) unsigned long long carouselScreensArray_Count; // @dynamic carouselScreensArray_Count;
@property(nonatomic) _Bool hasAlreadySubscribedButton; // @dynamic hasAlreadySubscribedButton;
@property(nonatomic) _Bool hasSignInButton; // @dynamic hasSignInButton;
@property(nonatomic) _Bool hasSignUpButton; // @dynamic hasSignUpButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIButtonSupportedRenderers *signInButton; // @dynamic signInButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *signUpButton; // @dynamic signUpButton;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

