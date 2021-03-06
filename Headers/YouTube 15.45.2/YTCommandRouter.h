//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface YTCommandRouter : NSObject
{
    NSMapTable *_commandHandlerCreationBlockMapping;
    NSMapTable *_commandHandlerMapping;
    _Bool _strictHandling;
}

- (void).cxx_destruct;
- (id)createHandlerForCommand:(id)arg1;
- (id)handlerForCommand:(id)arg1;
- (void)tearDown;
- (_Bool)handleCommand:(id)arg1;
- (_Bool)handleCommand:(id)arg1 entry:(id)arg2 sender:(id)arg3;
- (_Bool)handleCommand:(id)arg1 entry:(id)arg2 fromView:(id)arg3 sender:(id)arg4;
- (_Bool)handleCommand:(id)arg1 entry:(id)arg2 fromView:(id)arg3 sender:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setStrictHandling:(_Bool)arg1;
- (void)setCommandHandler:(id)arg1 forMatchingBlock:(CDUnknownBlockType)arg2;
- (void)setCommandCreationBlock:(CDUnknownBlockType)arg1 forMatchingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

