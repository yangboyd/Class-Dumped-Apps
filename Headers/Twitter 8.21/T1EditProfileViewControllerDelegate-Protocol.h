//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNFormViewController, UIImage;

@protocol T1EditProfileViewControllerDelegate <NSObject>

@optional
- (void)editProfileViewController:(TFNFormViewController *)arg1 didUpdateAvatarImage:(UIImage *)arg2;
- (void)editProfileViewControllerWillRemoveHeader:(TFNFormViewController *)arg1;
- (void)editProfileViewControllerWillChangeHeader:(TFNFormViewController *)arg1;
@end

