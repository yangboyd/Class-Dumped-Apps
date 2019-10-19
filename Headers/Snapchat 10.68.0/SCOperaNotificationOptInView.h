//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;
@protocol SCOperaNotificationOptInViewDelegate;

@interface SCOperaNotificationOptInView : UIImageView
{
    UIImage *_onImage;
    UIImage *_offImage;
    _Bool _canOptInForNotifications;
    _Bool _isOptedInForNotifications;
    id <SCOperaNotificationOptInViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaNotificationOptInViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isOptedInForNotifications; // @synthesize isOptedInForNotifications=_isOptedInForNotifications;
- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (void)updateCanOptInForNotifications:(_Bool)arg1;
- (void)updateIsOptedInForNotifications:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 onImage:(id)arg2 offImage:(id)arg3;

@end

