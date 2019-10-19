//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCComposerViewOwner-Protocol.h"
#import "SCSizeChangeAnnouncingView-Protocol.h"

@class NSString, SCComposerView;

@interface SCContextV2CTAView : UIView <SCComposerViewOwner, SCSizeChangeAnnouncingView>
{
    CDUnknownBlockType _onSizeChangedBlock;
    SCComposerView *_contentView;
}

@property(retain, nonatomic) SCComposerView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType onSizeChangedBlock; // @synthesize onSizeChangedBlock=_onSizeChangedBlock;
- (void).cxx_destruct;
- (void)didRenderComposerView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)fadeInContentViewIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

