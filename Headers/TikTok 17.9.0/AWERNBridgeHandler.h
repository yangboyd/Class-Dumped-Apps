//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWERNBridgeHandler-Protocol.h"

@class NSString;

@interface AWERNBridgeHandler : NSObject <AWERNBridgeHandler>
{
    NSString *_funcName;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
- (void)handle:(id)arg1 params:(id)arg2 complection:(CDUnknownBlockType)arg3;
- (_Bool)canHandle:(id)arg1;
- (id)initWithFuncName:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

