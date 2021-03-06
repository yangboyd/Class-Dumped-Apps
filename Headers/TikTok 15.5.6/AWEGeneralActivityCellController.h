//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFeedCellControllerProtocol-Protocol.h"

@class AWEGeneralActivityView, AWEGeneralSearchModel, NSString, UILabel;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralActivityCellController : UIViewController <AWEModernFeedCellControllerProtocol>
{
    id <AWEModernFeedCellContext> _context;
    AWEGeneralSearchModel *_searchModel;
    AWEGeneralActivityView *_activityView;
    NSString *_keyword;
    UILabel *_titleLabel;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_30;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) AWEGeneralActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

