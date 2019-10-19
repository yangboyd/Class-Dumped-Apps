//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotification;

@protocol SBAVSystemControllerDirectToAirPlayObserver <NSObject>
- (void)externalDisplayChanged:(NSNotification *)arg1;
- (void)lockStateChanged:(NSNotification *)arg1;
- (void)likelyExternalDestinationsDidChange:(NSNotification *)arg1;
- (void)currentExternalDestinationDidChange:(NSNotification *)arg1;
- (void)externalAirPlayVideoPlayingDidChange:(NSNotification *)arg1;
- (void)externalAirPlayVideoActiveDidChange:(NSNotification *)arg1;
@end

