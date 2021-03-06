//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class OrchResultingActionReference_CompleteFlowAction, OrchResultingActionReference_FlowInstructionAction, OrchResultingActionReference_ModifyComponentValuesAction, OrchResultingActionReference_SendRequestAction, OrchResultingActionReference_SetValueAction, OrchResultingActionReference_UpdateVariableAction;

@interface OrchResultingActionReference : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(nonatomic) int actionType; // @dynamic actionType;
@property(retain, nonatomic) OrchResultingActionReference_CompleteFlowAction *completeFlowAction; // @dynamic completeFlowAction;
@property(nonatomic) long long componentId; // @dynamic componentId;
@property(retain, nonatomic) OrchResultingActionReference_FlowInstructionAction *flowInstructionAction; // @dynamic flowInstructionAction;
@property(nonatomic) _Bool hasActionType; // @dynamic hasActionType;
@property(nonatomic) _Bool hasComponentId; // @dynamic hasComponentId;
@property(retain, nonatomic) OrchResultingActionReference_ModifyComponentValuesAction *modifyComponentValuesAction; // @dynamic modifyComponentValuesAction;
@property(retain, nonatomic) OrchResultingActionReference_SendRequestAction *sendRequestAction; // @dynamic sendRequestAction;
@property(retain, nonatomic) OrchResultingActionReference_SetValueAction *setValueAction; // @dynamic setValueAction;
@property(retain, nonatomic) OrchResultingActionReference_UpdateVariableAction *updateVariableAction; // @dynamic updateVariableAction;

@end

