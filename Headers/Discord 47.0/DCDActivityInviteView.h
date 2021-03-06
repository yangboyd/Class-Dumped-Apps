//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface DCDActivityInviteView : UIView
{
    UIImageView *_backgroundImageView;
    NSString *_messageId;
}

@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)handleTapJoin:(id)arg1;
- (id)processImage:(id)arg1 grayscale:(_Bool)arg2;
- (id)backgroundViewWithInvite:(id)arg1;
- (id)callToAction:(id)arg1;
- (id)avatarRowWithInvite:(id)arg1;
- (id)bottomRowWithInvite:(id)arg1;
- (id)bodyWithInvite:(id)arg1 messageId:(id)arg2;
- (id)headerLabelWithInvite:(id)arg1;
- (void)configure:(id)arg1 messageId:(id)arg2;
- (id)initWithActivityInvite:(id)arg1 messageId:(id)arg2;

@end

