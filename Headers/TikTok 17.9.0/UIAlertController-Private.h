//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIWindow;

@interface UIAlertController (Private)
+ (id)awe_showAlertWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 cancelButtonTitle:(id)arg4 destructiveButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 tapBlock:(CDUnknownBlockType)arg7;
@property(retain, nonatomic) UIWindow *alertWindow; // @dynamic alertWindow;
- (id)awe_messageLabel;
- (id)awe_titleLabel;
- (id)viewArray:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)awe_show:(_Bool)arg1;
- (void)awe_showFromView:(id)arg1;
- (void)awe_show;
@end

