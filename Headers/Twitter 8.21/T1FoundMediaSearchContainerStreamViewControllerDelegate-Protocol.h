//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1FoundMediaSearchContainerStreamViewController, TFSTwitterFoundMediaGroup, TFSTwitterFoundMediaItem, UITraitCollection, UIView;

@protocol T1FoundMediaSearchContainerStreamViewControllerDelegate <NSObject>

@optional
- (void)foundMediaSearchContainerStreamViewController:(T1FoundMediaSearchContainerStreamViewController *)arg1 traitCollectionDidChange:(UITraitCollection *)arg2;
- (void)foundMediaSearchContainerStreamViewControllerDidCancel:(T1FoundMediaSearchContainerStreamViewController *)arg1;
- (void)foundMediaSearchContainerStreamViewController:(T1FoundMediaSearchContainerStreamViewController *)arg1 didLongPressFoundMediaItem:(TFSTwitterFoundMediaItem *)arg2 sourceView:(UIView *)arg3;
- (void)foundMediaSearchContainerStreamViewController:(T1FoundMediaSearchContainerStreamViewController *)arg1 didSelectFoundMediaItem:(TFSTwitterFoundMediaItem *)arg2;
- (void)foundMediaSearchContainerStreamViewController:(T1FoundMediaSearchContainerStreamViewController *)arg1 didSelectFoundMediaGroup:(TFSTwitterFoundMediaGroup *)arg2;
@end

