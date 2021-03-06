//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditScrollPickerSelectionBehavior-Protocol.h>

@class NSIndexPath, NSString;

@interface YTEditScrollPickerSelectionBehaviorJelly : NSObject <YTEditScrollPickerSelectionBehavior>
{
    NSIndexPath *_displayedIndexPath;
    struct CGPoint _previousOffset;
    struct CGRect _indicatorFrame;
    _Bool _overrideStretch;
}

- (void).cxx_destruct;
- (void)animateJumpToFrame:(struct CGRect)arg1 stretchingRight:(_Bool)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (void)updateFrame:(struct CGRect)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)updateSelectionRectForState:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

