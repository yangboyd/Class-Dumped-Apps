//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIKidsCategorySettings, YTIKidsContentSettings;

@interface YTIKidsAppInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIKidsCategorySettings *categorySettings; // @dynamic categorySettings;
@property(retain, nonatomic) YTIKidsContentSettings *contentSettings; // @dynamic contentSettings;
@property(nonatomic) _Bool hasCategorySettings; // @dynamic hasCategorySettings;
@property(nonatomic) _Bool hasContentSettings; // @dynamic hasContentSettings;
@property(nonatomic) _Bool hasParentCurationMode; // @dynamic hasParentCurationMode;
@property(nonatomic) int parentCurationMode; // @dynamic parentCurationMode;

@end

