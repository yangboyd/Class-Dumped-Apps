//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString;
@protocol SCComposerFunction;

@interface SCComposerScrollViewDelegate : NSObject <UIScrollViewDelegate>
{
    _Bool _cancelsTouchesOnScroll;
    id <SCComposerFunction> _onScroll;
    id <SCComposerFunction> _onScrollEnd;
    id <SCComposerFunction> _onDragStart;
    id <SCComposerFunction> _onDragEnding;
}

@property(nonatomic) _Bool cancelsTouchesOnScroll; // @synthesize cancelsTouchesOnScroll=_cancelsTouchesOnScroll;
@property(retain, nonatomic) id <SCComposerFunction> onDragEnding; // @synthesize onDragEnding=_onDragEnding;
@property(retain, nonatomic) id <SCComposerFunction> onDragStart; // @synthesize onDragStart=_onDragStart;
@property(retain, nonatomic) id <SCComposerFunction> onScrollEnd; // @synthesize onScrollEnd=_onScrollEnd;
@property(retain, nonatomic) id <SCComposerFunction> onScroll; // @synthesize onScroll=_onScroll;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

