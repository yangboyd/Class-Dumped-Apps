//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage, HTSLiveText, NSString;

@interface HTSLiveBannerCollapse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) long long collapseHeight; // @dynamic collapseHeight;
@property(retain, nonatomic) HTSLiveImage *collapseImage; // @dynamic collapseImage;
@property(retain, nonatomic) HTSLiveText *collapseTitle; // @dynamic collapseTitle;
@property(nonatomic) _Bool enable; // @dynamic enable;
@property(nonatomic) _Bool hasCollapseImage; // @dynamic hasCollapseImage;
@property(nonatomic) _Bool hasCollapseTitle; // @dynamic hasCollapseTitle;
@property(copy, nonatomic) NSString *verticalLineColor; // @dynamic verticalLineColor;

@end

