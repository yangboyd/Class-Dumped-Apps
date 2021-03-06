//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, PHTApplicationInfo, PHTHeterodyneSyncInfo, PHTPeriodicTaskInfo, PHTPhenotypeApiErrorInfo, PHTPhenotypeInfo;

@interface PHTPhenotypeLogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PHTApplicationInfo *applicationInfo; // @dynamic applicationInfo;
@property(retain, nonatomic) NSMutableArray *bulkApplicationInfoArray; // @dynamic bulkApplicationInfoArray;
@property(readonly, nonatomic) unsigned long long bulkApplicationInfoArray_Count; // @dynamic bulkApplicationInfoArray_Count;
@property(nonatomic) _Bool hasApplicationInfo; // @dynamic hasApplicationInfo;
@property(nonatomic) _Bool hasHeterodyneSyncInfo; // @dynamic hasHeterodyneSyncInfo;
@property(nonatomic) _Bool hasModuleVersion; // @dynamic hasModuleVersion;
@property(nonatomic) _Bool hasPeriodicTaskInfo; // @dynamic hasPeriodicTaskInfo;
@property(nonatomic) _Bool hasPhenotypeApiErrorInfo; // @dynamic hasPhenotypeApiErrorInfo;
@property(nonatomic) _Bool hasPhenotypeInfo; // @dynamic hasPhenotypeInfo;
@property(retain, nonatomic) PHTHeterodyneSyncInfo *heterodyneSyncInfo; // @dynamic heterodyneSyncInfo;
@property(nonatomic) int moduleVersion; // @dynamic moduleVersion;
@property(retain, nonatomic) PHTPeriodicTaskInfo *periodicTaskInfo; // @dynamic periodicTaskInfo;
@property(retain, nonatomic) PHTPhenotypeApiErrorInfo *phenotypeApiErrorInfo; // @dynamic phenotypeApiErrorInfo;
@property(retain, nonatomic) PHTPhenotypeInfo *phenotypeInfo; // @dynamic phenotypeInfo;

@end

