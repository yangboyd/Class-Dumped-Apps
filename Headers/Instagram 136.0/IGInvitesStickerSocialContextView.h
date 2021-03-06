//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBTimer, IGDirectAvatarView, IGInvitesStickerAccessoryLabelView, IGUser, NSArray, NSNumber;

@interface IGInvitesStickerSocialContextView : UIView
{
    IGDirectAvatarView *_facepileView;
    IGInvitesStickerAccessoryLabelView *_socialContextFacepileView;
    IGInvitesStickerAccessoryLabelView *_socialContextCTAView;
    FBTimer *_cycleTimer;
    _Bool _isCyclingSocialContext;
    NSArray *_previewRSVPUsers;
    IGUser *_eventHost;
    NSNumber *_numInvited;
}

@property(retain, nonatomic) NSNumber *numInvited; // @synthesize numInvited=_numInvited;
@property(nonatomic) _Bool isCyclingSocialContext; // @synthesize isCyclingSocialContext=_isCyclingSocialContext;
@property(retain, nonatomic) IGUser *eventHost; // @synthesize eventHost=_eventHost;
@property(retain, nonatomic) NSArray *previewRSVPUsers; // @synthesize previewRSVPUsers=_previewRSVPUsers;
- (void).cxx_destruct;
- (void)_cycleSocialContext;
- (void)_configureSocialContext;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

