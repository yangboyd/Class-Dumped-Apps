//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTResponder-Protocol.h"
#import "YTStatusViewSectionControllerProtocol-Protocol.h"

@class GIMMe, NSString, YTFeedStatusView;
@protocol YTFeedStatusViewDelegate, YTResponder, YTSectionControllerDelegate;

@interface YTStatusViewSectionController : NSObject <YTStatusViewSectionControllerProtocol, YTResponder>
{
    YTFeedStatusView *_footerStatusView;
    int _state;
    int _statusViewStyle;
    id <YTSectionControllerDelegate> _sectionControllerDelegate;
    id <YTResponder> _parentResponder;
    NSString *_emptyMessage;
    id <YTFeedStatusViewDelegate> _statusViewDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) int statusViewStyle; // @synthesize statusViewStyle=_statusViewStyle;
@property(nonatomic) __weak id <YTFeedStatusViewDelegate> statusViewDelegate; // @synthesize statusViewDelegate=_statusViewDelegate;
@property(copy, nonatomic) NSString *emptyMessage; // @synthesize emptyMessage=_emptyMessage;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate=_sectionControllerDelegate;
- (void).cxx_destruct;
- (_Bool)canLoadMore;
- (_Bool)persistCellSelection;
- (struct CGSize)sizeForFooterWithSize:(struct CGSize)arg1;
- (void)showErrorWithText:(id)arg1 forFooter:(id)arg2 showAccountSwitchButton:(_Bool)arg3;
- (double)statusViewHeight;
- (id)implementationForBehavior:(id)arg1;
- (void)commitStagedChanges;
- (void)updateFooter:(id)arg1;
- (Class)classForFooter;
- (id)cellClassesToRegister;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (Class)cellClassForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)model;
@property(readonly, copy) NSString *description;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;
- (id)initWithParentResponder:(id)arg1 statusViewDelegate:(id)arg2 statusViewStyle:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

