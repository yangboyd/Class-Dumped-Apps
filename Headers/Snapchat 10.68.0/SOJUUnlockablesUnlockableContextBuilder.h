//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SOJUUnlockablesUnlockableContextBuilder : NSObject
{
    NSArray *_triggerContexts;
    NSArray *_friendContexts;
    NSArray *_cameraContexts;
    NSArray *_mediaTypeContexts;
    NSArray *_actionmojiContexts;
    NSArray *_visualContexts;
    NSArray *_lensApplicableContexts;
}

+ (id)withJUUnlockablesUnlockableContext:(id)arg1;
- (void).cxx_destruct;
- (id)setLensApplicableContexts:(id)arg1;
- (id)setVisualContexts:(id)arg1;
- (id)setActionmojiContexts:(id)arg1;
- (id)setMediaTypeContexts:(id)arg1;
- (id)setCameraContexts:(id)arg1;
- (id)setFriendContexts:(id)arg1;
- (id)setTriggerContexts:(id)arg1;
- (id)build;

@end

