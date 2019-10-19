//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPreviewSnapEditingState;

@interface SCPreviewSnapEditingStates : NSObject
{
    unsigned long long _objectTrackingCount;
    SCPreviewSnapEditingState *_beginState;
    SCPreviewSnapEditingState *_endState;
}

@property(readonly, nonatomic) SCPreviewSnapEditingState *endState; // @synthesize endState=_endState;
@property(readonly, nonatomic) SCPreviewSnapEditingState *beginState; // @synthesize beginState=_beginState;
- (void).cxx_destruct;
- (void)setObjectTrackingEdited;
- (void)setEditingWithStage:(long long)arg1 swipeFilterView:(id)arg2 filterDataProvider:(id)arg3 captionState:(id)arg4 croppingState:(id)arg5 stickersState:(id)arg6 drawingUpdateVersion:(unsigned long long)arg7 audioEnabled:(_Bool)arg8 imageDurationInSecs:(unsigned long long)arg9 snapCraftStyleId:(id)arg10 snapAttachmentUrl:(id)arg11 infiniteDurationState:(_Bool)arg12 audioFilterStyleId:(id)arg13 bounceOffset:(id)arg14 lensId:(id)arg15 magicMomentFrameTime:(id)arg16;
- (_Bool)isSnapEdited;

@end

