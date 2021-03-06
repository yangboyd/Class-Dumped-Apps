//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CMLComponent, CardCarouselView;
@protocol GBTClient, JBTConversationMessageDraft, LockerCmlLockerFrameComposeActionHandler;

@interface ComposeViewFooter : UIView
{
    CardCarouselView *_carousel;
    id <GBTClient> _client;
    id <JBTConversationMessageDraft> _draft;
    CMLComponent *_lockerFrameView;
    id <LockerCmlLockerFrameComposeActionHandler> _composeActionHandler;
}

- (void).cxx_destruct;
- (id)createLockerAccessFrameForMessage:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateSubviewsAndRecreateLockerCML:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithAttachmentsCarousel:(id)arg1 draft:(id)arg2 client:(id)arg3 composeActionHandler:(id)arg4 frame:(struct CGRect)arg5;

@end

