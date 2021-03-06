//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface DBPhotosRootViewSelectionNavBarManager : NSObject
{
    UIViewController *_viewControllerWeak;
    _Bool _currentEditingState;
    _Bool _isTransitioning;
    CDUnknownBlockType _beforeTransitionBlock;
    CDUnknownBlockType _animatedTransitionBlock;
    CDUnknownBlockType _afterTransitionBlock;
}

@property(readonly, nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(copy, nonatomic) CDUnknownBlockType afterTransitionBlock; // @synthesize afterTransitionBlock=_afterTransitionBlock;
@property(copy, nonatomic) CDUnknownBlockType animatedTransitionBlock; // @synthesize animatedTransitionBlock=_animatedTransitionBlock;
@property(copy, nonatomic) CDUnknownBlockType beforeTransitionBlock; // @synthesize beforeTransitionBlock=_beforeTransitionBlock;
- (void).cxx_destruct;
- (_Bool)isEditing;
- (void)db_transitionNavBarAndTabBarOutOfEditingState;
- (void)db_transitionNavBarAndTabBarToEditingState;
- (void)transitionToEditingState:(_Bool)arg1;
- (id)initForViewController:(id)arg1;
- (id)init;

@end

