//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCDevSetting-Protocol.h"

@class NSString;

@interface GSCBooleanDevSetting : NSObject <GSCDevSetting>
{
    _Bool _value;
    NSString *_displayName;
    NSString *_settingID;
    unsigned long long _type;
}

@property(readonly, nonatomic) _Bool value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *settingID; // @synthesize settingID=_settingID;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)withValue:(_Bool)arg1;
- (id)initWithSettingID:(id)arg1 displayName:(id)arg2 value:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

