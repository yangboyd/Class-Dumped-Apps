//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC10ProtonMail24ProtonMailViewController.h"

@class UIButton, UILabel, UITableView, UITextField;

@interface _TtC10ProtonMail20SearchViewController : _TtC10ProtonMail24ProtonMailViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: searchTextField
    // Error parsing type: , name: noResultLabel
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: $__lazy_storage_$_replacingEmails
    // Error parsing type: , name: kAnimationDuration
    // Error parsing type: , name: kSearchCellHeight
    // Error parsing type: , name: kCellIdentifier
    // Error parsing type: , name: kSegueToMessageDetailController
    // Error parsing type: , name: $__lazy_storage_$_progressBar
    // Error parsing type: , name: localObjectIndexing
    // Error parsing type: , name: localObjectsIndexingObserver
    // Error parsing type: , name: dbContents
    // Error parsing type: , name: searchResult
    // Error parsing type: , name: currentPage
    // Error parsing type: , name: query
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)willEnterForeground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UILabel *noResultLabel; // @synthesize noResultLabel;
@property(nonatomic) __weak UITextField *searchTextField; // @synthesize searchTextField;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

