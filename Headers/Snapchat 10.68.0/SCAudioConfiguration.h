//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAudioConfiguration : NSObject <NSCopying>
{
    _Bool _shouldEnableProximity;
    _Bool _defaultToSpeaker;
    _Bool _allowRecordWithBluetooth;
    _Bool _allowRecordWithBluetoothA2DP;
    _Bool _mixWithOthers;
    _Bool _shouldDisableRetry;
    _Bool _shouldDeactivate;
    _Bool _shouldActivate;
    long long _category;
    long long _mode;
    NSString *_label;
}

+ (id)defaultAmbientConfiguration;
@property(readonly, nonatomic) _Bool shouldActivate; // @synthesize shouldActivate=_shouldActivate;
@property(readonly, nonatomic) _Bool shouldDeactivate; // @synthesize shouldDeactivate=_shouldDeactivate;
@property(readonly, nonatomic) _Bool shouldDisableRetry; // @synthesize shouldDisableRetry=_shouldDisableRetry;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) _Bool mixWithOthers; // @synthesize mixWithOthers=_mixWithOthers;
@property(readonly, nonatomic) _Bool allowRecordWithBluetoothA2DP; // @synthesize allowRecordWithBluetoothA2DP=_allowRecordWithBluetoothA2DP;
@property(readonly, nonatomic) _Bool allowRecordWithBluetooth; // @synthesize allowRecordWithBluetooth=_allowRecordWithBluetooth;
@property(readonly, nonatomic) _Bool defaultToSpeaker; // @synthesize defaultToSpeaker=_defaultToSpeaker;
@property(readonly, nonatomic) _Bool shouldEnableProximity; // @synthesize shouldEnableProximity=_shouldEnableProximity;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCategory:(long long)arg1 mode:(long long)arg2 shouldEnableProximity:(_Bool)arg3 defaultToSpeaker:(_Bool)arg4 allowRecordWithBluetooth:(_Bool)arg5 allowRecordWithBluetoothA2DP:(_Bool)arg6 mixWithOthers:(_Bool)arg7 label:(id)arg8 shouldDisableRetry:(_Bool)arg9 shouldDeactivate:(_Bool)arg10 shouldActivate:(_Bool)arg11;
- (unsigned long long)optionsForAVAudioSession;
- (id)modeForAVAudioSession;
- (id)categoryForAVAudioSession;

@end

