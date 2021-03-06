//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GALAppFlipFlowController-Protocol.h"

@class GALAppFlipFlowParams, GALLogger, GALURLHandler, NSString;
@protocol GALRPCService, GALUIDelegate;

@interface GALAppFlipFlowController : NSObject <GALAppFlipFlowController>
{
    GALAppFlipFlowParams *_params;
    CDUnknownBlockType _callback;
    id <GALRPCService> _RPCService;
    id <GALUIDelegate> _UIDelegate;
    GALURLHandler *_URLHandler;
    GALLogger *_logger;
}

- (void).cxx_destruct;
- (void)completeWithRecoverableError;
- (void)completeWithError:(id)arg1;
- (void)completeWithLink:(id)arg1;
- (void)completeFlowWithLink:(id)arg1 error:(id)arg2;
- (void)handleCallbackURLErrorString:(id)arg1 callbackURL:(id)arg2;
- (_Bool)handleCallbackUniversalLink:(id)arg1;
- (void)startFlowWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithRPCService:(id)arg1 UIDelegate:(id)arg2 URLHandler:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

