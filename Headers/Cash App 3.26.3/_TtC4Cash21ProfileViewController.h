//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@interface _TtC4Cash21ProfileViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    // Error parsing type: , name: presenter
    // Error parsing type: , name: model
    // Error parsing type: , name: previousModel
    // Error parsing type: , name: rowIdentifierToViewControllerMap
    // Error parsing type: , name: sizingVerticalTitleAndSubtitleCell
    // Error parsing type: , name: sizingVerticalMoneyTitleAndSubtitleCell
    // Error parsing type: , name: sizingMultipleChoiceCell
    // Error parsing type: , name: sizingProgressBarGroupCell
    // Error parsing type: , name: sizingFullTextCell
    // Error parsing type: , name: sizingSwitchCell
    // Error parsing type: , name: sizingImageTitleCell
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;

@end

