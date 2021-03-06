//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTCCLProcessor-Protocol.h"
#import "ASTExecutionPlanDelegateProtocol-Protocol.h"

@class ASTAPIConversationDelta, ASTConversationParamsHelper, ASTExecutionPlanHelper, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol ASTCCLProcessorDelegate, ASTWhatsNextRunnerInterface;

@interface ASTNativeCCLProcessor : NSObject <ASTExecutionPlanDelegateProtocol, ASTCCLProcessor>
{
    _Bool _hasPendingDeltaSentToServer;
    int _interactionCount;
    id <ASTCCLProcessorDelegate> _delegate;
    id <ASTWhatsNextRunnerInterface> _whatsNextRunner;
    NSMutableDictionary *_clientOps;
    ASTConversationParamsHelper *_paramsHelper;
    ASTAPIConversationDelta *_conversationDelta;
    NSMutableArray *_pendingClientOpIDs;
    ASTExecutionPlanHelper *_executionPlan;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPendingDeltaSentToServer; // @synthesize hasPendingDeltaSentToServer=_hasPendingDeltaSentToServer;
@property(retain, nonatomic) ASTExecutionPlanHelper *executionPlan; // @synthesize executionPlan=_executionPlan;
@property(retain, nonatomic) NSMutableArray *pendingClientOpIDs; // @synthesize pendingClientOpIDs=_pendingClientOpIDs;
@property(nonatomic) int interactionCount; // @synthesize interactionCount=_interactionCount;
@property(retain, nonatomic) ASTAPIConversationDelta *conversationDelta; // @synthesize conversationDelta=_conversationDelta;
@property(retain, nonatomic) ASTConversationParamsHelper *paramsHelper; // @synthesize paramsHelper=_paramsHelper;
@property(retain, nonatomic) NSMutableDictionary *clientOps; // @synthesize clientOps=_clientOps;
@property(nonatomic) __weak id <ASTWhatsNextRunnerInterface> whatsNextRunner; // @synthesize whatsNextRunner=_whatsNextRunner;
@property(nonatomic) __weak id <ASTCCLProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (int)getNextInteractionId;
- (void)sendPendingDeltaIfNeeded;
- (id)clientOperationHandlerForName:(id)arg1;
- (_Bool)handleTTSCancelInputIfNeeded:(id)arg1;
- (_Bool)handleMicInputIfNeeded:(id)arg1 interactionId:(int)arg2;
- (void)clearConversation;
- (void)processInteractionFromUserIntenal:(id)arg1;
- (void)cclProcessor:(id)arg1 didReceiveWhatsNextResult:(id)arg2 conversationDelta:(id)arg3;
- (void)executionPlanFinished;
- (void)dispatchClientOp:(id)arg1;
- (void)clearParams;
- (id)deltaToSend;
- (void)cancelCurrentConversationUserInitialized:(_Bool)arg1;
- (void)registerClientOpHandler:(id)arg1;
@property(readonly, nonatomic) NSSet *supportedClientOpsSet;
- (void)processClientInteraction:(id)arg1 inResponseToInteractionID:(int)arg2;
- (void)processClientInteraction:(id)arg1;
- (void)processConversationDelta:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

