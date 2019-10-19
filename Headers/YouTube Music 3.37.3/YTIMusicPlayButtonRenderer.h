//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIAccessibilitySupportedDatas, YTICommand, YTIIcon;

@interface YTIMusicPlayButtonRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityData; // @dynamic accessibilityData;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityPauseData; // @dynamic accessibilityPauseData;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityPlayData; // @dynamic accessibilityPlayData;
@property(nonatomic) unsigned int activeBackgroundColor; // @dynamic activeBackgroundColor;
@property(nonatomic) float activeScaleFactor; // @dynamic activeScaleFactor;
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool hasAccessibilityData; // @dynamic hasAccessibilityData;
@property(nonatomic) _Bool hasAccessibilityPauseData; // @dynamic hasAccessibilityPauseData;
@property(nonatomic) _Bool hasAccessibilityPlayData; // @dynamic hasAccessibilityPlayData;
@property(nonatomic) _Bool hasActiveBackgroundColor; // @dynamic hasActiveBackgroundColor;
@property(nonatomic) _Bool hasActiveScaleFactor; // @dynamic hasActiveScaleFactor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasIconColor; // @dynamic hasIconColor;
@property(nonatomic) _Bool hasIconLoadingColor; // @dynamic hasIconLoadingColor;
@property(nonatomic) _Bool hasLoadingIndicatorColor; // @dynamic hasLoadingIndicatorColor;
@property(nonatomic) _Bool hasPauseIcon; // @dynamic hasPauseIcon;
@property(nonatomic) _Bool hasPlayIcon; // @dynamic hasPlayIcon;
@property(nonatomic) _Bool hasPlayNavigationEndpoint; // @dynamic hasPlayNavigationEndpoint;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) unsigned int iconColor; // @dynamic iconColor;
@property(nonatomic) unsigned int iconLoadingColor; // @dynamic iconLoadingColor;
@property(nonatomic) unsigned int loadingIndicatorColor; // @dynamic loadingIndicatorColor;
@property(retain, nonatomic) YTIIcon *pauseIcon; // @dynamic pauseIcon;
@property(retain, nonatomic) YTIIcon *pausedIcon; // @dynamic pausedIcon;
@property(readonly, nonatomic) int pausedIndicatorOneOfCase; // @dynamic pausedIndicatorOneOfCase;
@property(retain, nonatomic) YTIIcon *playIcon; // @dynamic playIcon;
@property(retain, nonatomic) YTICommand *playNavigationEndpoint; // @dynamic playNavigationEndpoint;
@property(retain, nonatomic) NSMutableArray *playbackIdMatchersArray; // @dynamic playbackIdMatchersArray;
@property(readonly, nonatomic) unsigned long long playbackIdMatchersArray_Count; // @dynamic playbackIdMatchersArray_Count;
@property(retain, nonatomic) YTIIcon *playingIcon; // @dynamic playingIcon;
@property(readonly, nonatomic) int playingIndicatorOneOfCase; // @dynamic playingIndicatorOneOfCase;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) _Bool usePausedEqualizer; // @dynamic usePausedEqualizer;
@property(nonatomic) _Bool usePlayingEqualizer; // @dynamic usePlayingEqualizer;

@end

