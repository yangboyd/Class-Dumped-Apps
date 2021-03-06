//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/KFActionModel.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface KFCustomActionModel : KFActionModel
{
    CDUnknownBlockType _executionBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id _userData;
}

@property(readonly, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
- (void).cxx_destruct;
- (id)createActionWithInteractivityToolbox:(id)arg1;
- (id)initWithCallbackQueue:(id)arg1 executionBlock:(CDUnknownBlockType)arg2 userData:(id)arg3;

@end

