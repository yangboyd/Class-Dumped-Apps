//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/GSKGlifDotsToDotsTransitionAnimator-Protocol.h>

@class NSString, UIView;
@protocol GSKGlifAnimator, GSKGlifDotsView><GSKGlifDotsLayout;

@interface GSKGlifDotsRestingToListeningAnimator : NSObject <GSKGlifDotsToDotsTransitionAnimator>
{
    _Bool _isAnimating;
    CDUnknownBlockType _completionBlock;
    UIView<GSKGlifDotsView><GSKGlifDotsLayout> *_dotsView;
    id <GSKGlifAnimator> _fromAnimator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GSKGlifAnimator> fromAnimator; // @synthesize fromAnimator=_fromAnimator;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIView<GSKGlifDotsView><GSKGlifDotsLayout> *dotsView; // @synthesize dotsView=_dotsView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)removeAllAnimations;
- (void)beginAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

