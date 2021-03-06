//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SMASHSceneCallbackManagerCallback-Protocol.h"

@class SMASHAnimation, SMASHSceneAnimationMetrics;
@protocol SMASHSceneAnimationCompletionCallback;

@interface SMASHSceneAnimation : NSObject <SMASHSceneCallbackManagerCallback>
{
    SMASHAnimation *_rootAnimation;
    SMASHSceneAnimationMetrics *_metrics;
    id <SMASHSceneAnimationCompletionCallback> _completionCallbackDelegate;
    CDUnknownBlockType _completionBlock;
}

+ (id)sceneAnimationFromSpec:(id)arg1 transitionViewContainer:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id <SMASHSceneAnimationCompletionCallback> completionCallbackDelegate; // @synthesize completionCallbackDelegate=_completionCallbackDelegate;
@property(retain, nonatomic) SMASHSceneAnimationMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) SMASHAnimation *rootAnimation; // @synthesize rootAnimation=_rootAnimation;
- (void).cxx_destruct;
- (void)allRegisteredAnimationsDidStop:(_Bool)arg1;
- (double)duration;
- (void)runAnimationUsingTransitionView:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

