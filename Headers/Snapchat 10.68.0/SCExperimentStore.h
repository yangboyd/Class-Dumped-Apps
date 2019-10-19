//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCExperimentStoring-Protocol.h"

@class NSString;

@interface SCExperimentStore : NSObject <SCExperimentStoring>
{
}

+ (id)shared;
- (id)experimentIdForStudy:(id)arg1;
- (void)logStudyTriggeredEvent:(id)arg1 experimentId:(id)arg2 source:(long long)arg3;
- (double)doubleForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(double)arg3;
- (float)floatForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(float)arg3;
- (unsigned long long)uIntegerForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(unsigned long long)arg3;
- (long long)integerForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(long long)arg3;
- (_Bool)boolForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(_Bool)arg3;
- (id)stringForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(id)arg3;
- (id)getAllSettingsForStudy:(id)arg1;
- (id)getStudySettings;
- (id)getStudySettingsJsonWithPrettyPrinted:(_Bool)arg1;
- (id)_getStudySettingsFromDictionary:(id)arg1;
- (void)_trackChangedStudiesInSync:(id)arg1 syncOrigin:(id)arg2;
- (void)setStudySettingsFromJsonDictionary:(id)arg1 syncOrigin:(id)arg2;
- (void)setStudySettingsFromDictionary:(id)arg1 syncOrigin:(id)arg2;
- (void)clear;
- (_Bool)saveState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

