//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTCellViewControllerProtocol-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, YTFeedStatusView;
@protocol YTActivityIndicatorFactory, YTFeedStatusViewDelegate, YTResponder, YTSectionControllerDelegate;

@interface YTStatusCellViewController : NSObject <YTCellViewControllerProtocol, YTResponder>
{
    YTFeedStatusView *_footerStatusView;
    int _state;
    id <YTActivityIndicatorFactory> _activityIndicatorFactory;
    int _statusViewStyle;
    id <YTSectionControllerDelegate> _sectionControllerDelegate;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTFeedStatusViewDelegate> _statusViewDelegate;
    NSString *_emptyMessage;
}

@property(copy, nonatomic) NSString *emptyMessage; // @synthesize emptyMessage=_emptyMessage;
@property(nonatomic) int statusViewStyle; // @synthesize statusViewStyle=_statusViewStyle;
@property(nonatomic) __weak id <YTFeedStatusViewDelegate> statusViewDelegate; // @synthesize statusViewDelegate=_statusViewDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate=_sectionControllerDelegate;
- (void).cxx_destruct;
- (void)showErrorWithText:(id)arg1 forStatusView:(id)arg2 showAccountSwitchButton:(_Bool)arg3;
- (double)statusViewHeight;
- (id)activityIndicatorFactory;
- (void)viewDidBecomeHidden;
- (void)viewWillBecomeVisible;
- (void)updateView:(id)arg1;
- (CDUnknownBlockType)cellNodeBlock;
- (Class)viewClass;
- (id)cellClassesToRegister;
- (struct CGSize)viewSizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double statusViewPaddingY;
- (void)setState:(int)arg1;
- (int)state;
- (id)initWithParentResponder:(id)arg1;
- (id)initWithParentResponder:(id)arg1 statusViewDelegate:(id)arg2 statusViewStyle:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

