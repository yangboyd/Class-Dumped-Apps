//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface OGLPopoverPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    _Bool _verticallyCentered;
}

@property(nonatomic, getter=isVerticallyCentered) _Bool verticallyCentered; // @synthesize verticallyCentered=_verticallyCentered;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initForPresenting:(_Bool)arg1 verticallyCentered:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

