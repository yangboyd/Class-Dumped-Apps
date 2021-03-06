//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCDevSetting-Protocol.h"

@class NSString;

@interface GSCStringDevSetting : NSObject <GSCDevSetting>
{
    NSString *_settingID;
    NSString *_displayName;
    NSString *_value;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *settingID; // @synthesize settingID=_settingID;
- (id)withValue:(id)arg1;
- (id)initWithSettingID:(id)arg1 displayName:(id)arg2 value:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

