//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLKLayout.h"

@protocol SLKLayoutItem;

@interface GVRTransitionViewLayout : SLKLayout
{
    id <SLKLayoutItem> _backButton;
    id <SLKLayoutItem> _movieView;
    id <SLKLayoutItem> _instructionLabel;
    id <SLKLayoutItem> _footer;
    id <SLKLayoutItem> _footerView;
    id <SLKLayoutItem> _switchViewerButton;
    id <SLKLayoutItem> _dividerLineView;
    id <SLKLayoutItem> _switchViewerLabel;
}

@property(retain, nonatomic) id <SLKLayoutItem> switchViewerLabel; // @synthesize switchViewerLabel=_switchViewerLabel;
@property(retain, nonatomic) id <SLKLayoutItem> dividerLineView; // @synthesize dividerLineView=_dividerLineView;
@property(retain, nonatomic) id <SLKLayoutItem> switchViewerButton; // @synthesize switchViewerButton=_switchViewerButton;
@property(retain, nonatomic) id <SLKLayoutItem> footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) id <SLKLayoutItem> footer; // @synthesize footer=_footer;
@property(retain, nonatomic) id <SLKLayoutItem> instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) id <SLKLayoutItem> movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) id <SLKLayoutItem> backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)sizeOfLayoutWithFrame:(struct CGRect)arg1 updateLayout:(_Bool)arg2;

@end

