//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIToolbarDelegate-Protocol.h"

@class UIBarButtonItem, UITableView;

@interface _TtC6Apollo25ComposePostViewController : UIViewController <UIToolbarDelegate>
{
    // Error parsing type: , name: postBarButtonItem
    // Error parsing type: , name: tableView
    // Error parsing type: , name: spinner
    // Error parsing type: , name: upperToolbar
    // Error parsing type: , name: postTypeSegmentedControl
    // Error parsing type: , name: subredditFooterTextView
    // Error parsing type: , name: subredditName
    // Error parsing type: , name: subreddit
    // Error parsing type: , name: postType
    // Error parsing type: , name: chosenPhotos
    // Error parsing type: , name: flairOptions
    // Error parsing type: , name: selectedFlairOption
    // Error parsing type: , name: temporaryPostingAccount
    // Error parsing type: , name: assetSelectionInfo
    // Error parsing type: , name: postTitle
    // Error parsing type: , name: postLink
    // Error parsing type: , name: markdown
    // Error parsing type: , name: currentUploadingTasks
    // Error parsing type: , name: titleTextViewHeight
    // Error parsing type: , name: titleTextViewShowingPlaceholder
    // Error parsing type: , name: charityURLString
    // Error parsing type: , name: toolbarHeight
    // Error parsing type: , name: accountChooserTitleView
    // Error parsing type: , name: maximumNumberOfTitleCharacters
    // Error parsing type: , name: bodyCharacterLimit
    // Error parsing type: , name: needsCaptcha
    // Error parsing type: , name: captchaIdentifier
    // Error parsing type: , name: captchaValue
    // Error parsing type: , name: distinguish
    // Error parsing type: , name: sticky
    // Error parsing type: , name: lock
    // Error parsing type: , name: distinguishToggle
    // Error parsing type: , name: stickyToggle
    // Error parsing type: , name: lockToggle
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)accountSwitcherTitleButtonTapped:(id)arg1;
- (void)linkTextFieldEditingDidBegin:(id)arg1;
- (void)linkTextFieldValueChanged:(id)arg1;
- (void)lockSwitchToggled:(id)arg1;
- (void)stickySwitchToggled:(id)arg1;
- (void)distinguishSwitchToggled:(id)arg1;
- (void)pasteButtonTapped:(id)arg1;
- (void)postTypeSegmentedControlValueChanged:(id)arg1;
- (void)postButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)applicationFinishedRestoringState;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property(nonatomic, readonly) _Bool shouldAutorotate;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak UIBarButtonItem *postBarButtonItem; // @synthesize postBarButtonItem;

@end

