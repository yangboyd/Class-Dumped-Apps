//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class NSError, NSMutableData;
@protocol GSKAudioCaptureInterface;

@protocol GSKAudioCaptureDelegate <NSObject>
- (void)capture:(id <GSKAudioCaptureInterface>)arg1 didFailToStartWithError:(NSError *)arg2;
- (void)capture:(id <GSKAudioCaptureInterface>)arg1 didReceiveData:(NSMutableData *)arg2;
- (void)captureDidStop:(id <GSKAudioCaptureInterface>)arg1;
- (void)captureDidStart:(id <GSKAudioCaptureInterface>)arg1;
@end

