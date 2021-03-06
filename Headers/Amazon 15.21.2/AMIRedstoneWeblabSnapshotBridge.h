//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIWeblabTreatmentSnapshot-Protocol.h"
#import "ASKWeblabTreatmentSnapshot-Protocol.h"

@class AMIWeblabTriggerRecorder, NSString;
@protocol AMWMobileWeblabTreatmentSnapshot;

@interface AMIRedstoneWeblabSnapshotBridge : NSObject <AMIWeblabTreatmentSnapshot, ASKWeblabTreatmentSnapshot>
{
    id <AMWMobileWeblabTreatmentSnapshot> _snapshot;
    AMIWeblabTriggerRecorder *_triggerRecorder;
}

@property(retain, nonatomic) AMIWeblabTriggerRecorder *triggerRecorder; // @synthesize triggerRecorder=_triggerRecorder;
@property(retain) id <AMWMobileWeblabTreatmentSnapshot> snapshot; // @synthesize snapshot=_snapshot;
- (void).cxx_destruct;
- (void)triggerWithCallback:(CDUnknownBlockType)arg1;
- (id)getTreatmentWithoutTriggering;
- (void)recordTriggerWithCallback:(CDUnknownBlockType)arg1;
- (id)getTreatmentAndTriggerWithCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *treatment;
@property(readonly, nonatomic) NSString *weblabName;
- (id)initWithTreatmentSnapshot:(id)arg1 triggerRecorder:(id)arg2;
- (id)init;

@end

