//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ImagePopupViewController, NSURL;

@protocol ImagePopupViewControllerDelegate
- (void)imagePopupViewControllerDidClose:(ImagePopupViewController *)arg1;
- (void)imagePopupViewControllerDidCancel:(ImagePopupViewController *)arg1;
- (void)imagePopupViewControllerDidConfirm:(ImagePopupViewController *)arg1;
- (void)imagePopupViewController:(ImagePopupViewController *)arg1 didSelectLinkWithURL:(NSURL *)arg2;
@end

