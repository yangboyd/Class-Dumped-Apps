//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OGLAccountMenuTransition-Protocol.h"

@class NSString, UIView, UIViewController;

@interface OGLAccountMenuPopoverTransition : NSObject <OGLAccountMenuTransition>
{
    _Bool _shouldAnimateScrimOnPresentation;
    UIViewController *_presentingViewController;
    UIView *_popoverSourceView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAnimateScrimOnPresentation; // @synthesize shouldAnimateScrimOnPresentation=_shouldAnimateScrimOnPresentation;
@property(readonly, nonatomic) __weak UIView *popoverSourceView; // @synthesize popoverSourceView=_popoverSourceView;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (unsigned long long)type;
- (id)initWithPresentingViewController:(id)arg1 popoverSourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

