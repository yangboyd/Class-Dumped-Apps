//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIDragInteraction, UIDragItem, UITargetedDragPreview;
@protocol UIDragSession;

@protocol TFNDragInteractionAdapterDelegate <NSObject>

@optional
- (void)dragInteraction:(UIDragInteraction *)arg1 didEndLiftWithSession:(id <UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 willBeginLiftWithSession:(id <UIDragSession>)arg2;
- (UITargetedDragPreview *)dragInteraction:(UIDragInteraction *)arg1 previewForLiftingItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3;
- (void)dragInteraction:(UIDragInteraction *)arg1 sessionDidMove:(id <UIDragSession>)arg2;
@end

