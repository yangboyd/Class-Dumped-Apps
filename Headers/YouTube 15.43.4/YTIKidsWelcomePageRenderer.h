//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString, YTIThumbnailDetails;

@interface YTIKidsWelcomePageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) YTIFormattedString *getStartedButtonText; // @dynamic getStartedButtonText;
@property(retain, nonatomic) YTIFormattedString *getStartedText; // @dynamic getStartedText;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBackgroundImage; // @dynamic hasBackgroundImage;
@property(nonatomic) _Bool hasGetStartedButtonText; // @dynamic hasGetStartedButtonText;
@property(nonatomic) _Bool hasGetStartedText; // @dynamic hasGetStartedText;
@property(nonatomic) _Bool hasKidsButtonText; // @dynamic hasKidsButtonText;
@property(nonatomic) _Bool hasLearnMoreText; // @dynamic hasLearnMoreText;
@property(nonatomic) _Bool hasLearnMoreURL; // @dynamic hasLearnMoreURL;
@property(nonatomic) _Bool hasLogo; // @dynamic hasLogo;
@property(nonatomic) _Bool hasNotNowButtonText; // @dynamic hasNotNowButtonText;
@property(nonatomic) _Bool hasParentButtonText; // @dynamic hasParentButtonText;
@property(nonatomic) _Bool hasSubTitle; // @dynamic hasSubTitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIFormattedString *kidsButtonText; // @dynamic kidsButtonText;
@property(retain, nonatomic) YTIFormattedString *learnMoreText; // @dynamic learnMoreText;
@property(copy, nonatomic) NSString *learnMoreURL; // @dynamic learnMoreURL;
@property(retain, nonatomic) YTIThumbnailDetails *logo; // @dynamic logo;
@property(retain, nonatomic) YTIFormattedString *notNowButtonText; // @dynamic notNowButtonText;
@property(retain, nonatomic) YTIFormattedString *parentButtonText; // @dynamic parentButtonText;
@property(retain, nonatomic) YTIFormattedString *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

