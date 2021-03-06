//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBLPromise;

@interface FIRInstallationsSingleOperationPromiseCache : NSObject
{
    CDUnknownBlockType _newOperationHandler;
    FBLPromise *_pendingPromise;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBLPromise *pendingPromise; // @synthesize pendingPromise=_pendingPromise;
@property(readonly, nonatomic) CDUnknownBlockType newOperationHandler; // @synthesize newOperationHandler=_newOperationHandler;
- (id)getExistingPendingPromise;
- (id)getExistingPendingOrCreateNewPromise;
- (id)initWithNewOperationHandler:(CDUnknownBlockType)arg1;

@end

