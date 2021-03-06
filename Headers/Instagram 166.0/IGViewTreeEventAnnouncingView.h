//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface IGViewTreeEventAnnouncingView : UIView
{
    CDUnknownBlockType _onDidAddSubview;
    CDUnknownBlockType _onWillRemoveSubview;
    CDUnknownBlockType _onWillMoveToSuperview;
    CDUnknownBlockType _onDidMoveToSuperview;
    CDUnknownBlockType _onWillMoveToWindow;
    CDUnknownBlockType _onDidMoveToWindow;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onDidMoveToWindow; // @synthesize onDidMoveToWindow=_onDidMoveToWindow;
@property(copy, nonatomic) CDUnknownBlockType onWillMoveToWindow; // @synthesize onWillMoveToWindow=_onWillMoveToWindow;
@property(copy, nonatomic) CDUnknownBlockType onDidMoveToSuperview; // @synthesize onDidMoveToSuperview=_onDidMoveToSuperview;
@property(copy, nonatomic) CDUnknownBlockType onWillMoveToSuperview; // @synthesize onWillMoveToSuperview=_onWillMoveToSuperview;
@property(copy, nonatomic) CDUnknownBlockType onWillRemoveSubview; // @synthesize onWillRemoveSubview=_onWillRemoveSubview;
@property(copy, nonatomic) CDUnknownBlockType onDidAddSubview; // @synthesize onDidAddSubview=_onDidAddSubview;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;

@end

