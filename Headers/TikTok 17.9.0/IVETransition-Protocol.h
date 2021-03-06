//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IVEModelEffect-Protocol.h"

@class NSString;
@protocol IVEClip;

@protocol IVETransition <IVEModelEffect>
- (void)cleanUp;
- (_Bool)isCrossTrans;
- (long long)getTransitionSeqPoint;
- (_Bool)setTransitionName:(NSString *)arg1 transPoint:(long long)arg2 duration:(long long)arg3;
- (_Bool)setTransitionName:(NSString *)arg1 leftClip:(id <IVEClip>)arg2 rightClip:(id <IVEClip>)arg3 duration:(long long)arg4 transitionType:(int)arg5;
- (int)getTransitionType;
- (void)setTransitionType:(int)arg1;
- (NSString *)getTransitionName;
- (void)setTransitionName:(NSString *)arg1;
- (id <IVEClip>)getRightClip;
- (void)setRightClip:(id <IVEClip>)arg1;
- (id <IVEClip>)getLeftClip;
- (void)setLeftClip:(id <IVEClip>)arg1;
- (long long)getDuration;
- (void)setDuration:(long long)arg1;
@end

