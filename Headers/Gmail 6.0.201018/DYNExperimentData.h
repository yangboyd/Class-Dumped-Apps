//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUserDefaults;

@interface DYNExperimentData : NSObject
{
    _Bool _allowCustomValues;
    _Bool _syncAndQuitAfterSetting;
    NSString *_label;
    NSString *_component;
    NSString *_overrideKey;
    NSArray *_values;
    NSArray *_valueLabels;
    id _defaultValue;
    NSUserDefaults *_defaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) _Bool syncAndQuitAfterSetting; // @synthesize syncAndQuitAfterSetting=_syncAndQuitAfterSetting;
@property(readonly, nonatomic) _Bool allowCustomValues; // @synthesize allowCustomValues=_allowCustomValues;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSArray *valueLabels; // @synthesize valueLabels=_valueLabels;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *overrideKey; // @synthesize overrideKey=_overrideKey;
@property(readonly, nonatomic) NSString *component; // @synthesize component=_component;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (id)valueFromText:(id)arg1;
@property(readonly, nonatomic) NSString *currentValueLabel;
@property(readonly, nonatomic) NSString *defaultLabel;
@property(retain, nonatomic) id overrideValue;
- (id)initWithLabel:(id)arg1 component:(id)arg2 overrideKey:(id)arg3 possibleValues:(id)arg4 valueLabels:(id)arg5 defaultValue:(id)arg6;
- (id)initWithLabel:(id)arg1 component:(id)arg2 overrideKey:(id)arg3 values:(id)arg4 valueLabels:(id)arg5 defaultValue:(id)arg6 allowCustomValues:(_Bool)arg7;

@end

