//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UITableView;

@interface FVRLeaveFeedbackConfusedViewController : FVRBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_buttonItems;
    _Bool _didLayoutSubviews;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIImageView *_fiverrtronImageView;
    UITableView *_buttonsTable;
    NSLayoutConstraint *_buttonsTableHeightConstraint;
}

@property(nonatomic) _Bool didLayoutSubviews; // @synthesize didLayoutSubviews=_didLayoutSubviews;
@property(nonatomic) __weak NSLayoutConstraint *buttonsTableHeightConstraint; // @synthesize buttonsTableHeightConstraint=_buttonsTableHeightConstraint;
@property(nonatomic) __weak UITableView *buttonsTable; // @synthesize buttonsTable=_buttonsTable;
@property(nonatomic) __weak UIImageView *fiverrtronImageView; // @synthesize fiverrtronImageView=_fiverrtronImageView;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)contactUsButtonDidTouchUpInside:(id)arg1;
- (void)faqButtonDidTouchUpInside:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

