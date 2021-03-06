//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUIWorkflowTemplateSelector, GPBEnumArray, NSMutableArray, NSString;

@interface ASTUIUserDefinedActionUiSelector : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enableSuggestedTasks; // @dynamic enableSuggestedTasks;
@property(nonatomic) _Bool hasEnableSuggestedTasks; // @dynamic hasEnableSuggestedTasks;
@property(nonatomic) _Bool hasHintAlarmTime; // @dynamic hasHintAlarmTime;
@property(nonatomic) _Bool hasHintLabel; // @dynamic hasHintLabel;
@property(nonatomic) _Bool hasIncludeStructureBased; // @dynamic hasIncludeStructureBased;
@property(nonatomic) _Bool hasIsBellSchedule; // @dynamic hasIsBellSchedule;
@property(nonatomic) _Bool hasIsWebSetting; // @dynamic hasIsWebSetting;
@property(nonatomic) _Bool hasReadFromHomeGraph; // @dynamic hasReadFromHomeGraph;
@property(nonatomic) _Bool hasRequestSmartHomeDevice; // @dynamic hasRequestSmartHomeDevice;
@property(nonatomic) _Bool hasTypeFilter; // @dynamic hasTypeFilter;
@property(nonatomic) _Bool hasWorkflowTemplateSelector; // @dynamic hasWorkflowTemplateSelector;
@property(copy, nonatomic) NSString *hintAlarmTime; // @dynamic hintAlarmTime;
@property(copy, nonatomic) NSString *hintLabel; // @dynamic hintLabel;
@property(nonatomic) _Bool includeStructureBased; // @dynamic includeStructureBased;
@property(nonatomic) _Bool isBellSchedule; // @dynamic isBellSchedule;
@property(nonatomic) _Bool isWebSetting; // @dynamic isWebSetting;
@property(nonatomic) _Bool readFromHomeGraph; // @dynamic readFromHomeGraph;
@property(nonatomic) _Bool requestSmartHomeDevice; // @dynamic requestSmartHomeDevice;
@property(nonatomic) int typeFilter; // @dynamic typeFilter;
@property(retain, nonatomic) GPBEnumArray *typeFiltersArray; // @dynamic typeFiltersArray;
@property(readonly, nonatomic) unsigned long long typeFiltersArray_Count; // @dynamic typeFiltersArray_Count;
@property(retain, nonatomic) NSMutableArray *workflowIdArray; // @dynamic workflowIdArray;
@property(readonly, nonatomic) unsigned long long workflowIdArray_Count; // @dynamic workflowIdArray_Count;
@property(retain, nonatomic) ASTUIWorkflowTemplateSelector *workflowTemplateSelector; // @dynamic workflowTemplateSelector;

@end

