//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC19VolumeUIFeatureImpl30VolumeUIPresentationController.h"

#import "SPTAudioSessionControllerObserver-Protocol.h"

@interface _TtC19VolumeUIFeatureImpl30VolumeUIPresentationController (VolumeUIFeatureImpl) <SPTAudioSessionControllerObserver>
- (void)volumeUpdated:(id)arg1;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)wirelessActiveDeviceDidChange;
- (void)wirelessRoutesDidChangeAvailability:(_Bool)arg1;
- (void)audioSessionController:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)devicePickerWillDisappear;
- (void)devicePickerWillAppear;
@end

