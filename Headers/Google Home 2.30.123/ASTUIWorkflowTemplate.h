//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUILearnMoreTaskSettingUi, ASTUIWorkflow, NSMutableArray;

@interface ASTUIWorkflowTemplate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasScheduleLearnMoreSettingUi; // @dynamic hasScheduleLearnMoreSettingUi;
@property(nonatomic) _Bool hasWorkflow; // @dynamic hasWorkflow;
@property(retain, nonatomic) ASTUILearnMoreTaskSettingUi *scheduleLearnMoreSettingUi; // @dynamic scheduleLearnMoreSettingUi;
@property(retain, nonatomic) NSMutableArray *taskCategoriesArray; // @dynamic taskCategoriesArray;
@property(readonly, nonatomic) unsigned long long taskCategoriesArray_Count; // @dynamic taskCategoriesArray_Count;
@property(retain, nonatomic) ASTUIWorkflow *workflow; // @dynamic workflow;

@end

