//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4Hulu33CollectionContainerViewController.h"

@class NSLayoutConstraint, UIImageView, UILabel, UIProgressView, _TtC7HuluAPI15ButtonTableView;

@interface _TtC4Hulu21StorageViewController : _TtC4Hulu33CollectionContainerViewController
{
    // Error parsing type: , name: cellIdentifier
    // Error parsing type: , name: toolbarManager
    // Error parsing type: , name: indexPathsToDelete
    // Error parsing type: , name: tableView
    // Error parsing type: , name: topConstraint
    // Error parsing type: , name: storageFullIcon
    // Error parsing type: , name: storageMeterLabel
    // Error parsing type: , name: storageMeterProgressView
    // Error parsing type: , name: watchlistManager
    // Error parsing type: , name: userDataFactory
    // Error parsing type: , name: typedEntityFactory
    // Error parsing type: , name: isVisible
    // Error parsing type: , name: loading
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UIProgressView *storageMeterProgressView; // @synthesize storageMeterProgressView;
@property(nonatomic, retain) UILabel *storageMeterLabel; // @synthesize storageMeterLabel;
@property(nonatomic, retain) UIImageView *storageFullIcon; // @synthesize storageFullIcon;
@property(nonatomic, retain) NSLayoutConstraint *topConstraint; // @synthesize topConstraint;
@property(nonatomic, retain) _TtC7HuluAPI15ButtonTableView *tableView; // @synthesize tableView;

@end

