//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBMessage, YTIAccessibilitySupportedDatas, YTIFormattedString, YTIIcon;

@interface YTMFilledButtonData : NSObject
{
    YTIFormattedString *_text;
    YTIIcon *_icon;
    YTIAccessibilitySupportedDatas *_accessibilityData;
    GPBMessage *_renderer;
}

@property(retain, nonatomic) GPBMessage *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityData; // @synthesize accessibilityData=_accessibilityData;
@property(retain, nonatomic) YTIIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) YTIFormattedString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

