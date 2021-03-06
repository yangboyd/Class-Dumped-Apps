//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FocusContainer, GamepadInteractable, GamepadScrollable, NSMutableArray, NSMutableDictionary, NSTimer;

@interface FocusManager : NSObject
{
    _Bool leftTriggerIncreasing;
    _Bool rightTriggerIncreasing;
    _Bool leftBumperDown;
    _Bool rightBumperDown;
    GamepadScrollable *currentGamepadScrollable;
    CDUnknownBlockType triggerFuture;
    CDUnknownBlockType scrollFuture;
    int lastFocusDirection;
    NSTimer *joystickTimer;
    int currentJoystickMovement;
    _Bool _inTouchMode;
    _Bool _navigationEnabled;
    FocusContainer *_currentFocusContainer;
    FocusContainer *_containerWithFocusedChildren;
    NSMutableDictionary *_focusContainerMap;
    NSMutableArray *_recentFocusContainers;
    GamepadInteractable *_currentFocusGamepadInteractableView;
}

+ (id)shared;
@property(retain, nonatomic) GamepadInteractable *currentFocusGamepadInteractableView; // @synthesize currentFocusGamepadInteractableView=_currentFocusGamepadInteractableView;
@property(nonatomic) _Bool navigationEnabled; // @synthesize navigationEnabled=_navigationEnabled;
@property(nonatomic) _Bool inTouchMode; // @synthesize inTouchMode=_inTouchMode;
@property(retain, nonatomic) NSMutableArray *recentFocusContainers; // @synthesize recentFocusContainers=_recentFocusContainers;
@property(retain, nonatomic) NSMutableDictionary *focusContainerMap; // @synthesize focusContainerMap=_focusContainerMap;
@property(retain, nonatomic) FocusContainer *containerWithFocusedChildren; // @synthesize containerWithFocusedChildren=_containerWithFocusedChildren;
@property(retain, nonatomic) FocusContainer *currentFocusContainer; // @synthesize currentFocusContainer=_currentFocusContainer;
- (void).cxx_destruct;
- (id)getNextScrollViewParent:(id)arg1;
- (id)getScrollViewParent:(id)arg1;
- (void)blurCurrentFocus;
- (void)focusAfterScroll:(int *)arg1;
- (void)navigateToRelated:(id)arg1 direction:(int)arg2;
- (id)getInteractableChildren:(id)arg1;
- (void)navigate:(id)arg1 direction:(int)arg2;
- (void)initAutoFocus:(id)arg1;
- (void)focusInteractable:(id)arg1;
- (_Bool)attemptToScroll:(id)arg1 direction:(int)arg2;
- (void)takeFocus:(id)arg1;
- (void)unregisterFocusContainer:(id)arg1;
- (void)registerFocusContainer:(id)arg1 oldName:(id)arg2;
- (id)getFocusContainerFromChild:(id)arg1;
- (void)handleControllerEvent:(id)arg1 element:(id)arg2;
- (void)joystickTimerTask:(id)arg1;
- (id)init;

@end

