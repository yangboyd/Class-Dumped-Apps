//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIImage, YTImageEditorViewController;

@protocol YTImageEditorControllerDelegate <NSObject>
- (void)imageEditorControllerDidCancel:(YTImageEditorViewController *)arg1;
- (void)imageEditorController:(YTImageEditorViewController *)arg1 didFinishEditingWithImage:(UIImage *)arg2;
@end

