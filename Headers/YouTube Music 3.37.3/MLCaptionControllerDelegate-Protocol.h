//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLFormat3Captions, NSArray, NSError;
@protocol MLCaptionTrack;

@protocol MLCaptionControllerDelegate <NSObject>
- (void)didLoadFormat3Captions:(MLFormat3Captions *)arg1;
- (void)captionControllerDidFailWithError:(NSError *)arg1;
- (void)availableCaptionTracksDidChange:(NSArray *)arg1;
- (void)activeCaptionTrackDidChange:(id <MLCaptionTrack>)arg1;
@end

