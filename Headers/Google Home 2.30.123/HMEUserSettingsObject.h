//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCAIUserSettings;

@interface HMEUserSettingsObject : NSObject
{
    GCAIUserSettings *_settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCAIUserSettings *settings; // @synthesize settings=_settings;
- (id)description;
- (id)createUserSettingWithSettingId:(int)arg1 displayId:(id)arg2;
- (id)userSettingWithSettingId:(int)arg1 displayId:(id)arg2;
- (void)enableUserSetting:(_Bool)arg1 withSettingId:(int)arg2 displayId:(id)arg3;
- (_Bool)isUserSettingEnabledWithSettingId:(int)arg1 displayId:(id)arg2;
- (id)initWithMetadata:(id)arg1;

@end

