//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GBTExperiment : NSObject
{
    _Bool _overridable;
    _Bool _showInUserFeedback;
    unsigned long long _key;
    NSString *_name;
    unsigned long long _type;
    NSDictionary *_expectedNumbersAndNames;
}

+ (id)stringExperimentWithKey:(unsigned long long)arg1 name:(id)arg2 allowOverride:(_Bool)arg3 showInUserFeedback:(_Bool)arg4;
+ (id)integerExperimentWithKey:(unsigned long long)arg1 name:(id)arg2 expectedValuesAndNames:(id)arg3 allowOverride:(_Bool)arg4 showInUserFeedback:(_Bool)arg5;
+ (id)booleanExperimentWithKey:(unsigned long long)arg1 name:(id)arg2 allowOverride:(_Bool)arg3 showInUserFeedback:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *expectedNumbersAndNames; // @synthesize expectedNumbersAndNames=_expectedNumbersAndNames;
@property(nonatomic) _Bool showInUserFeedback; // @synthesize showInUserFeedback=_showInUserFeedback;
@property(nonatomic) _Bool overridable; // @synthesize overridable=_overridable;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long key; // @synthesize key=_key;
- (id)nameForExpectedNumberValue:(id)arg1;
- (id)expectedValuesAsNumbers;
- (id)initWithKey:(unsigned long long)arg1 name:(id)arg2 type:(unsigned long long)arg3;

@end

