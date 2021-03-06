//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/BKBloksModelTreeListener-Protocol.h>

@class BKContext;
@protocol BKBloksLayoutController, BKBloksViewHelperDelegate;

@interface BKBloksViewHelper : NSObject <BKBloksModelTreeListener>
{
    BKContext *_bloksContext;
    id <BKBloksLayoutController> _layoutController;
    id <BKBloksViewHelperDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)bloksModelTreeDidChange:(id)arg1;
- (void)_computeAndStoreLayoutIfNeededWithMaxWidth:(double)arg1;
- (void)mountLayoutInView:(id)arg1 withMaxWidth:(double)arg2;
- (struct CGSize)sizeForMaxWidth:(double)arg1;
- (id)initWithObjectSet:(id)arg1 bloksData:(id)arg2 delegate:(id)arg3;

@end

