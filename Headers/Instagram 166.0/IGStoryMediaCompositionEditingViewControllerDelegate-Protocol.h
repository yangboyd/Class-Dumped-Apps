//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryMediaCompositionEditingViewController, UIView;

@protocol IGStoryMediaCompositionEditingViewControllerDelegate <NSObject>
- (void)mediaCompositionEditingViewControllerDidFinishEditingTextView:(IGStoryMediaCompositionEditingViewController *)arg1;
- (void)mediaCompositionEditingViewControllerDidBeginEditingTextView:(IGStoryMediaCompositionEditingViewController *)arg1;
- (void)mediaCompositionEditingViewController:(IGStoryMediaCompositionEditingViewController *)arg1 didFinishPositioningSticker:(UIView *)arg2;
- (void)mediaCompositionEditingViewController:(IGStoryMediaCompositionEditingViewController *)arg1 willBeginPositioningSticker:(UIView *)arg2;
@end

