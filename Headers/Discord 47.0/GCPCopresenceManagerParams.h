//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCPCopresenceManagerParams : NSObject
{
    _Bool _showBluetoothPowerAlert;
    _Bool _useBestAudioSessionCategory;
    double _messageFetchPeriod;
}

@property(nonatomic, getter=shouldUseBestAudioSessionCategory) _Bool useBestAudioSessionCategory; // @synthesize useBestAudioSessionCategory=_useBestAudioSessionCategory;
@property(nonatomic) double messageFetchPeriod; // @synthesize messageFetchPeriod=_messageFetchPeriod;
@property(nonatomic, getter=shouldShowBluetoothPowerAlert) _Bool showBluetoothPowerAlert; // @synthesize showBluetoothPowerAlert=_showBluetoothPowerAlert;
- (id)init;

@end

