//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MdxUiAbstractOperation.h"

@interface MdxUiPromiseOperation : MdxUiAbstractOperation
{
    CDUnknownBlockType _promiseExecutionBlock;
}

+ (id)promiseOperationWithBlock:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)promiseOperationWithBlock:(CDUnknownBlockType)arg1 ackBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)main;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

