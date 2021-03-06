//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTCCLClientOp-Protocol.h"

@class ASTAndGateExecutor, ASTContext, NSArray, NSString;
@protocol ASTCCLClientOpExecutor, ASTCCLProcessor;

@interface ASTCCLMicUpdateClientOp : NSObject <ASTCCLClientOp>
{
    id <ASTCCLProcessor> _cclProcessor;
    id <ASTCCLClientOpExecutor> _executor;
    ASTContext *_context;
    ASTAndGateExecutor *_cclDelayReopenMicExecutor;
    CDUnknownBlockType _statusCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType statusCallback; // @synthesize statusCallback=_statusCallback;
@property(nonatomic) __weak ASTAndGateExecutor *cclDelayReopenMicExecutor; // @synthesize cclDelayReopenMicExecutor=_cclDelayReopenMicExecutor;
@property(retain, nonatomic) ASTContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <ASTCCLClientOpExecutor> executor; // @synthesize executor=_executor;
@property(nonatomic) __weak id <ASTCCLProcessor> cclProcessor; // @synthesize cclProcessor=_cclProcessor;
- (void)openMicrophone;
- (void)performClientOperation:(id)arg1 interactionID:(int)arg2 deviceSpecificRendering:(id)arg3 statusCallback:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSArray *supportedClientOps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

